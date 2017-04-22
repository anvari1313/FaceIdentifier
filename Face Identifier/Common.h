#ifndef __Common_H__
#define __Common_H__
#include <opencv\cv.h> 
#include <opencv\cvaux.h>
#include <opencv\highgui.h>
#include "GlobalVars.h"
#include <fstream>
#include <string>
using namespace cv;
using namespace std;

bool operator > (CvRect rec1, CvRect rec2);
bool operator < (CvRect rec1, CvRect rec2);
void recOnFace(IplImage* img, CvRect &face);
class CommonCLS
{
public:
	static CvRect faceRec;
	static IplImage *img;
	static CvRect faceFrame;
private:

};
#endif