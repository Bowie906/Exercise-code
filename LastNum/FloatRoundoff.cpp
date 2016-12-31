#include "stdafx.h"
#include <string>
#include <sstream>
using namespace std;

void FloatRoundoff(float fnum)
{
	while (cin>>fnum)
	{
		int inum = 0;
		inum =(int)fnum;
		fnum = fnum - inum;
		fnum *= 10;
		stringstream ss;
		ss << fnum;
		string str;
		ss >> str;
		if (str[0] > '4')
		{
			cout << inum + 1<<endl;
		}
		else
		{
			cout << inum << endl;
		}
	} 
}
