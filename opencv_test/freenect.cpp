    #include <libfreenect.h>
    #include <pthread.h>
    #include <stdio.h>
    #include "opencv2/highgui/highgui.hpp"
    #include "opencv/cv.h"

    using namespace cv;

    volatile int freenect_die;
    static int freenect_rgb_frames = 0;
    static int freenect_depth_frames = 0;
    static int rgblast = 0;
    static int depthlast = 0;

    static freenect_device *f_dev;
    static freenect_context *f_ctx;
    static unsigned char *freenect_rgb_buffer0;
    static unsigned char *freenect_rgb_buffer1;
    static unsigned short *freenect_depth_buffer0;
    static unsigned short *freenect_depth_buffer1;

    pthread_t fnkt_thread;
    pthread_mutex_t buf_mutex = PTHREAD_MUTEX_INITIALIZER;
    // pthread_cond_t frame_cond = PTHREAD_COND_INITIALIZER;

    void *freenect_threadfunc(void* arg)
    {
        int res;
        while(!freenect_die)
        {
        res=freenect_process_events(f_ctx);
        if ( (res<0) && (res!=-10) )
        {
           // printf("threadfunc returns %d\n",res);
           freenect_die = 1;
         }
       }
       printf("threadfunc died %d\n",res);
       return NULL;
     }

     // this is called by libfreenect whenever a depth image is available.
     // This uses a ping-pong double buffer. One buffer is made available while
     // the other is being filled.
     void depth_callback(freenect_device *dev, void *depth, uint32_t timestamp)
    {
       pthread_mutex_lock(&buf_mutex);
       if (depthlast == 0) {
         freenect_set_depth_buffer(f_dev, freenect_depth_buffer0);
         depthlast = 1;
       } else {
         freenect_set_depth_buffer(f_dev, freenect_depth_buffer1);
         depthlast = 0;
       }
       freenect_depth_frames++;
       // pthread_cond_signal(&frame_cond);
       pthread_mutex_unlock(&buf_mutex);
     }

     // this is called by libfreenect whenever an rgb image is available.
     // This uses a ping-pong double buffer. One buffer is made available while
     // the other is being filled.
     void rgb_callback(freenect_device *dev, void *rgb, uint32_t timestamp)
     {
        pthread_mutex_lock(&buf_mutex);
        if (rgblast == 0)
        {
            freenect_set_video_buffer(f_dev, freenect_rgb_buffer0);
            rgblast = 1;
        }
        else
        {
            freenect_set_video_buffer(f_dev, freenect_rgb_buffer1);
            rgblast = 0;
        }
        freenect_rgb_frames++;
        // pthread_cond_signal(&frame_cond);
        pthread_mutex_unlock(&buf_mutex);
     }


int main()
{
    int nr_device, res;
    int n=0;
    res = freenect_init(&f_ctx, NULL);
    freenect_set_log_level(f_ctx, FREENECT_LOG_DEBUG);
    freenect_select_subdevices(f_ctx, (freenect_device_flags)(FREENECT_DEVICE_CAMERA));
    nr_device = freenect_num_devices (f_ctx);
    if (nr_device < 1) printf("no kinect found");
    if (freenect_open_device(f_ctx, &f_dev, n) < 0)
    {
        printf("Could not open device\n");
    }
    freenect_set_video_mode(f_dev, freenect_find_video_mode(FREENECT_RESOLUTION_MEDIUM, FREENECT_VIDEO_RGB));
    freenect_set_depth_mode(f_dev, freenect_find_depth_mode(FREENECT_RESOLUTION_MEDIUM, FREENECT_DEPTH_11BIT));
    // freenect_set_depth_mode(f_dev, freenect_find_depth_mode(FREENECT_RESOLUTION_MEDIUM, FREENECT_DEPTH_MM));
    Mat rgb0, rgb1;
    Mat depth0, depth1;

    freenect_rgb_frames = 0;
    freenect_depth_frames = 0;
    //freenect_rgb_buffer0 = (void*)(IDX_PTR(rgb0,unsigned char));
    //freenect_depth_buffer0 = (void*)(IDX_PTR(depth0,unsigned short));
    //freenect_rgb_buffer1 = (void*)(IDX_PTR(rgb1,unsigned char));
    //freenect_depth_buffer1 = (void*)(IDX_PTR(depth1,unsigned short));

    freenect_set_video_buffer(f_dev, freenect_rgb_buffer0);
    freenect_set_depth_buffer(f_dev, freenect_depth_buffer0);
    freenect_set_depth_callback(f_dev, depth_callback);
    freenect_set_video_callback(f_dev, rgb_callback);
    freenect_start_video(f_dev);
    freenect_start_depth(f_dev);
    res = pthread_create(&fnkt_thread, NULL, freenect_threadfunc, NULL);
    if (res) { printf("pthread_create failed\n"); }

    return (0);
}
