#include "Database.h"

namespace FaceIdentifier {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DetectFace
	/// </summary>
	public ref class DetectFace : public System::Windows::Forms::Form
	{
	public:
		DetectFace(void);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DetectFace();

	protected: 

	protected: 










	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Panel^  pnlPassword;
	private: System::Windows::Forms::TextBox^  txtConfirmPassword;
	private: System::Windows::Forms::TextBox^  txtPassword;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  cmdOK;
	private: System::Windows::Forms::Panel^  panelKnown;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  lblWelcomeText;
	private: System::Windows::Forms::Panel^  panelUnknown;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::ComponentModel::IContainer^  components;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


		void InitializeComponent(void);
		void designForm();
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
#pragma endregion
	private: System::Void cmdOK_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 timer1->Enabled = true;
			 }
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 this->Height += 10;
				 if(this->Height > 300)
				 {
					 timer1->Enabled = false;
					 timer2->Enabled = true;
				 }
			 }
	private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
				 /*groupBox1->Top -= 10;
				 if(groupBox1->Top <= 177)
				 {
					 timer2->Enabled = false;
				 }*/
			 }
	private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) 
			 {
				 this->Opacity = 1;
				 //MessageBox::Show("hel");
				 if(this->Opacity == 100)
					 timer3->Enabled = false;
			 }
	private: System::Void DetectFace_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				 timer3->Enabled = true;
			 }
	};
}
