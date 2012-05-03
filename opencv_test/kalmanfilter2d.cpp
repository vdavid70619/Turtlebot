#include "opencv/cv.h"
#include "opencv/highgui.h"
#include <math.h>

using namespace cv;

int main(int argc, char** argv)
{
    /* A matrix data */
    //const float A[] = { 1, 1, 0, 1 };


    KalmanFilter KF(4, 2, 0);
    KF.transitionMatrix = *(Mat_<float>(4, 4) << 1,0,1,0,   0,1,0,1,  0,0,1,0,  0,0,0,1);
    Mat_<float> measurement(2,1); measurement.setTo(Scalar(0));

    // init...
    KF.statePre.at<float>(0) = mouse_info.x;
    KF.statePre.at<float>(1) = mouse_info.y;
    KF.statePre.at<float>(2) = 0;
    KF.statePre.at<float>(3) = 0;
    setIdentity(KF.measurementMatrix);
    setIdentity(KF.processNoiseCov, Scalar::all(1e-4));
    setIdentity(KF.measurementNoiseCov, Scalar::all(1e-1));
    setIdentity(KF.errorCovPost, Scalar::all(.1));

        for(;;)
        {
            // First predict, to update the internal statePre variable
            Mat prediction = KF.predict();
            Point predictPt(prediction.at<float>(0),prediction.at<float>(1));

            // Get mouse point
            measurement(0) = mouse_info.x;
            measurement(1) = mouse_info.y;

            Point measPt(measurement(0),measurement(1));

            // The "correct" phase that is going to use the predicted value and our measurement
            Mat estimated = KF.correct(measurement);
            Point statePt(estimated.at<float>(0),estimated.at<float>(1));
        }

    return 0;
}
