#include "StdAfx.h"
#include "_String.h"


void _String::MarshalString ( System::String ^ s, std::string& os ) 
{
	using namespace System;
	using namespace std;
	using namespace Runtime::InteropServices;
	const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

void _String::MarshalString ( System::String ^ s, std::wstring& os ) 
{
	using namespace System;
	using namespace std;
	using namespace Runtime::InteropServices;
	const wchar_t* chars = (const wchar_t*)(Marshal::StringToHGlobalUni(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}