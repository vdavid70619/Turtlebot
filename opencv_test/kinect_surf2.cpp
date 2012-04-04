#include <stdio.h>
#include <string.h>
#include <math.h>
#include <libfreenect.h>
#include <pthread.h>

#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <opencv2/features2d/features2d.hpp>

#define FREENECTOPENCV_WINDOW_D "Depthimage"
#define FREENECTOPENCV_WINDOW_N "Normalimage"
#define FREENECTOPENCV_RGB_DEPTH 3
#define FREENECTOPENCV_DEPTH_DEPTH 1
#define FREENECTOPENCV_RGB_WIDTH 640
#define FREENECTOPENCV_RGB_HEIGHT 480
#define FREENECTOPENCV_DEPTH_WIDTH 640
#define FREENECTOPENCV_DEPTH_HEIGHT 480
#define FREENECT_VIDEO_RGB_SIZE FREENECTOPENCV_RGB_WIDTH*FREENECTOPENCV_RGB_HEIGHT*FREENECTOPENCV_RGB_DEPTH

using namespace cv;

CvScalar target_color[4] =
{ // in BGR order
		{{   0,   0, 255,   0 }},  // red
		{{   0, 255,   0,   0 }},  // green
		{{ 255,   0,   0,   0 }},  // blue
		{{   0, 255, 255,   0 }}   // yellow
};

Mat img_old, img;
std::vector<KeyPoint> keypoints_old, keypoints;
Mat descriptors_old, descriptors;
bool first_time=true;

IplImage* depthimg = 0;
IplImage* rgbimg = 0;
IplImage* tempimg = 0;

pthread_mutex_t mutex_depth = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t mutex_rgb = PTHREAD_MUTEX_INITIALIZER;
pthread_t cv_thread;

// callback for depthimage, called by libfreenect void depth_cb(freenect_device dev, void depth, uint32_t timestamp)
void depth_cb(freenect_device *dev, void *depth, uint32_t timestamp)
{
    cv::Mat depth8; cv::Mat mydepth = cv::Mat( FREENECTOPENCV_DEPTH_WIDTH,FREENECTOPENCV_DEPTH_HEIGHT, CV_16UC1, depth);

    mydepth.convertTo(depth8, CV_8UC1, 1.0/4.0);
    pthread_mutex_lock( &mutex_depth );
    memcpy(depthimg->imageData, depth8.data, 640*480);
    // unlock mutex
    pthread_mutex_unlock( &mutex_depth );
}

// callback for rgbimage, called by libfreenect

