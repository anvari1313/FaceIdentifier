#ifndef __STRING_H_
#define __STRING_H_
#include <string>

ref class _String
{
public:
	static void MarshalString ( System::String ^ s, std::string& os );
	static void MarshalString ( System::String ^ s, std::wstring& os );
};
#endif