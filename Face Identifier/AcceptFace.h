#pragma once
#include "_FaceRecognizer.h"
#include "DetectFace.h"
#include "GlobalVars.h"
#include "Database.h"

namespace FaceIdentifier {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AcceptFace
	/// </summary>
	public ref class AcceptFace : public System::Windows::Forms::Form
	{
	public:
		AcceptFace(void);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AcceptFace();









	private: System::Windows::Forms::Button^  cmdSelectPicture;
	private: System::Windows::Forms::OpenFileDialog^  dlgBrowseImg;
	private: System::Windows::Forms::Timer^  tmrAnimForm;
	private: System::Windows::Forms::Panel^  pnlAnimPicture;
	private: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::PictureBox^  pbFace;
	private: 
	private: System::Windows::Forms::Button^  cmdCancel;
	public: 
	private: System::Windows::Forms::Button^  cmdOK;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Timer^  tmrAnimPicture;
	private: System::ComponentModel::IContainer^  components;






	public: 


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
	private: System::Void cmdSelectPicture_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void tmrAnimForm_Tick		(System::Object^  sender, System::EventArgs^  e);
	private: System::Void AcceptFace_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void tmrAnimPicture_Tick(System::Object^  sender, System::EventArgs^  e);
	};
}
