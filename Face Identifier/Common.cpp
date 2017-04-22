#include "stdafx.h"
#include "Common.h"
CvRect CommonCLS::faceRec;
IplImage *CommonCLS::img;
CvRect CommonCLS::faceFrame;

bool operator > (CvRect rec1, CvRect rec2)
{
	return ((rec1.width * rec1.height) > (rec2.width * rec2.height));
}
bool operator < (CvRect rec1, CvRect rec2)
{
	return ((rec1.width * rec1.height) < (rec2.width * rec2.height));
}
void recOnFace(IplImage* img, CvRect &face)
{
	/*
	CvMemStorage* storage = cvCreateMemStorage(0);
	//CvHaarClassifierCascade* cascade = (CvHaarClassifierCascade*)cvLoad( "train.idx", 0, 0, 0 );
	static CvScalar colors[] = {{{0,0,255}}, {{0,128,255}},{{0,255,255}},{{0,255,0}},{{255,128,0}},{{255,255,0}},{{255,0,0}}, {{255,0,255}}}; //Just some pretty colors to draw with
	// IMAGE PREPARATION:
	IplImage* gray = cvCreateImage(cvSize(img->width, img->height), 8, 1);
	
	cvCvtColor( img, gray, CV_BGR2GRAY );
	cvEqualizeHist( gray, gray );
	// DETECT OBJECTS IF ANY
	//
	cvClearMemStorage( storage );
	CvSeq* objects = cvHaarDetectObjects(gray,cascade,storage, 1.1,2,0 ,cvSize(30, 30));
	// LOOP THROUGH FOUND OBJECTS AND DRAW BOXES AROUND THEM
	//
	CvRect bigRec = cvRect(-1,-1,-1,-1);
	if (objects->total == 0)
	{
		face = bigRec;
		return;
	}
	for(int i = 0; i < objects->total; i++ ) 
	{
		CvRect* r = (CvRect*)cvGetSeqElem( objects, i );
		if (bigRec < (*r))
			bigRec = (*r);
	}
	bigRec.x += 40;
	bigRec.width -= 80;
	face = bigRec;
	cvReleaseImage(&gray);*/
	face = CommonCLS::faceFrame;
}