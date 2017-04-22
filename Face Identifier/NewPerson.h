#pragma once
#include "Common.h"
#include "GlobalVars.h"
#include "_String.h"
#include "GlobalVars.h"
#include <vector>
#include "Database.h"
#include "_FaceRecognizer.h"



namespace FaceIdentifier
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NewPerson
	/// </summary>
	public ref class NewPerson : public System::Windows::Forms::Form
	{
	public:
		NewPerson(void);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NewPerson();
	private: System::Windows::Forms::Button^  cmdCancel;
	protected: 

	protected: 
	private: System::Drawing::Bitmap ^bmp ;
	private: System::Windows::Forms::Button^  cmdOK;
	private: System::Windows::Forms::TabControl^  tabControl;
	private: System::Windows::Forms::TabPage^  tabPicturingPhase;



	private: System::Windows::Forms::Button^  cmdBrowseImg;


	private: System::Windows::Forms::ListBox^  faceList;
	private: System::Windows::Forms::TabPage^  tabPersonalInfo;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::OpenFileDialog^  dlgBrowseImg;

	private: System::Windows::Forms::GroupBox^  gpbAcceptFace;
	private: System::Windows::Forms::Button^  cmdAccept;
	private: System::Windows::Forms::PictureBox^  pbFace;
	private: System::Windows::Forms::ErrorProvider^  error;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtFatherName;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  txtIDNum;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtLName;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtFName;
	private: System::Windows::Forms::DateTimePicker^  dateHire;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::DateTimePicker^  dateBirth;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::GroupBox^  gpbMarriage;
	private: System::Windows::Forms::RadioButton^  radUnMar;
	private: System::Windows::Forms::RadioButton^  radMar;
	private: System::Windows::Forms::GroupBox^  grbGender;
	private: System::Windows::Forms::RadioButton^  radFemale;
	private: System::Windows::Forms::RadioButton^  radMale;
	private: System::Windows::Forms::GroupBox^  gpbPassword;
	private: System::Windows::Forms::CheckBox^  chkPassword;
	private: System::Windows::Forms::TextBox^  txtPosition;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  txtConfirmPassword;
	private: System::Windows::Forms::TextBox^  txtPassword;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  txtEducation;
	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::Timer^  timer1;

	
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
private:
	bool checkError();
private: System::Void cmdBrowseImg_Click			(System::Object^  sender, System::EventArgs^  e);
private: System::Void NewPerson_Load				(System::Object^  sender, System::EventArgs^  e);
private: System::Void cmdAccept_Click				(System::Object^  sender, System::EventArgs^  e);
private: System::Void cmdOK_Click					(System::Object^  sender, System::EventArgs^  e);
private: System::Void txtFName_TextChanged			(System::Object^  sender, System::EventArgs^  e);
private: System::Void txtLName_TextChanged			(System::Object^  sender, System::EventArgs^  e);
private: System::Void txtIDNum_TextChanged			(System::Object^  sender, System::EventArgs^  e);
private: System::Void txtFatherName_TextChanged		(System::Object^  sender, System::EventArgs^  e);
private: System::Void dateHire_ValueChanged			(System::Object^  sender, System::EventArgs^  e);
private: System::Void chkPassword_CheckedChanged	(System::Object^  sender, System::EventArgs^  e);
private: System::Void radMar_CheckedChanged			(System::Object^  sender, System::EventArgs^  e);
private: System::Void radUnMar_CheckedChanged		(System::Object^  sender, System::EventArgs^  e);
private: System::Void radMale_CheckedChanged		(System::Object^  sender, System::EventArgs^  e);
private: System::Void radFemale_CheckedChanged		(System::Object^  sender, System::EventArgs^  e);
private: System::Void txtPassword_TextChanged		(System::Object^  sender, System::EventArgs^  e);
private: System::Void txtConfirmPassword_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
			 {
				 //this->Opacity += 10;
				// System::Windows::Forms::MessageBox::Show(Opacity.ToString());
				 if (Opacity == 100)
				 {
					 timer1->Enabled = false;
					 System::Windows::Forms::MessageBox::Show("Finished");
				 }
			 }
	};
}
