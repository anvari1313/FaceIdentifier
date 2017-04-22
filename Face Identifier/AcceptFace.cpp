#include "StdAfx.h"
#include "AcceptFace.h"
#include <algorithm>

FaceIdentifier::AcceptFace::AcceptFace(void)
{
	InitializeComponent();
	//
	//TODO: Add the constructor code here
	//
}

void FaceIdentifier::AcceptFace::InitializeComponent(void)
{
	this->components = (gcnew System::ComponentModel::Container());
	System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AcceptFace::typeid));
	this->cmdSelectPicture = (gcnew System::Windows::Forms::Button());
	this->dlgBrowseImg = (gcnew System::Windows::Forms::OpenFileDialog());
	this->tmrAnimForm = (gcnew System::Windows::Forms::Timer(this->components));
	this->pnlAnimPicture = (gcnew System::Windows::Forms::Panel());
	this->label2 = (gcnew System::Windows::Forms::Label());
	this->pbFace = (gcnew System::Windows::Forms::PictureBox());
	this->cmdCancel = (gcnew System::Windows::Forms::Button());
	this->cmdOK = (gcnew System::Windows::Forms::Button());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->tmrAnimPicture = (gcnew System::Windows::Forms::Timer(this->components));
	this->pnlAnimPicture->SuspendLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbFace))->BeginInit();
	this->SuspendLayout();
	// 
	// cmdSelectPicture
	// 
	this->cmdSelectPicture->Location = System::Drawing::Point(15, 12);
	this->cmdSelectPicture->Name = L"cmdSelectPicture";
	this->cmdSelectPicture->Size = System::Drawing::Size(162, 29);
	this->cmdSelectPicture->TabIndex = 7;
	this->cmdSelectPicture->Text = L"Select Picture";
	this->cmdSelectPicture->UseVisualStyleBackColor = true;
	this->cmdSelectPicture->Click += gcnew System::EventHandler(this, &AcceptFace::cmdSelectPicture_Click);
	// 
	// tmrAnimForm
	// 
	this->tmrAnimForm->Interval = 50;
	this->tmrAnimForm->Tick += gcnew System::EventHandler(this, &AcceptFace::tmrAnimForm_Tick);
	// 
	// pnlAnimPicture
	// 
	this->pnlAnimPicture->Controls->Add(this->label2);
	this->pnlAnimPicture->Controls->Add(this->pbFace);
	this->pnlAnimPicture->Controls->Add(this->cmdCancel);
	this->pnlAnimPicture->Controls->Add(this->cmdOK);
	this->pnlAnimPicture->Controls->Add(this->label1);
	this->pnlAnimPicture->Location = System::Drawing::Point(12, 48);
	this->pnlAnimPicture->Name = L"pnlAnimPicture";
	this->pnlAnimPicture->Size = System::Drawing::Size(171, 278);
	this->pnlAnimPicture->TabIndex = 8;
	// 
	// label2
	// 
	this->label2->AutoSize = true;
	this->label2->Location = System::Drawing::Point(3, 195);
	this->label2->Name = L"label2";
	this->label2->Size = System::Drawing::Size(112, 13);
	this->label2->TabIndex = 11;
	this->label2->Text = L"Is the face satisfiable\?";
	// 
	// pbFace
	// 
	this->pbFace->Location = System::Drawing::Point(3, 17);
	this->pbFace->Name = L"pbFace";
	this->pbFace->Size = System::Drawing::Size(165, 175);
	this->pbFace->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
	this->pbFace->TabIndex = 10;
	this->pbFace->TabStop = false;
	// 
	// cmdCancel
	// 
	this->cmdCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
	this->cmdCancel->Location = System::Drawing::Point(3, 251);
	this->cmdCancel->Name = L"cmdCancel";
	this->cmdCancel->Size = System::Drawing::Size(165, 27);
	this->cmdCancel->TabIndex = 8;
	this->cmdCancel->Text = L"Cancel";
	this->cmdCancel->UseVisualStyleBackColor = true;
	// 
	// cmdOK
	// 
	this->cmdOK->DialogResult = System::Windows::Forms::DialogResult::OK;
	this->cmdOK->Location = System::Drawing::Point(3, 218);
	this->cmdOK->Name = L"cmdOK";
	this->cmdOK->Size = System::Drawing::Size(165, 27);
	this->cmdOK->TabIndex = 9;
	this->cmdOK->Text = L"Yes, recognize it.";
	this->cmdOK->UseVisualStyleBackColor = true;
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->Location = System::Drawing::Point(3, 1);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(130, 13);
	this->label1->TabIndex = 7;
	this->label1->Text = L"Your detected Face is this";
	// 
	// tmrAnimPicture
	// 
	this->tmrAnimPicture->Interval = 1;
	this->tmrAnimPicture->Tick += gcnew System::EventHandler(this, &AcceptFace::tmrAnimPicture_Tick);
	// 
	// AcceptFace
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(193, 333);
	this->Controls->Add(this->cmdSelectPicture);
	this->Controls->Add(this->pnlAnimPicture);
	this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
	this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
	this->MaximizeBox = false;
	this->MinimizeBox = false;
	this->Name = L"AcceptFace";
	this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
	this->Text = L"Face Accepting";
	this->Load += gcnew System::EventHandler(this, &AcceptFace::AcceptFace_Load);
	this->pnlAnimPicture->ResumeLayout(false);
	this->pnlAnimPicture->PerformLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbFace))->EndInit();
	this->ResumeLayout(false);

}

