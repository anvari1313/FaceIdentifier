#ifndef __GLOBAL_VARS_H_
#define __GLOBAL_VARS_H_
#include <opencv\cv.h> 
#include <opencv\cvaux.h>
#include <opencv\highgui.h>
using namespace cv;
#endif // #! __CV_INCLUDE
#define APP_TITLE "Face Identifier"

extern IplImage *frame;
extern CvHaarClassifierCascade* cascade;
extern int fps;
extern IplImage *faceDetected;
extern std::vector<IplImage *> faces;
