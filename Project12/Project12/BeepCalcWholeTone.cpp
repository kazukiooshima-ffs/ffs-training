#include "BeepCalcWholeTone.h"
#include <iostream>
using namespace std;



BeepCalcWholeTone::BeepCalcWholeTone()
{
}


BeepCalcWholeTone::~BeepCalcWholeTone()
{
}

int BeepCalcWholeTone::CalcWholeToneLength(int tempo, int& wholeToneLength)
{
	if (tempo <= 0)
	{
		cout << "tempo の値が 0 以下なので音符・休符の長さが計算できません。\n";
		return -1;
	}
	if (tempo > 0)
	{
		wholeToneLength = (4 * 60 * 1000) / tempo;
	}
	return 0;
}