System::Void FaceIdentifier::AcceptFace::cmdSelectPicture_Click(System::Object^  sender, System::EventArgs^  e)
{
	dlgBrowseImg->Filter = "JPEG Picture |*.jpg";
	dlgBrowseImg->FileName = "";
	dlgBrowseImg->ShowDialog();
	if(System::String::IsNullOrEmpty(dlgBrowseImg->FileName))
		return;
	tmrAnimForm->Enabled = true;
	std::string path;
	_String::MarshalString(dlgBrowseImg->FileName, path);

	int r, g, b;
	
	CommonCLS::img =  cvLoadImage(path.c_str());
	System::Drawing::Color c;

	System::Drawing::Bitmap ^bmp = gcnew System::Drawing::Bitmap(CommonCLS::img->width, CommonCLS::img->height);
	for (int i = 0; i < CommonCLS::img->height; i++)
	{
		for (int j = 0; j < CommonCLS::img->width; j++)
		{
			r = ((uchar *)(CommonCLS::img->imageData + i*CommonCLS::img->widthStep))[j*CommonCLS::img->nChannels + 2];
			g = ((uchar *)(CommonCLS::img->imageData + i*CommonCLS::img->widthStep))[j*CommonCLS::img->nChannels + 1];
			b = ((uchar *)(CommonCLS::img->imageData + i*CommonCLS::img->widthStep))[j*CommonCLS::img->nChannels + 0];
			c = System::Drawing::Color::FromArgb(r, g, b);
			bmp->SetPixel(j, i, c);
		}
	}
	pbFace->Image = pbFace->Image->FromHbitmap(bmp->GetHbitmap());
	delete bmp;
}

System::Void FaceIdentifier::AcceptFace::AcceptFace_Load(System::Object^  sender, System::EventArgs^  e)
{
	this->Height = 86;
	pnlAnimPicture->Left += this->Width;
}
System::Void FaceIdentifier::AcceptFace::tmrAnimForm_Tick(System::Object^  sender, System::EventArgs^  e)
{
	this->Height += 10;
	if (this->Height > 375)
	{
		tmrAnimForm->Enabled = false;
		tmrAnimPicture->Enabled = true;
	}
}
System::Void FaceIdentifier::AcceptFace::tmrAnimPicture_Tick(System::Object^  sender, System::EventArgs^  e)
{
	pnlAnimPicture->Left -= 4;
	if (pnlAnimPicture->Left <= 12)
		tmrAnimPicture->Enabled = false;
}

FaceIdentifier::AcceptFace::~AcceptFace()
{
	if (components)
	{
		delete components;
	}
}