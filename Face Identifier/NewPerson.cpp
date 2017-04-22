#include "stdafx.h"
#include "NewPerson.h"
FaceIdentifier::NewPerson::NewPerson(void)
{
	InitializeComponent();
	//
	//TODO: Add the constructor code here
	//
}
void FaceIdentifier::NewPerson::InitializeComponent(void)
{
	this->components = (gcnew System::ComponentModel::Container());
	this->cmdCancel = (gcnew System::Windows::Forms::Button());
	this->cmdOK = (gcnew System::Windows::Forms::Button());
	this->tabControl = (gcnew System::Windows::Forms::TabControl());
	this->tabPicturingPhase = (gcnew System::Windows::Forms::TabPage());
	this->gpbAcceptFace = (gcnew System::Windows::Forms::GroupBox());
	this->cmdAccept = (gcnew System::Windows::Forms::Button());
	this->pbFace = (gcnew System::Windows::Forms::PictureBox());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->cmdBrowseImg = (gcnew System::Windows::Forms::Button());
	this->faceList = (gcnew System::Windows::Forms::ListBox());
	this->tabPersonalInfo = (gcnew System::Windows::Forms::TabPage());
	this->label11 = (gcnew System::Windows::Forms::Label());
	this->gpbPassword = (gcnew System::Windows::Forms::GroupBox());
	this->txtConfirmPassword = (gcnew System::Windows::Forms::TextBox());
	this->txtPassword = (gcnew System::Windows::Forms::TextBox());
	this->label10 = (gcnew System::Windows::Forms::Label());
	this->label9 = (gcnew System::Windows::Forms::Label());
	this->gpbMarriage = (gcnew System::Windows::Forms::GroupBox());
	this->radUnMar = (gcnew System::Windows::Forms::RadioButton());
	this->radMar = (gcnew System::Windows::Forms::RadioButton());
	this->grbGender = (gcnew System::Windows::Forms::GroupBox());
	this->radFemale = (gcnew System::Windows::Forms::RadioButton());
	this->radMale = (gcnew System::Windows::Forms::RadioButton());
	this->label6 = (gcnew System::Windows::Forms::Label());
	this->chkPassword = (gcnew System::Windows::Forms::CheckBox());
	this->dateBirth = (gcnew System::Windows::Forms::DateTimePicker());
	this->dateHire = (gcnew System::Windows::Forms::DateTimePicker());
	this->txtPosition = (gcnew System::Windows::Forms::TextBox());
	this->txtEducation = (gcnew System::Windows::Forms::TextBox());
	this->txtFatherName = (gcnew System::Windows::Forms::TextBox());
	this->label8 = (gcnew System::Windows::Forms::Label());
	this->label5 = (gcnew System::Windows::Forms::Label());
	this->txtIDNum = (gcnew System::Windows::Forms::TextBox());
	this->label7 = (gcnew System::Windows::Forms::Label());
	this->label4 = (gcnew System::Windows::Forms::Label());
	this->txtLName = (gcnew System::Windows::Forms::TextBox());
	this->label3 = (gcnew System::Windows::Forms::Label());
	this->txtFName = (gcnew System::Windows::Forms::TextBox());
	this->label2 = (gcnew System::Windows::Forms::Label());
	this->dlgBrowseImg = (gcnew System::Windows::Forms::OpenFileDialog());
	this->error = (gcnew System::Windows::Forms::ErrorProvider(this->components));
	this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
	this->tabControl->SuspendLayout();
	this->tabPicturingPhase->SuspendLayout();
	this->gpbAcceptFace->SuspendLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbFace))->BeginInit();
	this->tabPersonalInfo->SuspendLayout();
	this->gpbPassword->SuspendLayout();
	this->gpbMarriage->SuspendLayout();
	this->grbGender->SuspendLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->error))->BeginInit();
	this->SuspendLayout();
	// 
	// cmdCancel
	// 
	this->cmdCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
	this->cmdCancel->Location = System::Drawing::Point(483, 379);
	this->cmdCancel->Name = L"cmdCancel";
	this->cmdCancel->Size = System::Drawing::Size(81, 26);
	this->cmdCancel->TabIndex = 3;
	this->cmdCancel->Text = L"Cancel";
	this->cmdCancel->UseVisualStyleBackColor = true;
	// 
	// cmdOK
	// 
	this->cmdOK->Location = System::Drawing::Point(396, 379);
	this->cmdOK->Name = L"cmdOK";
	this->cmdOK->Size = System::Drawing::Size(81, 26);
	this->cmdOK->TabIndex = 3;
	this->cmdOK->Text = L"OK";
	this->cmdOK->UseVisualStyleBackColor = true;
	this->cmdOK->Click += gcnew System::EventHandler(this, &NewPerson::cmdOK_Click);
	// 
	// tabControl
	// 
	this->tabControl->Controls->Add(this->tabPicturingPhase);
	this->tabControl->Controls->Add(this->tabPersonalInfo);
	this->tabControl->Location = System::Drawing::Point(12, 12);
	this->tabControl->Name = L"tabControl";
	this->tabControl->SelectedIndex = 0;
	this->tabControl->Size = System::Drawing::Size(568, 361);
	this->tabControl->TabIndex = 8;
	// 
	// tabPicturingPhase
	// 
	this->tabPicturingPhase->Controls->Add(this->gpbAcceptFace);
	this->tabPicturingPhase->Controls->Add(this->label1);
	this->tabPicturingPhase->Controls->Add(this->cmdBrowseImg);
	this->tabPicturingPhase->Controls->Add(this->faceList);
	this->tabPicturingPhase->Location = System::Drawing::Point(4, 22);
	this->tabPicturingPhase->Name = L"tabPicturingPhase";
	this->tabPicturingPhase->Padding = System::Windows::Forms::Padding(3);
	this->tabPicturingPhase->Size = System::Drawing::Size(560, 335);
	this->tabPicturingPhase->TabIndex = 0;
	this->tabPicturingPhase->Text = L"Picturing Phase";
	this->tabPicturingPhase->UseVisualStyleBackColor = true;
	// 
	// gpbAcceptFace
	// 
	this->gpbAcceptFace->Controls->Add(this->cmdAccept);
	this->gpbAcceptFace->Controls->Add(this->pbFace);
	this->gpbAcceptFace->Location = System::Drawing::Point(15, 114);
	this->gpbAcceptFace->Name = L"gpbAcceptFace";
	this->gpbAcceptFace->Size = System::Drawing::Size(202, 215);
	this->gpbAcceptFace->TabIndex = 15;
	this->gpbAcceptFace->TabStop = false;
	this->gpbAcceptFace->Text = L"Face Accepting";
	this->gpbAcceptFace->Visible = false;
	// 
	// cmdAccept
	// 
	this->cmdAccept->Location = System::Drawing::Point(6, 181);
	this->cmdAccept->Name = L"cmdAccept";
	this->cmdAccept->Size = System::Drawing::Size(187, 26);
	this->cmdAccept->TabIndex = 4;
	this->cmdAccept->Text = L"Accept";
	this->cmdAccept->UseVisualStyleBackColor = true;
	this->cmdAccept->Click += gcnew System::EventHandler(this, &NewPerson::cmdAccept_Click);
	// 
	// pbFace
	// 
	this->pbFace->Location = System::Drawing::Point(6, 16);
	this->pbFace->Name = L"pbFace";
	this->pbFace->Size = System::Drawing::Size(187, 159);
	this->pbFace->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
	this->pbFace->TabIndex = 15;
	this->pbFace->TabStop = false;
	// 
	// label1
	// 
	this->label1->Location = System::Drawing::Point(12, 6);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(536, 74);
	this->label1->TabIndex = 12;
	this->label1->Text = L"You should select pictures for your person who you want to add to the database. J" 
		L"ust click on the ADD IMAGE button and select your picture.";
	// 
	// cmdBrowseImg
	// 
	this->cmdBrowseImg->Location = System::Drawing::Point(232, 122);
	this->cmdBrowseImg->Name = L"cmdBrowseImg";
	this->cmdBrowseImg->Size = System::Drawing::Size(134, 25);
	this->cmdBrowseImg->TabIndex = 1;
	this->cmdBrowseImg->Text = L"Add Image ...";
	this->cmdBrowseImg->UseVisualStyleBackColor = true;
	this->cmdBrowseImg->Click += gcnew System::EventHandler(this, &NewPerson::cmdBrowseImg_Click);
	// 
	// faceList
	// 
	this->faceList->FormattingEnabled = true;
	this->faceList->Location = System::Drawing::Point(387, 127);
	this->faceList->Name = L"faceList";
	this->faceList->Size = System::Drawing::Size(161, 186);
	this->faceList->TabIndex = 3;
	// 
	// tabPersonalInfo
	// 
	this->tabPersonalInfo->Controls->Add(this->label11);
	this->tabPersonalInfo->Controls->Add(this->gpbPassword);
	this->tabPersonalInfo->Controls->Add(this->gpbMarriage);
	this->tabPersonalInfo->Controls->Add(this->grbGender);
	this->tabPersonalInfo->Controls->Add(this->label6);
	this->tabPersonalInfo->Controls->Add(this->chkPassword);
	this->tabPersonalInfo->Controls->Add(this->dateBirth);
	this->tabPersonalInfo->Controls->Add(this->dateHire);
	this->tabPersonalInfo->Controls->Add(this->txtPosition);
	this->tabPersonalInfo->Controls->Add(this->txtEducation);
	this->tabPersonalInfo->Controls->Add(this->txtFatherName);
	this->tabPersonalInfo->Controls->Add(this->label8);
	this->tabPersonalInfo->Controls->Add(this->label5);
	this->tabPersonalInfo->Controls->Add(this->txtIDNum);
	this->tabPersonalInfo->Controls->Add(this->label7);
	this->tabPersonalInfo->Controls->Add(this->label4);
	this->tabPersonalInfo->Controls->Add(this->txtLName);
	this->tabPersonalInfo->Controls->Add(this->label3);
	this->tabPersonalInfo->Controls->Add(this->txtFName);
	this->tabPersonalInfo->Controls->Add(this->label2);
	this->tabPersonalInfo->Location = System::Drawing::Point(4, 22);
	this->tabPersonalInfo->Name = L"tabPersonalInfo";
	this->tabPersonalInfo->Padding = System::Windows::Forms::Padding(3);
	this->tabPersonalInfo->Size = System::Drawing::Size(560, 335);
	this->tabPersonalInfo->TabIndex = 1;
	this->tabPersonalInfo->Text = L"Personal Information";
	this->tabPersonalInfo->UseVisualStyleBackColor = true;
	// 
	// label11
	// 
	this->label11->AutoSize = true;
	this->label11->Location = System::Drawing::Point(295, 73);
	this->label11->Name = L"label11";
	this->label11->Size = System::Drawing::Size(99, 13);
	this->label11->TabIndex = 10;
	this->label11->Text = L"Education Degree :";
	// 
	// gpbPassword
	// 
	this->gpbPassword->Controls->Add(this->txtConfirmPassword);
	this->gpbPassword->Controls->Add(this->txtPassword);
	this->gpbPassword->Controls->Add(this->label10);
	this->gpbPassword->Controls->Add(this->label9);
	this->gpbPassword->Enabled = false;
	this->gpbPassword->Location = System::Drawing::Point(24, 233);
	this->gpbPassword->Name = L"gpbPassword";
	this->gpbPassword->Size = System::Drawing::Size(255, 84);
	this->gpbPassword->TabIndex = 11;
	this->gpbPassword->TabStop = false;
	// 
	// txtConfirmPassword
	// 
	this->txtConfirmPassword->Location = System::Drawing::Point(116, 52);
	this->txtConfirmPassword->Name = L"txtConfirmPassword";
	this->txtConfirmPassword->PasswordChar = '*';
	this->txtConfirmPassword->Size = System::Drawing::Size(117, 20);
	this->txtConfirmPassword->TabIndex = 11;
	this->txtConfirmPassword->TextChanged += gcnew System::EventHandler(this, &NewPerson::txtConfirmPassword_TextChanged);
	// 
	// txtPassword
	// 
	this->txtPassword->Location = System::Drawing::Point(116, 26);
	this->txtPassword->Name = L"txtPassword";
	this->txtPassword->PasswordChar = '*';
	this->txtPassword->Size = System::Drawing::Size(117, 20);
	this->txtPassword->TabIndex = 10;
	this->txtPassword->TextChanged += gcnew System::EventHandler(this, &NewPerson::txtPassword_TextChanged);
	// 
	// label10
	// 
	this->label10->AutoSize = true;
	this->label10->Location = System::Drawing::Point(18, 52);
	this->label10->Name = L"label10";
	this->label10->Size = System::Drawing::Size(97, 13);
	this->label10->TabIndex = 1;
	this->label10->Text = L"Confirm Password :";
	// 
	// label9
	// 
	this->label9->AutoSize = true;
	this->label9->Location = System::Drawing::Point(18, 29);
	this->label9->Name = L"label9";
	this->label9->Size = System::Drawing::Size(59, 13);
	this->label9->TabIndex = 1;
	this->label9->Text = L"Password :";
	// 
	// gpbMarriage
	// 
	this->gpbMarriage->Controls->Add(this->radUnMar);
	this->gpbMarriage->Controls->Add(this->radMar);
	this->gpbMarriage->Location = System::Drawing::Point(298, 92);
	this->gpbMarriage->Name = L"gpbMarriage";
	this->gpbMarriage->Size = System::Drawing::Size(250, 69);
	this->gpbMarriage->TabIndex = 7;
	this->gpbMarriage->TabStop = false;
	this->gpbMarriage->Text = L"Marriage status";
	// 
	// radUnMar
	// 
	this->radUnMar->AutoSize = true;
	this->radUnMar->Location = System::Drawing::Point(19, 42);
	this->radUnMar->Name = L"radUnMar";
	this->radUnMar->Size = System::Drawing::Size(80, 17);
	this->radUnMar->TabIndex = 0;
	this->radUnMar->Text = L"Not Married";
	this->radUnMar->UseVisualStyleBackColor = true;
	this->radUnMar->CheckedChanged += gcnew System::EventHandler(this, &NewPerson::radUnMar_CheckedChanged);
	// 
	// radMar
	// 
	this->radMar->AutoSize = true;
	this->radMar->Checked = true;
	this->radMar->Location = System::Drawing::Point(19, 19);
	this->radMar->Name = L"radMar";
	this->radMar->Size = System::Drawing::Size(60, 17);
	this->radMar->TabIndex = 0;
	this->radMar->TabStop = true;
	this->radMar->Text = L"Married";
	this->radMar->UseVisualStyleBackColor = true;
	this->radMar->CheckedChanged += gcnew System::EventHandler(this, &NewPerson::radMar_CheckedChanged);
	// 
	// grbGender
	// 
	this->grbGender->Controls->Add(this->radFemale);
	this->grbGender->Controls->Add(this->radMale);
	this->grbGender->Location = System::Drawing::Point(24, 92);
	this->grbGender->Name = L"grbGender";
	this->grbGender->Size = System::Drawing::Size(219, 69);
	this->grbGender->TabIndex = 6;
	this->grbGender->TabStop = false;
	this->grbGender->Text = L"Gender";
	// 
	// radFemale
	// 
	this->radFemale->AutoSize = true;
	this->radFemale->Location = System::Drawing::Point(19, 42);
	this->radFemale->Name = L"radFemale";
	this->radFemale->Size = System::Drawing::Size(59, 17);
	this->radFemale->TabIndex = 0;
	this->radFemale->Text = L"Female";
	this->radFemale->UseVisualStyleBackColor = true;
	this->radFemale->CheckedChanged += gcnew System::EventHandler(this, &NewPerson::radFemale_CheckedChanged);
	// 
	// radMale
	// 
	this->radMale->AutoSize = true;
	this->radMale->Checked = true;
	this->radMale->Location = System::Drawing::Point(19, 19);
	this->radMale->Name = L"radMale";
	this->radMale->Size = System::Drawing::Size(48, 17);
	this->radMale->TabIndex = 0;
	this->radMale->TabStop = true;
	this->radMale->Text = L"Male";
	this->radMale->UseVisualStyleBackColor = true;
	this->radMale->CheckedChanged += gcnew System::EventHandler(this, &NewPerson::radMale_CheckedChanged);
	// 
	// label6
	// 
	this->label6->AutoSize = true;
	this->label6->Location = System::Drawing::Point(21, 184);
	this->label6->Name = L"label6";
	this->label6->Size = System::Drawing::Size(68, 13);
	this->label6->TabIndex = 3;
	this->label6->Text = L"Date of hire :";
	// 
	// chkPassword
	// 
	this->chkPassword->AutoSize = true;
	this->chkPassword->Location = System::Drawing::Point(29, 210);
	this->chkPassword->Name = L"chkPassword";
	this->chkPassword->Size = System::Drawing::Size(72, 17);
	this->chkPassword->TabIndex = 10;
	this->chkPassword->Text = L"Password";
	this->chkPassword->UseVisualStyleBackColor = true;
	this->chkPassword->CheckedChanged += gcnew System::EventHandler(this, &NewPerson::chkPassword_CheckedChanged);
	// 
	// dateBirth
	// 
	this->dateBirth->Location = System::Drawing::Point(98, 66);
	this->dateBirth->Name = L"dateBirth";
	this->dateBirth->Size = System::Drawing::Size(145, 20);
	this->dateBirth->TabIndex = 4;
	this->dateBirth->Value = System::DateTime(2013, 2, 7, 0, 0, 0, 0);
	this->dateBirth->ValueChanged += gcnew System::EventHandler(this, &NewPerson::dateHire_ValueChanged);
	// 
	// dateHire
	// 
	this->dateHire->Location = System::Drawing::Point(94, 184);
	this->dateHire->Name = L"dateHire";
	this->dateHire->Size = System::Drawing::Size(153, 20);
	this->dateHire->TabIndex = 8;
	this->dateHire->Value = System::DateTime(2013, 2, 7, 0, 0, 0, 0);
	this->dateHire->ValueChanged += gcnew System::EventHandler(this, &NewPerson::dateHire_ValueChanged);
	// 
	// txtPosition
	// 
	this->txtPosition->Location = System::Drawing::Point(351, 187);
	this->txtPosition->Name = L"txtPosition";
	this->txtPosition->Size = System::Drawing::Size(197, 20);
	this->txtPosition->TabIndex = 9;
	this->txtPosition->TextChanged += gcnew System::EventHandler(this, &NewPerson::txtFatherName_TextChanged);
	// 
	// txtEducation
	// 
	this->txtEducation->Location = System::Drawing::Point(400, 69);
	this->txtEducation->Name = L"txtEducation";
	this->txtEducation->Size = System::Drawing::Size(148, 20);
	this->txtEducation->TabIndex = 5;
	this->txtEducation->TextChanged += gcnew System::EventHandler(this, &NewPerson::txtFatherName_TextChanged);
	// 
	// txtFatherName
	// 
	this->txtFatherName->Location = System::Drawing::Point(375, 42);
	this->txtFatherName->Name = L"txtFatherName";
	this->txtFatherName->Size = System::Drawing::Size(173, 20);
	this->txtFatherName->TabIndex = 3;
	this->txtFatherName->TextChanged += gcnew System::EventHandler(this, &NewPerson::txtFatherName_TextChanged);
	// 
	// label8
	// 
	this->label8->AutoSize = true;
	this->label8->Location = System::Drawing::Point(295, 191);
	this->label8->Name = L"label8";
	this->label8->Size = System::Drawing::Size(50, 13);
	this->label8->TabIndex = 0;
	this->label8->Text = L"Position :";
	// 
	// label5
	// 
	this->label5->AutoSize = true;
	this->label5->Location = System::Drawing::Point(295, 45);
	this->label5->Name = L"label5";
	this->label5->Size = System::Drawing::Size(74, 13);
	this->label5->TabIndex = 0;
	this->label5->Text = L"Father Name :";
	// 
	// txtIDNum
	// 
	this->txtIDNum->Location = System::Drawing::Point(91, 39);
	this->txtIDNum->Name = L"txtIDNum";
	this->txtIDNum->Size = System::Drawing::Size(152, 20);
	this->txtIDNum->TabIndex = 2;
	this->txtIDNum->TextChanged += gcnew System::EventHandler(this, &NewPerson::txtIDNum_TextChanged);
	// 
	// label7
	// 
	this->label7->AutoSize = true;
	this->label7->Location = System::Drawing::Point(21, 66);
	this->label7->Name = L"label7";
	this->label7->Size = System::Drawing::Size(71, 13);
	this->label7->TabIndex = 0;
	this->label7->Text = L"Date of birth :";
	// 
	// label4
	// 
	this->label4->AutoSize = true;
	this->label4->Location = System::Drawing::Point(21, 42);
	this->label4->Name = L"label4";
	this->label4->Size = System::Drawing::Size(64, 13);
	this->label4->TabIndex = 0;
	this->label4->Text = L"ID Number :";
	// 
	// txtLName
	// 
	this->txtLName->Location = System::Drawing::Point(364, 16);
	this->txtLName->Name = L"txtLName";
	this->txtLName->Size = System::Drawing::Size(184, 20);
	this->txtLName->TabIndex = 1;
	this->txtLName->TextChanged += gcnew System::EventHandler(this, &NewPerson::txtLName_TextChanged);
	// 
	// label3
	// 
	this->label3->AutoSize = true;
	this->label3->Location = System::Drawing::Point(295, 19);
	this->label3->Name = L"label3";
	this->label3->Size = System::Drawing::Size(64, 13);
	this->label3->TabIndex = 0;
	this->label3->Text = L"Last Name :";
	// 
	// txtFName
	// 
	this->txtFName->Location = System::Drawing::Point(85, 12);
	this->txtFName->Name = L"txtFName";
	this->txtFName->Size = System::Drawing::Size(158, 20);
	this->txtFName->TabIndex = 0;
	this->txtFName->TextChanged += gcnew System::EventHandler(this, &NewPerson::txtFName_TextChanged);
	// 
	// label2
	// 
	this->label2->AutoSize = true;
	this->label2->Location = System::Drawing::Point(21, 16);
	this->label2->Name = L"label2";
	this->label2->Size = System::Drawing::Size(63, 13);
	this->label2->TabIndex = 0;
	this->label2->Text = L"First Name :";
	// 
	// dlgBrowseImg
	// 
	this->dlgBrowseImg->FileName = L"openFileDialog1";
	// 
	// error
	// 
	this->error->ContainerControl = this;
	// 
	// timer1
	// 
	this->timer1->Enabled = true;
	this->timer1->Tick += gcnew System::EventHandler(this, &NewPerson::timer1_Tick);
	// 
	// NewPerson
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(590, 411);
	this->Controls->Add(this->tabControl);
	this->Controls->Add(this->cmdOK);
	this->Controls->Add(this->cmdCancel);
	this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
	this->MaximizeBox = false;
	this->MinimizeBox = false;
	this->Name = L"NewPerson";
	this->Opacity = 0;
	this->ShowInTaskbar = false;
	this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
	this->Text = L"Adding New Person";
	this->Load += gcnew System::EventHandler(this, &NewPerson::NewPerson_Load);
	this->tabControl->ResumeLayout(false);
	this->tabPicturingPhase->ResumeLayout(false);
	this->gpbAcceptFace->ResumeLayout(false);
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbFace))->EndInit();
	this->tabPersonalInfo->ResumeLayout(false);
	this->tabPersonalInfo->PerformLayout();
	this->gpbPassword->ResumeLayout(false);
	this->gpbPassword->PerformLayout();
	this->gpbMarriage->ResumeLayout(false);
	this->gpbMarriage->PerformLayout();
	this->grbGender->ResumeLayout(false);
	this->grbGender->PerformLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->error))->EndInit();
	this->ResumeLayout(false);

}
bool FaceIdentifier::NewPerson::checkError()
	{
		bool res = true;
		if (faceList->Items->Count < 2)
		{
			System::Windows::Forms::MessageBox::Show("You must atleast enter 2 pictures for this person's face.",
				APP_TITLE, System::Windows::Forms::MessageBoxButtons::OK,
				System::Windows::Forms::MessageBoxIcon::Exclamation);
			error->Clear();
			error->SetError(faceList, "You must atleast enter 6 pictures for this person's face.");
			return false;
		}
		if (System::String::IsNullOrEmpty(txtFName->Text))
		{
			System::Windows::Forms::MessageBox::Show("Please enter the first name of the person you would like to add to the data base.",
				APP_TITLE, System::Windows::Forms::MessageBoxButtons::OK,
				System::Windows::Forms::MessageBoxIcon::Exclamation);
			error->Clear();
			error->SetError(txtFName, "You should enter the first name here.");
			return false;
		}
		if (System::String::IsNullOrEmpty(txtLName->Text))
		{
			System::Windows::Forms::MessageBox::Show("Please enter the last name of the person you would like to add to the data base.",
				APP_TITLE, System::Windows::Forms::MessageBoxButtons::OK,
				System::Windows::Forms::MessageBoxIcon::Exclamation);
			error->Clear();
			error->SetError(txtLName, "You should enter the last name here.");
			return false;
		}
		if (System::String::IsNullOrEmpty(txtIDNum->Text))
		{
			System::Windows::Forms::MessageBox::Show("Please enter the ID number of the person you would like to add to the data base.",
				APP_TITLE, System::Windows::Forms::MessageBoxButtons::OK,
				System::Windows::Forms::MessageBoxIcon::Exclamation);
			error->Clear();
			error->SetError(txtIDNum, "You should enter the ID number here.");
			return false;
		}
		if (System::String::IsNullOrEmpty(txtFatherName->Text))
		{
			System::Windows::Forms::MessageBox::Show("Please enter the father name of the person you would like to add to the data base.",
				APP_TITLE, System::Windows::Forms::MessageBoxButtons::OK,
				System::Windows::Forms::MessageBoxIcon::Exclamation);
			error->Clear();
			error->SetError(txtFatherName, "You should enter the father name here.");
			return false;
		}
		if (System::String::IsNullOrEmpty(txtEducation->Text))
		{
			System::Windows::Forms::MessageBox::Show("Please enter the education degree of the person you would like to add to the data base.",
				APP_TITLE, System::Windows::Forms::MessageBoxButtons::OK,
				System::Windows::Forms::MessageBoxIcon::Exclamation);
			error->Clear();
			error->SetError(txtEducation, "You should enter the education degree here.");
			return false;
		}
		if (System::String::IsNullOrEmpty(txtPosition->Text))
		{
			System::Windows::Forms::MessageBox::Show("Please enter the position of the person you would like to add to the data base.",
				APP_TITLE, System::Windows::Forms::MessageBoxButtons::OK,
				System::Windows::Forms::MessageBoxIcon::Exclamation);
			error->Clear();
			error->SetError(txtPosition, "You should enter the position here.");
			return false;
		}
		if (chkPassword->Checked == true && (System::String::IsNullOrEmpty(txtPassword->Text) || System::String::IsNullOrEmpty(txtConfirmPassword->Text)))
		{
			System::Windows::Forms::MessageBox::Show("Please enter the password and it's confimation .",
				APP_TITLE, System::Windows::Forms::MessageBoxButtons::OK,
				System::Windows::Forms::MessageBoxIcon::Exclamation);
			error->Clear();
			error->SetError(gpbPassword, "You should enter password and it's confirmation here.");
			return false;
		}
		if (chkPassword->Checked == true && (System::String::IsNullOrEmpty(txtPassword->Text) || System::String::IsNullOrEmpty(txtConfirmPassword->Text)))
		{
			System::Windows::Forms::MessageBox::Show("The password does'nt match with it's confirmation",
				APP_TITLE, System::Windows::Forms::MessageBoxButtons::OK,
				System::Windows::Forms::MessageBoxIcon::Exclamation);
			error->Clear();
			error->SetError(gpbPassword, "Password and it's confirmation should be the same.");
			return false;
		}
		return true;
	}
