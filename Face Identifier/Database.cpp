#include "StdAfx.h"
#include "Database.h"

std::string Database::fname;
std::string Database::lname;
std::string Database::idnum;
std::string Database::fathername;
std::string Database::dateofbirth;
std::string Database::ed;
std::string Database::gender;
std::string Database::marriage;
std::string Database::dateofhire;
std::string Database::pos;
std::string Database::password;
std::string Database::key;

std::vector<string> Database::fnames;
std::vector<string> Database::lnames;
std::vector<string> Database::idnums;
std::vector<string> Database::fathernames;
std::vector<string> Database::dateofbirths;
std::vector<string> Database::eds;
std::vector<string> Database::genders;
std::vector<string> Database::marriages;
std::vector<string> Database::dateofhires;
std::vector<string> Database::poss;
std::vector<string> Database::passwords;
std::vector<string> Database::keys;
std::ifstream       Database::fin;
int					Database::_CurrentId_;

void Database::load()
{
	std::ifstream file("key.dat");
	file >> _CurrentId_;
	file.close();
	fin.open("database.sql");
	if(!fin)
	{
		System::Windows::Forms::MessageBox::Show("'database.sql' can not be loaded.",
				APP_TITLE, System::Windows::Forms::MessageBoxButtons::OK,
				System::Windows::Forms::MessageBoxIcon::Exclamation);
		exit(0);
	}
	while(! fin.eof())
	{
		std::string __fname = getNextToken();
		if(__fname[0] == (char)1)
			break;
		fnames.push_back(__fname);
		lnames.push_back(getNextToken());
		idnums.push_back(getNextToken());
		fathernames.push_back(getNextToken());
		dateofbirths.push_back(getNextToken());
		eds.push_back(getNextToken());
		genders.push_back(getNextToken());
		marriages.push_back(getNextToken());
		dateofhires.push_back(getNextToken());
		poss.push_back(getNextToken());
		passwords.push_back(getNextToken());
		keys.push_back(getNextToken());
	}
}

std::string Database::getNextToken()
{
	std::string res = "";
	char c = fin.get();

	while ( (!fin.eof()) && (c != TOKENCHAR) )
	{
		res.push_back(c);
		c = fin.get();
	}
	if(res == "")
	{
		std::string empty = " ";
		empty[0] = (char)1;
		return empty;
	}
	return res;
}

void Database::add()
{
	System::Int32 __key = setKey() - 1;
	System::Windows::Forms::MessageBox::Show(__key.ToString());
	fnames.push_back(fname);
	lnames.push_back(lname);
	idnums.push_back(idnum);
	fathernames.push_back(fathername);
	dateofbirths.push_back(dateofbirth);
	eds.push_back(ed);
	genders.push_back(gender);
	marriages.push_back(marriage);
	dateofhires.push_back(dateofhire);
	poss.push_back(pos);
	if(password == "")
		password = "NULL";
	passwords.push_back(password);
	std::string s;
	_String::MarshalString(__key.ToString(), s);
	keys.push_back(s);
}

int Database::setKey()
{
	int res = _CurrentId_;
	_CurrentId_ ++;
	return res;
}

void Database::getData(System::Int32 _key)
{
	std::string str;
	_String::MarshalString(_key.ToString(), str);
	for(int i = 0; i < keys.size(); i++)
	{
		if((gcnew System::String(keys[i].c_str())) == _key.ToString())
		{
			fname = fnames[i];
			lname = lnames[i];
			idnum = idnums[i];
			fathername = fathernames[i];
			dateofbirth = dateofbirths[i];
			ed = eds[i];
			gender = genders[i];
			marriage = marriages[i];
			dateofhire = dateofhires[i];
			pos = poss[i];
			password = passwords[i];
			key = keys[i];
			return;
		}
	}
}
void Database::save()
{
	std::ofstream fout("key.dat");
	fout << _CurrentId_;
	fout.close();

	std::ofstream file("database.sql");
	for(int i = 0; i < fnames.size(); i++)
	{
		file << fnames[i] << TOKENCHAR;
		file << lnames[i] << TOKENCHAR;
		file << idnums[i] << TOKENCHAR;
		file << fathernames[i] << TOKENCHAR;
		file << dateofbirths[i] << TOKENCHAR;
		file << eds[i] << TOKENCHAR;
		file << genders[i] << TOKENCHAR;
		file << marriages[i] << TOKENCHAR;
		file << dateofhires[i] << TOKENCHAR;
		file << poss[i] << TOKENCHAR;
		file << passwords[i] << TOKENCHAR;
		file << keys[i] << TOKENCHAR;
	}
	file.close();
}