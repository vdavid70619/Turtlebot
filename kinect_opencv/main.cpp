#include <string>
#include <iostream>
#include <iomanip>
#include <vector>

// OpenCV stuff
#include <opencv/cv.h>
#include <opencv/highgui.h>
// OpenCV/Kinect compat
#include "libfreenect.h"
#include "libfreenect_sync.h"

using namespace cv;
using namespace std;

IplImage *freenect_sync_get_depth_cv(int index);
IplImage *freenect_sync_get_rgb_cv(int index);


IplImage *freenect_sync_get_depth_cv(int index)
{
	static IplImage *image = 0;
	static char *data = 0;
	if (!image) image = cvCreateImageHeader(cvSize(640,480), 16, 1);
	unsigned int timestamp;
	if (freenect_sync_get_depth((void**)&data, &timestamp, index, FREENECT_DEPTH_11BIT))
		return NULL;
	cvSetData(image, data, 640*2);
	return image;
}

IplImage *freenect_sync_get_rgb_cv(int index)
{
	static IplImage *image = 0;
	static char *data = 0;
	if (!image) image = cvCreateImageHeader(cvSize(640,480), 8, 3);
	unsigned int timestamp;
	if (freenect_sync_get_video((void**)&data, &timestamp, index, FREENECT_VIDEO_RGB))
		return NULL;
	cvSetData(image, data, 640*3);
	return image;
}

/*
void kmeans()
{
            //kmeans test
            unsigned char cluster[lines][640];
            unsigned char center[2]={255,128,0};

            unsigned char temp_center[2];

            unsigned int counter[2]={0,0};
            unsigned int sum[2]={0,0};

            do
            {
                temp_center[0]=center[0];
                temp_center[1]=center[1];

                sum[0]=0;
                sum[1]=0;

                counter[0]=0;
                counter[1]=0;

                for(int i=0; i<lines; i++)
                {
                    for(int j=0; j<640; j++)
                    {
                        if((data[i][j]-center[0])*(data[i][j]-center[0]) < (data[i][j]-center[1])*(data[i][j]-center[1]))
                        {
                            cluster[i][j]=0;
                            counter[0]++;
                            sum[0]+=data[i][j];
                        }
                        else
                        {
                            cluster[i][j]=1;
                            counter[1]++;
                            sum[1]+=data[i][j];
                        }

                    }
                }

                if(counter[0]==0) center[0]=0;
                else center[0]=sum[0]/counter[0];
                if(counter[1]==0) center[1]=0;
                else center[1]=sum[1]/counter[1];

            }while((temp_center[0]!=center[0])||(temp_center[1]!=center[1])||(temp_center[2]!=center[2]));


            cout<<(int) center[0]<<"-----"<<(int) center[1]<<"-----"<<(int) center[2]<<"\n";

}
*/
/*
void kmeans3()
{
            //kmeans test
            unsigned char cluster[lines][640];
            unsigned char center[3]={255,128,0};

            unsigned char temp_center[3];

            unsigned int counter[3]={0,0,0};
            unsigned int sum[3]={0,0,0};

            do
            {
                temp_center[0]=center[0];
                temp_center[1]=center[1];
                temp_center[2]=center[2];

                sum[0]=0;
                sum[1]=0;
                sum[2]=0;
                counter[0]=0;
                counter[1]=0;
                counter[2]=0;

                int min=65535;
                int min_cluster=0;
                int temp=0;

                for(int i=0; i<lines; i++)
                {
                    for(int j=0; j<640; j++)
                    {
                        min_cluster=0;
                        min=65535;
                        for(int k=0; k<3; k++)
                        {
                            temp=(data[i][j]-center[k])*(data[i][j]-center[k]);
                            if(temp<min)
                            {
                                min=temp;
                                min_cluster=k;
                            }
                        }

                        cluster[i][j]=min_cluster;
                        counter[min_cluster]++;
                        sum[min_cluster]+=data[i][j];
                    }
                }

                if(counter[0]==0) center[0]=0;
                else center[0]=sum[0]/counter[0];
                if(counter[1]==0) center[1]=0;
                else center[1]=sum[1]/counter[1];
                if(counter[2]==0) center[2]=0;
                else center[2]=sum[2]/counter[2];

            }while((temp_center[0]!=center[0])||(temp_center[1]!=center[1])||(temp_center[2]!=center[2]));


            cout<<(int) center[0]<<"-----"<<(int) center[1]<<"-----"<<(int) center[2]<<"\n";

}
}
*/