System::Void FaceIdentifier::NewPerson::cmdBrowseImg_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IplImage *brsFace;
	dlgBrowseImg->Filter = "Picture Files |*.jpg ; *.pgm";
	dlgBrowseImg->FileName = "";
	dlgBrowseImg->ShowDialog();
	if(System::String::IsNullOrEmpty(dlgBrowseImg->FileName))
		return;
	string path;
	_String::MarshalString(dlgBrowseImg->FileName,path);
	CommonCLS::img = cvLoadImage(path.c_str());
	int r, g, b;
	System::Drawing::Color c;
	bmp = gcnew System::Drawing::Bitmap(CommonCLS::img->width, CommonCLS::img->height);
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
	gpbAcceptFace->Visible = true;
	error->Clear();
}
System::Void FaceIdentifier::NewPerson::NewPerson_Load(System::Object^  sender, System::EventArgs^  e)
{
	radMale->Checked = true;
	radMar->Checked = true;
}
System::Void FaceIdentifier::NewPerson::cmdAccept_Click(System::Object^  sender, System::EventArgs^  e) 
{
	faceList->Items->Add("Picture");
	gpbAcceptFace->Visible = false;
	faces.push_back(CommonCLS::img);
}
System::Void FaceIdentifier::NewPerson::cmdOK_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (checkError() == false)
		return;
	this->DialogResult = Windows::Forms::DialogResult::OK;
	_String::MarshalString(this->txtFName->Text,Database::fname);
	_String::MarshalString(this->txtLName->Text,Database::lname);
	_String::MarshalString(this->txtIDNum->Text,Database::idnum);
	_String::MarshalString(this->txtFatherName->Text,Database::fathername);
	_String::MarshalString(this->dateBirth->Text,Database::dateofbirth);
	_String::MarshalString(this->txtEducation->Text,Database::ed);
	if(radMale->Checked == true)
		Database::gender = "Male";
	else
		Database::gender = "Female";
	if(radMar->Checked == true)
		Database::marriage = "Married";
	else
		Database::marriage = "Not Married";
	_String::MarshalString(this->dateHire->Text,Database::dateofhire);
	_String::MarshalString(this->txtPosition->Text,Database::pos);
	if (System::String::IsNullOrEmpty(this->txtPassword->Text))
		Database::password = "";
	else
		_String::MarshalString(this->txtPassword->Text,Database::password);
	_FaceRecognizer::add(faces,Database::setKey());
	Database::add();
	Database::save();
	_FaceRecognizer::save();
	faces.clear();
}
System::Void FaceIdentifier::NewPerson::txtFName_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	error->Clear();
}
System::Void FaceIdentifier::NewPerson::txtLName_TextChanged(System::Object^  sender, System::EventArgs^  e) 
{
	error->Clear();
}
System::Void FaceIdentifier::NewPerson::txtIDNum_TextChanged(System::Object^  sender, System::EventArgs^  e) 
{
	error->Clear();
}
System::Void FaceIdentifier::NewPerson::txtFatherName_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	error->Clear();
}
System::Void FaceIdentifier::NewPerson::dateHire_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
{
	System::String^ s = dateHire->Value.ToString();
}
System::Void FaceIdentifier::NewPerson::chkPassword_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	gpbPassword->Enabled = chkPassword->Checked;
}
System::Void FaceIdentifier::NewPerson::radMar_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	error->Clear();
}
System::Void FaceIdentifier::NewPerson::radUnMar_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	error->Clear();
}
System::Void FaceIdentifier::NewPerson::radMale_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	error->Clear();
}
System::Void FaceIdentifier::NewPerson::radFemale_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	error->Clear();
}
System::Void FaceIdentifier::NewPerson::txtPassword_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	error->Clear();
}
System::Void FaceIdentifier::NewPerson::txtConfirmPassword_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	error->Clear();
}
FaceIdentifier::NewPerson::~NewPerson()
{
	if (components)
	{
		delete components;
	}
}