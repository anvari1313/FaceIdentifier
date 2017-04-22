#ifndef ___FaceRecognizer_H__
#define ___FaceRecognizer_H__
#include <vector>
#include <opencv\cv.h>
#include <opencv\cvaux.h>
#include <opencv\highgui.h>
#include <Windows.h>
#include <fstream>
#include "_String.h"

class _FaceRecognizer
{
// private class fields
private:static std::vector<IplImage *>_faces;
private:static std::vector<int>id;
private:static CvSize imgsize;
private:static int nEigens;
private:static IplImage **eigenVectArr;
private:static CvMat  *eigenValMat;
private:static IplImage *pAvgTrainImg;
private:static CvMat *projectedTrainFaceMat;
private:static double threshold;
private:static CvMat *personNumTruthMat;
private:static int nPersons;
// private class methods
private:static IplImage **vectorToCArr();
private:static int findNearestNeighbor(float * _projectedTestFace);
private:static void addPersonFromFile(std::vector<IplImage *> _pics, std::vector<int> _ids);
// public class methods
public:static void add(std::vector<IplImage *> person_face, int person_id);
public:static void learn();
public:static void save();
public:static void load();
public:static int predict(IplImage *face);
};
#endif ___FaceRecognizer_H__