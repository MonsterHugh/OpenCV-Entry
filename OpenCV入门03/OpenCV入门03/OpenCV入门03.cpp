// OpenCV入门03.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<opencv2\opencv.hpp>
using namespace cv;

void main()
{
	int a = 66, b = 68;
	printf("\n\t%d %d\n", a, b);
	printf("\n\t%06d,%06d\n", a, b);
	printf("\n\t%c,%c\n", a, b);
	printf("\n\t结果为：a=%d,b=%d", a, b);
	getchar();
}