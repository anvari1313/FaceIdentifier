#include "stdafx.h"
#include "Main.h"
#include "Common.h"

FaceIdentifier::Main::Main(void)
{
	InitializeComponent();
	//
	//TODO: Add the constructor code here
	//
}
void FaceIdentifier::Main::InitializeComponent(void)
{
	this->components = (gcnew System::ComponentModel::Container());
	System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
	this->menu = (gcnew System::Windows::Forms::MenuStrip());
	this->personToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->detectionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->startFaceDetectionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->button1 = (gcnew System::Windows::Forms::Button());
	this->pbWebCam = (gcnew System::Windows::Forms::PictureBox());
	this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
	this->menu->SuspendLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbWebCam))->BeginInit();
	this->SuspendLayout();
	// 
	// menu
	// 
	this->menu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->personToolStripMenuItem, 
		this->detectionToolStripMenuItem});
	this->menu->Location = System::Drawing::Point(0, 0);
	this->menu->Name = L"menu";
	this->menu->Size = System::Drawing::Size(633, 24);
	this->menu->TabIndex = 1;
	this->menu->Text = L"menuStrip1";
	// 
	// personToolStripMenuItem
	// 
	this->personToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->newToolStripMenuItem});
	this->personToolStripMenuItem->Name = L"personToolStripMenuItem";
	this->personToolStripMenuItem->Size = System::Drawing::Size(55, 20);
	this->personToolStripMenuItem->Text = L"Person";
	// 
	// newToolStripMenuItem
	// 
	this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
	this->newToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
	this->newToolStripMenuItem->Size = System::Drawing::Size(141, 22);
	this->newToolStripMenuItem->Text = L"&New";
	this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::newToolStripMenuItem_Click);
	// 
	// detectionToolStripMenuItem
	// 
	this->detectionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->startFaceDetectionToolStripMenuItem});
	this->detectionToolStripMenuItem->Name = L"detectionToolStripMenuItem";
	this->detectionToolStripMenuItem->Size = System::Drawing::Size(70, 20);
	this->detectionToolStripMenuItem->Text = L"Detection";
	// 
	// startFaceDetectionToolStripMenuItem
	// 
	this->startFaceDetectionToolStripMenuItem->Name = L"startFaceDetectionToolStripMenuItem";
	this->startFaceDetectionToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
	this->startFaceDetectionToolStripMenuItem->Size = System::Drawing::Size(219, 22);
	this->startFaceDetectionToolStripMenuItem->Text = L"Start Face Detection";
	this->startFaceDetectionToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::startFaceDetectionToolStripMenuItem_Click);
	// 
	// button1
	// 
	this->button1->Location = System::Drawing::Point(187, 27);
	this->button1->Name = L"button1";
	this->button1->Size = System::Drawing::Size(61, 26);
	this->button1->TabIndex = 2;
	this->button1->Text = L"button1";
	this->button1->UseVisualStyleBackColor = true;
	this->button1->Click += gcnew System::EventHandler(this, &Main::button1_Click);
	// 
	// pbWebCam
	// 
	this->pbWebCam->Location = System::Drawing::Point(37, 42);
	this->pbWebCam->Name = L"pbWebCam";
	this->pbWebCam->Size = System::Drawing::Size(211, 217);
	this->pbWebCam->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
	this->pbWebCam->TabIndex = 3;
	this->pbWebCam->TabStop = false;
	// 
	// Main
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(633, 443);
	this->Controls->Add(this->button1);
	this->Controls->Add(this->menu);
	this->Controls->Add(this->pbWebCam);
	this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
	this->Name = L"Main";
	this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
	this->Text = L"Face Identifier";
	this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
	this->Resize += gcnew System::EventHandler(this, &Main::Main_Resize);
	this->menu->ResumeLayout(false);
	this->menu->PerformLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbWebCam))->EndInit();
	this->ResumeLayout(false);
	this->PerformLayout();

}
void FaceIdentifier::Main::resize()
{
	pbWebCam->Height = this->Height - 85;
	pbWebCam->Width = this->Width - 40;
}
System::Void FaceIdentifier::Main::Main_Load(System::Object^  sender, System::EventArgs^  e)
{
	bugeger = false;
	bmp = gcnew System::Drawing::Bitmap(320, 240);
	//tmrVideo->Interval = 500 / fps;
	CommonCLS::faceRec.x = -1; 
	resize();
	//imgCopy = cvCreateImage(
	imgCopy = cvCreateImage(cvSize(320, 240), 8, 3);
}
System::Void FaceIdentifier::Main::Main_Resize(System::Object^  sender, System::EventArgs^  e) 
{
	resize();
}
System::Void FaceIdentifier::Main::newToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	NewPerson ^ frmNew = gcnew NewPerson();
	//Display frmAbout as a modal dialog
	frmNew->Show();
	faces.clear();
}
System::Void FaceIdentifier::Main::button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	vector<IplImage *>per1;
	per1.push_back(cvLoadImage("s1/1.pgm"));
	per1.push_back(cvLoadImage("s1/2.pgm"));
	per1.push_back(cvLoadImage("s1/3.pgm"));
	per1.push_back(cvLoadImage("s1/4.pgm"));
	per1.push_back(cvLoadImage("s1/5.pgm"));
	per1.push_back(cvLoadImage("s1/6.pgm"));
	vector<IplImage *>per2;
	per2.push_back(cvLoadImage("s2/1.pgm"));
	per2.push_back(cvLoadImage("s2/2.pgm"));
	per2.push_back(cvLoadImage("s2/3.pgm"));
	per2.push_back(cvLoadImage("s2/4.pgm"));
	per2.push_back(cvLoadImage("s2/5.pgm"));
	per2.push_back(cvLoadImage("s2/6.pgm"));
	vector<IplImage *>per3;
	per3.push_back(cvLoadImage("s3/1.pgm"));
	per3.push_back(cvLoadImage("s3/2.pgm"));
	per3.push_back(cvLoadImage("s3/3.pgm"));
	per3.push_back(cvLoadImage("s3/4.pgm"));
	per3.push_back(cvLoadImage("s3/5.pgm"));
	per3.push_back(cvLoadImage("s3/6.pgm"));
	vector<IplImage *>per4;
	per3.push_back(cvLoadImage("s4/1.pgm"));
	per3.push_back(cvLoadImage("s4/2.pgm"));
	per3.push_back(cvLoadImage("s4/3.pgm"));
	per3.push_back(cvLoadImage("s4/4.pgm"));
	per3.push_back(cvLoadImage("s4/5.pgm"));
	per3.push_back(cvLoadImage("s4/6.pgm"));
	vector<IplImage *>per5;
	per3.push_back(cvLoadImage("s5/1.pgm"));
	per3.push_back(cvLoadImage("s5/2.pgm"));
	per3.push_back(cvLoadImage("s5/3.pgm"));
	per3.push_back(cvLoadImage("s5/4.pgm"));
	per3.push_back(cvLoadImage("s5/5.pgm"));
	per3.push_back(cvLoadImage("s5/6.pgm"));
	_FaceRecognizer::add(per1,1);
	_FaceRecognizer::add(per2,2);
	_FaceRecognizer::add(per3,3);
	_FaceRecognizer::add(per4,4);
	_FaceRecognizer::add(per5,5);
	_FaceRecognizer::learn();
	Int32 a = _FaceRecognizer::predict(cvLoadImage("s3/10.pgm"));
	MessageBox::Show(a.ToString());
	/*Ptr<FaceRecognizer> model = createEigenFaceRecognizer(0,1);
	std::vector <Mat>img;
	std::vector <int> id;
	img.push_back(cv::imread("s1/1.pgm", CV_LOAD_IMAGE_GRAYSCALE)); id.push_back(1);
	img.push_back(cv::imread("s1/2.pgm", CV_LOAD_IMAGE_GRAYSCALE)); id.push_back(1);
	img.push_back(cv::imread("s1/3.pgm", CV_LOAD_IMAGE_GRAYSCALE)); id.push_back(1);
	img.push_back(cv::imread("s1/4.pgm", CV_LOAD_IMAGE_GRAYSCALE)); id.push_back(1);
	img.push_back(cv::imread("s1/5.pgm", CV_LOAD_IMAGE_GRAYSCALE)); id.push_back(1);
	img.push_back(cv::imread("s1/6.pgm", CV_LOAD_IMAGE_GRAYSCALE)); id.push_back(1);
	img.push_back(cv::imread("s2/1.pgm", CV_LOAD_IMAGE_GRAYSCALE)); id.push_back(2);
	img.push_back(cv::imread("s2/2.pgm", CV_LOAD_IMAGE_GRAYSCALE)); id.push_back(2);
	img.push_back(cv::imread("s2/3.pgm", CV_LOAD_IMAGE_GRAYSCALE)); id.push_back(2);
	img.push_back(cv::imread("s2/4.pgm", CV_LOAD_IMAGE_GRAYSCALE)); id.push_back(2);
	img.push_back(cv::imread("s2/5.pgm", CV_LOAD_IMAGE_GRAYSCALE)); id.push_back(2);
	img.push_back(cv::imread("s2/6.pgm", CV_LOAD_IMAGE_GRAYSCALE)); id.push_back(2);
	img.push_back(cv::imread("s3/1.pgm", CV_LOAD_IMAGE_GRAYSCALE)); id.push_back(3);
	img.push_back(cv::imread("s3/2.pgm", CV_LOAD_IMAGE_GRAYSCALE)); id.push_back(3);
	img.push_back(cv::imread("s3/3.pgm", CV_LOAD_IMAGE_GRAYSCALE)); id.push_back(3);
	img.push_back(cv::imread("s3/4.pgm", CV_LOAD_IMAGE_GRAYSCALE)); id.push_back(3);
	img.push_back(cv::imread("s3/5.pgm", CV_LOAD_IMAGE_GRAYSCALE)); id.push_back(3);
	img.push_back(cv::imread("s3/6.pgm", CV_LOAD_IMAGE_GRAYSCALE)); id.push_back(3);
	cv::imshow("hello", img[5]);
	cvWaitKey();
	model->train(img, id);
	System::Int16 n = model->predict(cv::imread("s5/2.pgm"));
	MessageBox::Show("face " + n.ToString());*/
}
IplImage *FaceIdentifier::Main::crop(IplImage *img, CvRect border)
{
	//CvRect temprec = cvRect(CommonCLS::faceFrame.x,CommonCLS::faceFrame.y, CommonCLS::faceFrame.width, CommonCLS::faceFrame.height);
	//System::Windows::Forms::MessageBox::Show(System::Int16(CommonCLS::faceFrame.width).ToString() + " , " + System::Int16(CommonCLS::faceFrame.height).ToString());
	IplImage *res = cvCreateImage(cvSize(border.width, border.height), img->depth, img->nChannels);
	cvSetImageROI(img, border);
	cvCopy(img, res);
	cvResetImageROI(img);
	return res;
}
System::Void FaceIdentifier::Main::startFaceDetectionToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	AcceptFace ^frmAcceptFace = gcnew AcceptFace;
	System::Windows::Forms::DialogResult dlgRes;
	dlgRes = frmAcceptFace->ShowDialog();
	if (dlgRes == System::Windows::Forms::DialogResult::OK)
	{
		_FaceRecognizer::learn();
		int idnum = _FaceRecognizer::predict(CommonCLS::img);
		if (idnum == -13)
		{
			Database::key = "unknown";
			System::Windows::Forms::MessageBox::Show("unknown");
		}
		else
		{
			Database::getData(idnum);
			System::Windows::Forms::MessageBox::Show(System::Int16(idnum).ToString());
		}
		DetectFace ^frmDetectFace = gcnew DetectFace;
		frmDetectFace->ShowDialog();
	}
}
FaceIdentifier::Main::~Main()
{
	if (components)
	{
		delete components;
	}
	_FaceRecognizer::save();
	Database::save();
	exit(0);
}