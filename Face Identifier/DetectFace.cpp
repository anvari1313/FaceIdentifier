#include "stdafx.h"
#include "DetectFace.h"

FaceIdentifier::DetectFace::DetectFace()
{
	InitializeComponent();
	designForm();
	this->Height = 217;
	pnlPassword->Top = 353;
	//
	//TODO: Add the constructor code here
	//
}

void FaceIdentifier::DetectFace::InitializeComponent(void)
{
	this->components = (gcnew System::ComponentModel::Container());
	this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
	this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
	this->pnlPassword = (gcnew System::Windows::Forms::Panel());
	this->txtConfirmPassword = (gcnew System::Windows::Forms::TextBox());
	this->txtPassword = (gcnew System::Windows::Forms::TextBox());
	this->label10 = (gcnew System::Windows::Forms::Label());
	this->label9 = (gcnew System::Windows::Forms::Label());
	this->panel1 = (gcnew System::Windows::Forms::Panel());
	this->cmdOK = (gcnew System::Windows::Forms::Button());
	this->panelKnown = (gcnew System::Windows::Forms::Panel());
	this->button2 = (gcnew System::Windows::Forms::Button());
	this->lblWelcomeText = (gcnew System::Windows::Forms::Label());
	this->panelUnknown = (gcnew System::Windows::Forms::Panel());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
	this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
	this->pnlPassword->SuspendLayout();
	this->panel1->SuspendLayout();
	this->panelKnown->SuspendLayout();
	this->panelUnknown->SuspendLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
	this->SuspendLayout();
	// 
	// timer1
	// 
	this->timer1->Interval = 70;
	this->timer1->Tick += gcnew System::EventHandler(this, &DetectFace::timer1_Tick);
	// 
	// timer2
	// 
	this->timer2->Interval = 60;
	this->timer2->Tick += gcnew System::EventHandler(this, &DetectFace::timer2_Tick);
	// 
	// pnlPassword
	// 
	this->pnlPassword->Controls->Add(this->txtConfirmPassword);
	this->pnlPassword->Controls->Add(this->txtPassword);
	this->pnlPassword->Controls->Add(this->label10);
	this->pnlPassword->Controls->Add(this->label9);
	this->pnlPassword->Location = System::Drawing::Point(12, 353);
	this->pnlPassword->Name = L"pnlPassword";
	this->pnlPassword->Size = System::Drawing::Size(334, 71);
	this->pnlPassword->TabIndex = 3;
	// 
	// txtConfirmPassword
	// 
	this->txtConfirmPassword->Location = System::Drawing::Point(113, 40);
	this->txtConfirmPassword->Name = L"txtConfirmPassword";
	this->txtConfirmPassword->PasswordChar = '*';
	this->txtConfirmPassword->Size = System::Drawing::Size(210, 20);
	this->txtConfirmPassword->TabIndex = 15;
	// 
	// txtPassword
	// 
	this->txtPassword->Location = System::Drawing::Point(113, 14);
	this->txtPassword->Name = L"txtPassword";
	this->txtPassword->PasswordChar = '*';
	this->txtPassword->Size = System::Drawing::Size(210, 20);
	this->txtPassword->TabIndex = 14;
	// 
	// label10
	// 
	this->label10->AutoSize = true;
	this->label10->Location = System::Drawing::Point(15, 40);
	this->label10->Name = L"label10";
	this->label10->Size = System::Drawing::Size(97, 13);
	this->label10->TabIndex = 12;
	this->label10->Text = L"Confirm Password :";
	// 
	// label9
	// 
	this->label9->AutoSize = true;
	this->label9->Location = System::Drawing::Point(15, 17);
	this->label9->Name = L"label9";
	this->label9->Size = System::Drawing::Size(59, 13);
	this->label9->TabIndex = 13;
	this->label9->Text = L"Password :";
	// 
	// panel1
	// 
	this->panel1->Controls->Add(this->cmdOK);
	this->panel1->Controls->Add(this->panelKnown);
	this->panel1->Controls->Add(this->panelUnknown);
	this->panel1->Location = System::Drawing::Point(12, 2);
	this->panel1->Name = L"panel1";
	this->panel1->Size = System::Drawing::Size(343, 184);
	this->panel1->TabIndex = 4;
	// 
	// cmdOK
	// 
	this->cmdOK->Location = System::Drawing::Point(0, 137);
	this->cmdOK->Name = L"cmdOK";
	this->cmdOK->Size = System::Drawing::Size(333, 25);
	this->cmdOK->TabIndex = 4;
	this->cmdOK->Text = L"OK";
	this->cmdOK->UseVisualStyleBackColor = true;
	// 
	// panelKnown
	// 
	this->panelKnown->Controls->Add(this->button2);
	this->panelKnown->Controls->Add(this->lblWelcomeText);
	this->panelKnown->Location = System::Drawing::Point(0, 3);
	this->panelKnown->Name = L"panelKnown";
	this->panelKnown->Size = System::Drawing::Size(336, 128);
	this->panelKnown->TabIndex = 5;
	// 
	// button2
	// 
	this->button2->DialogResult = System::Windows::Forms::DialogResult::Ignore;
	this->button2->Location = System::Drawing::Point(0, 100);
	this->button2->Name = L"button2";
	this->button2->Size = System::Drawing::Size(333, 25);
	this->button2->TabIndex = 2;
	this->button2->Text = L"No, I\'m not the person you\'ve detected.";
	this->button2->UseVisualStyleBackColor = true;
	// 
	// lblWelcomeText
	// 
	this->lblWelcomeText->Location = System::Drawing::Point(14, 13);
	this->lblWelcomeText->Name = L"lblWelcomeText";
	this->lblWelcomeText->Size = System::Drawing::Size(308, 84);
	this->lblWelcomeText->TabIndex = 0;
	this->lblWelcomeText->Text = L"Welcome Mr, X / Ms. Y";
	// 
	// panelUnknown
	// 
	this->panelUnknown->Controls->Add(this->label1);
	this->panelUnknown->Controls->Add(this->pictureBox1);
	this->panelUnknown->Location = System::Drawing::Point(0, 3);
	this->panelUnknown->Name = L"panelUnknown";
	this->panelUnknown->Size = System::Drawing::Size(336, 128);
	this->panelUnknown->TabIndex = 3;
	// 
	// label1
	// 
	this->label1->Location = System::Drawing::Point(109, 56);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(213, 48);
	this->label1->TabIndex = 1;
	this->label1->Text = L"Oops your face can not be recognized as trained person in the databank.";
	// 
	// pictureBox1
	// 
	this->pictureBox1->Location = System::Drawing::Point(3, 3);
	this->pictureBox1->Name = L"pictureBox1";
	this->pictureBox1->Size = System::Drawing::Size(100, 101);
	this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
	this->pictureBox1->TabIndex = 0;
	this->pictureBox1->TabStop = false;
	// 
	// timer3
	// 
	this->timer3->Tick += gcnew System::EventHandler(this, &DetectFace::timer3_Tick);
	// 
	// DetectFace
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(476, 436);
	this->ControlBox = false;
	this->Controls->Add(this->panel1);
	this->Controls->Add(this->pnlPassword);
	this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
	this->MaximizeBox = false;
	this->MinimizeBox = false;
	this->Name = L"DetectFace";
	this->Opacity = 0;
	this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
	this->Text = L"Detection Result";
	this->Load += gcnew System::EventHandler(this, &DetectFace::DetectFace_Load);
	this->pnlPassword->ResumeLayout(false);
	this->pnlPassword->PerformLayout();
	this->panel1->ResumeLayout(false);
	this->panelKnown->ResumeLayout(false);
	this->panelUnknown->ResumeLayout(false);
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
	this->ResumeLayout(false);

}

