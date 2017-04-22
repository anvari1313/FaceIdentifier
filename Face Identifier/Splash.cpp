#include "stdafx.h"
#include "Splash.h"
FaceIdentifier::Splash::Splash(void)
{
	InitializeComponent();
	//
	//TODO: Add the constructor code here
	//
}
void FaceIdentifier::Splash::InitializeComponent(void)
{
	this->components = (gcnew System::ComponentModel::Container());
	System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Splash::typeid));
	this->prbLoading = (gcnew System::Windows::Forms::ProgressBar());
	this->timer = (gcnew System::Windows::Forms::Timer(this->components));
	this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
	this->progressTmr = (gcnew System::Windows::Forms::Timer(this->components));
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
	this->SuspendLayout();
	// 
	// prbLoading
	// 
	this->prbLoading->Dock = System::Windows::Forms::DockStyle::Bottom;
	this->prbLoading->Location = System::Drawing::Point(0, 397);
	this->prbLoading->Name = L"prbLoading";
	this->prbLoading->Size = System::Drawing::Size(601, 22);
	this->prbLoading->TabIndex = 0;
	// 
	// timer
	// 
	this->timer->Interval = 1000;
	this->timer->Tick += gcnew System::EventHandler(this, &Splash::timer_Tick);
	// 
	// pictureBox1
	// 
	this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
	this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
	this->pictureBox1->Location = System::Drawing::Point(0, 0);
	this->pictureBox1->Name = L"pictureBox1";
	this->pictureBox1->Size = System::Drawing::Size(601, 397);
	this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
	this->pictureBox1->TabIndex = 1;
	this->pictureBox1->TabStop = false;
	// 
	// progressTmr
	// 
	this->progressTmr->Interval = 30;
	this->progressTmr->Tick += gcnew System::EventHandler(this, &Splash::progressTmr_Tick);
	// 
	// Splash
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(601, 419);
	this->Controls->Add(this->pictureBox1);
	this->Controls->Add(this->prbLoading);
	this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	this->Name = L"Splash";
	this->ShowInTaskbar = false;
	this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
	this->Text = L"Face Identifier";
	this->Load += gcnew System::EventHandler(this, &Splash::Splash_Load);
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
	this->ResumeLayout(false);

}
System::Void FaceIdentifier::Splash::Splash_Load(System::Object^  sender, System::EventArgs^  e)
{
	progressTmr->Interval = timer->Interval / 10;
	timer->Enabled = true;
	progressTmr->Enabled = true;
}
System::Void FaceIdentifier::Splash::timer_Tick(System::Object^  sender, System::EventArgs^  e)
{
	timer->Enabled = false;
	if (!loadDatabase())
		exit(0);
	if (prepareHaarCascade() == -1)
		exit(0);
	_FaceRecognizer::load();
	Main^ frm = gcnew Main;
	this->Hide();
	frm->Show(this);
}
System::Void FaceIdentifier::Splash::progressTmr_Tick(System::Object^  sender, System::EventArgs^  e)
{
	prbLoading->Value += 20;
	if(prbLoading->Value == 100)
		progressTmr->Enabled = false;
}
FaceIdentifier::Splash::~Splash()
{
	if (components)
	{
		delete components;
	}
}