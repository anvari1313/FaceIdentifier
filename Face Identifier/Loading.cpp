#include "stdafx.h"
#include "Loading.h"

CvSize getFrameSize()
{
	CvSize res;
	res.height = 112;
	res.width = 92;
	return res;
}
int prepareHaarCascade()
{
	cascade = (CvHaarClassifierCascade*)cvLoad("haarcascade_frontalface_alt_tree.xml", 0, 0, 0 );
	if(!cascade) 
	{
		System::Windows::Forms::MessageBox::Show("'haarcascade_frontalface_alt_tree.xml' can not be opened or is not available.",
			 APP_TITLE, System::Windows::Forms::MessageBoxButtons::OK,
			 System::Windows::Forms::MessageBoxIcon::Exclamation);
		return -1;
	}
	return 0;
}
bool loadDatabase()
{
	Database::load();
	return true;
}