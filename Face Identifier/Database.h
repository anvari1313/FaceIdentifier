#ifndef __DATABASE_H__
#define __DATABASE_H__
#include <string>
#include "_String.h"
#include <iostream>
#include <fstream>
#include <vector>
#include "GlobalVars.h"
#include "Common.h"


#define TOKENCHAR (char)16
class Database
{	
	static std::vector<string> fileLine;
public:
	static std::string fname;
	static std::string lname;
	static std::string idnum;
	static std::string fathername;
	static std::string dateofbirth;
	static std::string ed;
	static std::string gender;
	static std::string marriage;
	static std::string dateofhire;
	static std::string pos;
	static std::string password;
	static std::string key;
	//
private:
	static int _CurrentId_;
	static std::vector<string> fnames;
	static std::vector<string> lnames;
	static std::vector<string> idnums;
	static std::vector<string> fathernames;
	static std::vector<string> dateofbirths;
	static std::vector<string> eds;
	static std::vector<string> genders;
	static std::vector<string> marriages;
	static std::vector<string> dateofhires;
	static std::vector<string> poss;
	static std::vector<string> passwords;
	static std::vector<string> keys;
	static std::ifstream fin;

	static std::string getNextToken();
	//
public:
	static int setKey();
	static void load();
	static void add();
	static void save();
	static void getData(System::Int32 _key);
};
#endif