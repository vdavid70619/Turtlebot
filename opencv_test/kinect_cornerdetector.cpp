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

            // Corner Detection: MinEigenVal method
            const int MAX_CORNERS = 100;
            CvPoint2D32f corners[MAX_CORNERS] = {0};
            int corner_count = MAX_CORNERS;
            double quality_level = 0.1;
            double min_distance = 5;
            int eig_block_size = 3;
            int use_harris = false;

            // Convert the frame image to grayscale
            IplImage* gray_frame=0;
            IplImage* eig_image=0;
            IplImage* temp_image=0;

            if( ! gray_frame )  gray_frame = cvCreateImage(cvSize(FREENECTOPENCV_RGB_WIDTH, FREENECTOPENCV_RGB_HEIGHT), IPL_DEPTH_8U, 1);
            cvCvtColor(tempimg, gray_frame,CV_BGR2GRAY);

            if ( !eig_image) eig_image =cvCreateImage(cvSize(FREENECTOPENCV_RGB_WIDTH, FREENECTOPENCV_RGB_HEIGHT), IPL_DEPTH_32F, 1);
            if ( !temp_image) temp_image = cvCreateImage(cvSize(FREENECTOPENCV_RGB_WIDTH, FREENECTOPENCV_RGB_HEIGHT), IPL_DEPTH_32F, 1);


            cvGoodFeaturesToTrack(gray_frame,
				eig_image,                    // output
				temp_image,
				corners,
				&corner_count,
				quality_level,
				min_distance,
				NULL,
				eig_block_size,
				use_harris);

            for( int i = 0; i < corner_count; i++)
            {
                int radius = FREENECTOPENCV_RGB_HEIGHT/25;
                cvCircle(tempimg,cvPoint((int)(corners[i].x + 0.5f),(int)(corners[i].y + 0.5f)),radius,target_color[0]);
            }

            cvShowImage(FREENECTOPENCV_WINDOW_N, tempimg);

            //unlock mutex
            pthread_mutex_unlock( &mutex_rgb );

            // wait for quit key
            if( cvWaitKey( 15 )==27 ) break;

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
