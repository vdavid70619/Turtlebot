#include "opencv/cv.h"
#include "opencv/highgui.h"
#include <math.h>

int main(int argc, char** argv)
{
    /* A matrix data */
    float A[][2] = { {1, 1,}, {0, 1 }};

    IplImage* img = cvCreateImage( cvSize(500,500), 8, 3 );
    CvKalman* kalman = cvCreateKalman( 2, 1, 0 );

    /* only phi (angle) is measured */
    CvMat* measurement = cvCreateMat( 1, 1, CV_32FC1 );

    int code = -1;


    cvZero( measurement );
    cvNamedWindow( "Kalman", 1 );

    memcpy( kalman->transition_matrix->data.fl, A, sizeof(A));
    cvSetIdentity( kalman->measurement_matrix, cvRealScalar(1) );
    cvSetIdentity( kalman->process_noise_cov, cvRealScalar(1e-5) );
    cvSetIdentity( kalman->measurement_noise_cov, cvRealScalar(1e-1) );
    cvSetIdentity( kalman->error_cov_post, cvRealScalar(1));

    for(;;)
    {

        int rand=0;

        for(;;)
        {
            #define calc_point(angle)                                      \
                cvPoint( cvRound(img->width/2 + img->width/3*cos(angle)),  \
                         cvRound(img->height/2 - img->width/3*sin(angle)))


            /* predict point position */
            const CvMat* prediction = cvKalmanPredict( kalman, 0 );
            float predict_angle = prediction->data.fl[0];
            CvPoint predict_pt = calc_point(predict_angle);
            float measurement_angle;
            CvPoint measurement_pt, measurement_pt2;


            measurement->data.fl[0]=rand;
            //measurement->data.fl[1]=rand;
            measurement_pt = calc_point(rand);
            //measurement_pt2= calc_point(rand);

            /* plot points */
            #define draw_cross( center, color, d )                        \
                cvLine( img, cvPoint( center.x - d, center.y - d ),       \
                             cvPoint( center.x + d, center.y + d ),       \
                             color, 1, 0 );                               \
                cvLine( img, cvPoint( center.x + d, center.y - d ),       \
                             cvPoint( center.x - d, center.y + d ),       \
                             color, 1, 0 )

            cvZero( img );

            draw_cross( measurement_pt, CV_RGB(255,0,0), 3 );
            draw_cross( predict_pt, CV_RGB(0,255,0), 3 );
            //draw_cross( measurement_pt2, CV_RGB(0,0,255), 3 );
            /* adjust Kalman filter state */
            cvKalmanCorrect( kalman, measurement );


            cvShowImage( "Kalman", img );

            rand++;
            code = cvWaitKey( 100 );

            if( code > 0 ) /* break current simulation by pressing a key */
                break;
        }
        if( code == 27 ) /* exit by ESCAPE */
            break;
    }

    return 0;
}
