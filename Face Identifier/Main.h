#pragma once

#include <Windows.h>
#include "Common.h"
#include "Loading.h"
#ifndef __CV_INCLUDE_
#define __CV_INCLUDE_
#include <opencv\cv.h>
#include <opencv\cvaux.h>
#include <opencv\highgui.h>
#include "GlobalVars.h"
using namespace cv;
#endif // #! __CV_INCLUDE
#include "NewPerson.h"
#include "AcceptFace.h"
#include "_FaceRecognizer.h"

namespace FaceIdentifier {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace cv;

	/// <summary>
	/// Summary for Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Main();
	protected: 


	private: System::Windows::Forms::MenuStrip^  menu;
	private: System::Windows::Forms::ToolStripMenuItem^  personToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ToolStripMenuItem^  detectionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  startFaceDetectionToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pbWebCam;
			 System::Drawing::Bitmap ^bmp;
			 IplImage *imgCopy;
			 bool bugeger;
	private: System::Windows::Forms::Timer^  timer1;

	private: System::ComponentModel::IContainer^  components;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void);
#pragma endregion
		void resize();
		IplImage *crop(IplImage *img, CvRect border);
		private: System::Void Main_Load(System::Object^  sender, System::EventArgs^  e);
		private: System::Void Main_Resize(System::Object^  sender, System::EventArgs^  e);
		private: System::Void newToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);
		private:System::Void startFaceDetectionToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	};
};

