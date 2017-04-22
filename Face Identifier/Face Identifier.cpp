// Face Identifier.cpp : main project file.

#include "stdafx.h"
#include "Splash.h"

#ifndef __CV_INCLUDE_
#define __CV_INCLUDE_
#include <opencv\cv.h>
#include <opencv\cvaux.h>
#include <opencv\highgui.h>
using namespace cv;
#endif // #! __CV_INCLUDE

using namespace FaceIdentifier;

CvHaarClassifierCascade* cascade;
int fps;
IplImage *frame;
IplImage *faceDetected;
std::vector<IplImage *> faces;

[STAThreadAttribute]

int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Splash());
	return 0;
}
