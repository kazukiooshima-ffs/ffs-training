#include "SplitString.h"
#include <string>
using namespace std;



SplitString::SplitString()
{
}


SplitString::~SplitString()
{
}

//  もらった文字列を文字と数字に切り離して数字だけ返す
int SplitString::devideNum(string element, string targetstring)
{
	char* p;
	char* copy = _strdup(element.c_str());
	const char* delim = (targetstring.c_str());
	char* ctx;

	p = strtok_s(copy, delim, &ctx);
	splitNum = (atoi)(p);
	delete[] copy;
	return splitNum;
}