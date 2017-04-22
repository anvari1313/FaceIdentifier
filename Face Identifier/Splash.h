#pragma once

#include "GlobalVars.h"
#include "Main.h"
#include "Loading.h"

namespace FaceIdentifier {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Splash
	/// </summary>
	public ref class Splash : public System::Windows::Forms::Form
	{
	public:
	Splash(void);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Splash();
	private: System::Windows::Forms::ProgressBar^  prbLoading;
	private: System::Windows::Forms::Timer^  timer;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Timer^  progressTmr;

	private: System::ComponentModel::IContainer^  components;
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
	private: System::Void Splash_Load		(System::Object^  sender, System::EventArgs^  e);
	private: System::Void timer_Tick		(System::Object^  sender, System::EventArgs^  e);
	private: System::Void progressTmr_Tick	(System::Object^  sender, System::EventArgs^  e);
};
}