void rgb_cb(freenect_device *dev, void *rgb, uint32_t timestamp) {

    // lock mutex for opencv rgb image
    pthread_mutex_lock( &mutex_rgb );
    memcpy(rgbimg->imageData, rgb, FREENECT_VIDEO_RGB_SIZE);
    // unlock mutex
    pthread_mutex_unlock( &mutex_rgb );
}

 void *cv_threadfunc (void *ptr)
 {
     cvNamedWindow( FREENECTOPENCV_WINDOW_D, CV_WINDOW_AUTOSIZE );
     cvNamedWindow( FREENECTOPENCV_WINDOW_N, CV_WINDOW_AUTOSIZE );
     depthimg = cvCreateImage(cvSize(FREENECTOPENCV_DEPTH_WIDTH, FREENECTOPENCV_DEPTH_HEIGHT), IPL_DEPTH_8U, FREENECTOPENCV_DEPTH_DEPTH);
     rgbimg = cvCreateImage(cvSize(FREENECTOPENCV_RGB_WIDTH, FREENECTOPENCV_RGB_HEIGHT), IPL_DEPTH_8U, FREENECTOPENCV_RGB_DEPTH);
     tempimg = cvCreateImage(cvSize(FREENECTOPENCV_RGB_WIDTH, FREENECTOPENCV_RGB_HEIGHT), IPL_DEPTH_8U, FREENECTOPENCV_RGB_DEPTH);

    int index=0;
    // use image polling
    while (1) {

            //lock mutex for depth image
            pthread_mutex_lock( &mutex_depth );
            // show image to window
            cvCvtColor(depthimg,tempimg,CV_GRAY2BGR);
            cvCvtColor(tempimg,tempimg,CV_HSV2BGR);
            cvShowImage(FREENECTOPENCV_WINDOW_D,tempimg);
            //unlock mutex for depth image
            pthread_mutex_unlock( &mutex_depth );





            //lock mutex for rgb image
            pthread_mutex_lock( &mutex_rgb );
            // show image to window
            cvCvtColor(rgbimg,tempimg,CV_BGR2RGB);

            //Initialization
            img=tempimg;
            //Detect the keypoints using SURF Detector&Calculate descriptors (feature vectors)
            int minHessian = 1000;

            SurfFeatureDetector detector( minHessian );
            SurfDescriptorExtractor extractor;
            FlannBasedMatcher matcher;
            std::vector< DMatch > matches;
            if(first_time)
            {
                img_old=tempimg;
                detector.detect( img_old, keypoints_old );
                extractor.compute( img_old, keypoints_old, descriptors_old );
                first_time=false;
            }
            //
            if(1)//index%1==0)
            {
                detector.detect( img, keypoints );
                extractor.compute( img, keypoints, descriptors );
                matcher.match( descriptors_old, descriptors, matches );
            }
            //printf("--Matches: %d\n", matches.size());

            //Calculation of max and min distances between matching keypoints
            double max_dist = 0; double min_dist = 100;
            for( int i = 0; i < matches.size(); i++ )
            {
                double dist = matches[i].distance;
                if( dist < min_dist ) min_dist = dist;
                if( dist > max_dist ) max_dist = dist;
            }

            //printf("-- Max dist : %f \n", max_dist );
            //printf("-- Min dist : %f \n", min_dist );

            //Draw only good matches
            std::vector< DMatch > good_matches;

            for( int i = 0; i < matches.size(); i++ )
            {
                if( matches[i].distance < 3*min_dist )
                {
                    good_matches.push_back( matches[i]);
                }
            }

            for(int i=0; i<good_matches.size(); i++)
            {
                int i1=good_matches[i].queryIdx;
                int i2=good_matches[i].trainIdx;
                const KeyPoint &kp_old=keypoints_old[i1];
                const KeyPoint &kp=keypoints[i2];
                Point2f pt_old=kp_old.pt;
                Point2f pt=kp.pt;

                line(img, Point(cvRound(pt_old.x), cvRound(pt_old.y)), Point(cvRound(pt.x), cvRound(pt.y)), target_color[1], 1, CV_AA, 0);
            }

            imshow(FREENECTOPENCV_WINDOW_N, img);

            //Copy Data
            img_old=img.clone();
            keypoints_old=keypoints;
            descriptors_old=descriptors;

            //unlock mutex
            pthread_mutex_unlock( &mutex_rgb );

            // wait for quit key
            if( cvWaitKey( 15 )==27 ) break;

            index++;
    }
    pthread_exit(NULL);
}

int main(int argc, char **argv) {

    freenect_context *f_ctx;
    freenect_device *f_dev;

    int res = 0;
    int die = 0;
    printf("Kinect camera test\n");

    if (freenect_init(&f_ctx, NULL) < 0) {
                    printf("freenect_init() failed\n");
                    return 1;
            }

            if (freenect_open_device(f_ctx, &f_dev, 0) < 0) {
                    printf("Could not open device\n");
                    return 1;
            }

    freenect_set_depth_callback(f_dev, depth_cb);
    freenect_set_video_callback(f_dev, rgb_cb);
    //freenect_set_video_mode(f_dev, FREENECT_VIDEO_RGB);

    // create opencv display thread
    res = pthread_create(&cv_thread, NULL, cv_threadfunc, (void*) depthimg);
    if (res) {
            printf("pthread_create failed\n");
            return 1;
    }

    printf("init done\n");
    freenect_start_depth(f_dev);
    freenect_start_video(f_dev);

    while(!die && freenect_process_events(f_ctx) >= 0 );
}