int main() {
	//cvNamedWindow("rgb");

	while (cvWaitKey(10) != 27) {
		//IplImage *img = freenect_sync_get_depth_cv(0);
		//cvShowImage("depth", img);
        IplImage *img = freenect_sync_get_rgb_cv(0);

        Mat I(img);
        Mat I_yuv;
        Mat grayMat(640, 480, CV_8UC1);
        //cvtColor(I, I_yuv, CV_RGB2YCrCb);
        cvtColor(I, grayMat, CV_RGB2GRAY);

        int lines=2;

        int last_middle=0;

        unsigned char data[lines][640];
        for(int index=0; index<480/lines; index++)
        {
            for(int x=0; x<lines; x++)
                for(int y=0; y<640; y++)
                {
                    //grayMat.at<uchar>(x,y)+=20;
                    data[lines-x-1][y]=grayMat.at<uchar>(480-x-1-index*lines,y);
                }

            //kmeans test
            unsigned char cluster[lines][640];
            unsigned char center[2]={255,0};

            unsigned char temp_center[2];

            unsigned int counter[2]={0,0};
            unsigned int sum[2]={0,0};

            do
            {
                temp_center[0]=center[0];
                temp_center[1]=center[1];

                sum[0]=0;
                sum[1]=0;

                counter[0]=0;
                counter[1]=0;

                for(int i=0; i<lines; i++)
                {
                    for(int j=0; j<640; j++)
                    {
                        if((data[i][j]-center[0])*(data[i][j]-center[0]) < (data[i][j]-center[1])*(data[i][j]-center[1]))
                        {
                            cluster[i][j]=0;
                            counter[0]++;
                            sum[0]+=data[i][j];
                        }
                        else
                        {
                            cluster[i][j]=1;
                            counter[1]++;
                            sum[1]+=data[i][j];
                        }

                    }
                }

                if(counter[0]==0) center[0]=0;
                else center[0]=sum[0]/counter[0];
                if(counter[1]==0) center[1]=0;
                else center[1]=sum[1]/counter[1];

            }while((temp_center[0]!=center[0])||(temp_center[1]!=center[1]));


            //cout<<(int) center[0]<<"-----"<<(int) center[1]<<"\n";

            //middle[2]={0,639};

            int white=1;
            if(center[0]>center[1]) white=0;

            int pcluster[lines][640];
            int position[2]={0,640};
            int psum[2]={0,0};
            int pcounter[2]={0,0};
            int temp_position[2];

            do
            {
                temp_position[0]=position[0];
                temp_position[1]=position[1];

                psum[0]=0;
                psum[1]=0;

                pcounter[0]=0;
                pcounter[1]=0;

                for(int x=0; x<lines; x++)
                    for(int y=0; y<640; y++)
                    {
                        if(cluster[x][y]==white)
                        {
                            if((y-position[0])*(y-position[0])<(y-position[1])*(y-position[1]))
                            {
                                pcluster[x][y]=0;
                                pcounter[0]++;
                                psum[0]+=y;
                            }
                            else
                            {
                                pcluster[x][y]=1;
                                pcounter[1]++;
                                psum[1]+=y;
                            }
                        }
                    }

                if(pcounter[0]==0) position[0]=0;
                else position[0]=psum[0]/pcounter[0];
                if(pcounter[1]==0) position[1]=0;
                else position[1]=psum[1]/pcounter[1];
            }while((temp_position[0]!=position[0])||(temp_position[1]!=position[1]));


            cout<<(int) position[0]<<"-----"<<(int) position[1]<<"\n";

            for(int x=0; x<lines; x++)
                for(int y=0; y<640; y++)
                {
                    //grayMat.at<uchar>(x,y)+=20;
                    grayMat.at<uchar>(480-x-1-index*lines,y)=center[cluster[x][y]];
                }


            for(int x=0; x<lines; x++)
            {
                    if((position[0]-position[1]<220)&&(position[0]-position[1]>-220)) grayMat.at<uchar>(480-x-1-index*lines,(position[0]+position[1])/2)=0;
                    else
                    {
                        grayMat.at<uchar>(480-x-1-index*lines,position[0])=0;
                        grayMat.at<uchar>(480-x-1-index*lines,position[1])=0;
                    }
            }


        }
		//cvShowImage("rgb", img);
		imshow("yuv", grayMat);
		imshow("rgb", I);
	}


}