void FaceIdentifier::DetectFace::designForm()
{
	if(Database::key == "unknown")
	{
		this->Text = "Sorry for not identifying";
		this->panelKnown->Visible = false;
		this->panelUnknown->Visible = true;
	}
	else
	{
		System::DateTime now = System::DateTime::Now;

		this->Text = "Welcome";
		this->panelKnown->Visible = true;
		this->panelUnknown->Visible = false;
		System::String ^text = "Welcome ";
		if (Database::gender == "Male")
			text += "Mr. ";
		else
			text += "Ms. ";

		text += gcnew System::String(Database::fname.c_str());
		text += " ";
		text += gcnew System::String(Database::lname.c_str());
		text += "." + Environment::NewLine;
		text += "Your arrival time is ";
		text += now.Hour.ToString();
		text += " : ";
		text += now.Minute.ToString();
		text += ".";
		text += "." + Environment::NewLine;
		text += "Do you agree?";
		lblWelcomeText->Text = text;
	}
}

System::Void FaceIdentifier::DetectFace::cmdOK_Click(System::Object^  sender, System::EventArgs^  e)
{

	if (Database::key == "unknown")
		this->DialogResult = Windows::Forms::DialogResult::OK;
	if (Database::password != "NULL")
		this->DialogResult = Windows::Forms::DialogResult::OK;
	if (System::String::IsNullOrEmpty(txtPassword->Text) && System::String::IsNullOrEmpty(txtConfirmPassword->Text))
		;
}

FaceIdentifier::DetectFace::~DetectFace()
{
	if (components)
	{
		delete components;
	}
}