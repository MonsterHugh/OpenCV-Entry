// OpenCV入门09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<opencv2/imgproc/imgproc.hpp>
#include<opencv2/highgui/highgui.hpp>
using namespace cv;

void main()
{
	Mat srcImage = imread("04.png", 1), dstImage;
	cvtColor(srcImage, dstImage, COLOR_BGR2GRAY);
	namedWindow("效果图", WINDOW_NORMAL);
	imshow("效果图", dstImage);
	waitKey();
}