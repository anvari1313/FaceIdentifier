#include "StdAfx.h"
#include "_FaceRecognizer.h"

std::vector<IplImage *> _FaceRecognizer::_faces;
std::vector<int>		_FaceRecognizer::id;
CvSize					_FaceRecognizer::imgsize;
int						_FaceRecognizer::nEigens;
IplImage **				_FaceRecognizer::eigenVectArr;
CvMat  *				_FaceRecognizer::eigenValMat;
IplImage *				_FaceRecognizer::pAvgTrainImg;
CvMat *					_FaceRecognizer::projectedTrainFaceMat;
double					_FaceRecognizer::threshold;
CvMat *					_FaceRecognizer::personNumTruthMat;
int						_FaceRecognizer::nPersons = 0;

void _FaceRecognizer::add(std::vector<IplImage *> person_face, int person_id)
{
	IplImage **sized = new IplImage *[person_face.size()];
	for (int i  = 0 ; i < person_face.size() ; i++)
		sized[i] = cvCreateImage(imgsize, IPL_DEPTH_8U, 3);

	IplImage **gray = new IplImage *[person_face.size()];
	for (int i = 0 ; i < person_face.size() ; i++)
		gray[i] = cvCreateImage(imgsize,IPL_DEPTH_8U,1);

	for(int i = 0 ; i < person_face.size() ; i++)
	{
		cvResize(person_face[i], sized[i], CV_INTER_LINEAR);
		cvCvtColor(sized[i], gray[i], CV_BGR2GRAY);
		cvEqualizeHist(gray[i],gray[i]);
		_faces.push_back(gray[i]);
		id.push_back(person_id);
	}
	nPersons ++;
}

void _FaceRecognizer::learn()
{
	IplImage **face_arr = vectorToCArr();
	int j = _faces.size();
	int i;
	CvTermCriteria calcLimit;

 	nEigens = _faces.size() - 1;

	eigenVectArr = new IplImage *[nEigens];
	for (i = 0 ; i < nEigens ; i++)
		eigenVectArr[i] = cvCreateImage(imgsize, IPL_DEPTH_32F, 1);

	eigenValMat = cvCreateMat(1, nEigens, CV_32FC1);
	pAvgTrainImg = cvCreateImage(imgsize,IPL_DEPTH_32F, 1);
	calcLimit = cvTermCriteria(CV_TERMCRIT_ITER, nEigens, 1);
	personNumTruthMat = cvCreateMat(1, _faces.size() , CV_32SC1);

	for(int i = 0 ; i < _faces.size() ; i++)
	{
		*(personNumTruthMat->data.i + i) = id[i];
	}
	cvCalcEigenObjects(_faces.size(),
		(void *)face_arr,
		(void *)eigenVectArr,
		CV_EIGOBJ_NO_CALLBACK,
		0,
		0,
		&calcLimit,
		pAvgTrainImg,
		eigenValMat->data.fl);
	
	projectedTrainFaceMat = cvCreateMat(_faces.size(), nEigens, CV_32FC1);
	for(i = 0 ; i < _faces.size() ; i++)
	{
		cvEigenDecomposite(
			face_arr[i],
			nEigens,
			eigenVectArr,
			0, 0,
			pAvgTrainImg,
			projectedTrainFaceMat->data.fl + i * nEigens);
	}
}

IplImage **_FaceRecognizer::vectorToCArr()
{
	IplImage **res = new IplImage *[_faces.size()];
	for(int i = 0 ; i < _faces.size() ; i++)
	{
		res[i] = _faces[i];
	}
	return res;
}

int _FaceRecognizer::predict(IplImage *face)
{
	IplImage *sized = cvCreateImage(imgsize, IPL_DEPTH_8U, 3);
	IplImage *enhanced = cvCreateImage(imgsize, IPL_DEPTH_8U, 1);
	cvShowImage("tt", face);
	cvWaitKey();
	cvResize(face, sized, CV_INTER_LINEAR);
	
	
	cvCvtColor(sized, enhanced, CV_BGR2GRAY);
	cvEqualizeHist(enhanced ,enhanced);
	float *projectedTestFace;

	projectedTestFace = (float *)cvAlloc(nEigens * sizeof(float));
	
	int iNearest, nearest, truth;


	cvEigenDecomposite(
		enhanced,
		nEigens,
		eigenVectArr,
		0, 0,
		pAvgTrainImg,
		projectedTestFace);

	iNearest = findNearestNeighbor(projectedTestFace);
	if(iNearest != -13)
		return id[iNearest];
	else
		return -13;
}

int _FaceRecognizer::findNearestNeighbor(float * _projectedTestFace)
{
	double leastDistSq = DBL_MAX;
	int i, iTrain, iNearest;

	for(iTrain = 0; iTrain < _faces.size(); iTrain++)
	{
		double distSq = 0;

		for(i = 0 ; i < nEigens ; i++)
		{
			float d_i =
				_projectedTestFace[i] -
				projectedTrainFaceMat->data.fl[iTrain * nEigens + i];
			distSq += d_i * d_i / eigenValMat->data.fl[i];
		}
		
		if(distSq <= leastDistSq)
		{
			leastDistSq = distSq;
			iNearest = iTrain;
		}
	}
	if (leastDistSq > threshold)
		return -13;			// the person is not known
	else
		return iNearest;	// the person is known and his\her id is in iNearest
}

void _FaceRecognizer::save()
{
	std::ofstream file("perosnIDs.dat");
	CreateDirectoryA((LPCSTR)"pics", 0);

	for (System::Int32 i = 0; i < id.size(); i++)
	{
		std::string path = "pics\\";
		std::string temp;
		_String::MarshalString(i.ToString(), temp);
		path += temp + ".jpg";
		cvSaveImage(path.c_str(), _faces[i]);
		file << path << " " << id[i] << std::endl;
	}
	file.close();
}

void _FaceRecognizer::load()
{
	imgsize.width = 92;
 	imgsize.height = 112;
	threshold = 0.75;
	std::ifstream file("perosnIDs.dat");
	std::vector<IplImage *> paths;
	std::vector<int> _ids;
	System::Windows::Forms::MessageBox::Show("this is");
	while(!file.eof())
	{
		int personId;
		std::string imgPath;
		file >> imgPath >> personId;
		if(imgPath == "")
			break;
		paths.push_back(cvLoadImage(imgPath.c_str()));
		_ids.push_back(personId);
	}
	addPersonFromFile(paths,_ids);
}

void _FaceRecognizer::addPersonFromFile(std::vector<IplImage *> _pics, std::vector<int> _ids)
{
	if(_pics.size() == 0)
		return;

	std::vector<IplImage *>imgs;
	int _id;
	_id = _ids[0];
	imgs.push_back(_pics[0]);
	for(int i = 1; i < _pics.size(); i++)
	{
		if(_ids[i] == _id)
		{
			imgs.push_back(_pics[i]);
		}
		else
		{
			add(imgs, _id);
			imgs.clear();
			_id = _ids[i];
			imgs.push_back(_pics[i]);
		}
	}
	if (_pics.size() != 0)
	{
		add(imgs, _id);
		imgs.clear();
	}
}