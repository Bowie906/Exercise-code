#include "stdafx.h"
void PosChange(int pos[2],string substring,int length)
{
	u32 Dvalue = 0;
	if (2 == length)
	{
		Dvalue = substring[1] - '0';
	}
	else
	{
		Dvalue = (substring[1] - '0')*10 + (substring[2] - '0');
	}

	switch (substring[0])
	{
	case 'A':	
		pos[0] -= Dvalue;
		break;
	case 'D':	
		pos[0] += Dvalue;
		break;
	case 'W':	
		pos[1] += Dvalue;
		break;
	case 'S':	
		pos[1] -= Dvalue;
		break;
	default:
		break;
	}

}

void WSAD()
{

	string input;
	string :: iterator str_ite,subpos;
	while (getline(cin,input))
	{
		int pos[2] = {0,0};
		vector<string> substring;
		vector<string> :: iterator vstr_ite;
		substring.reserve(30);
		u32 sublen = 0;
		subpos = input.begin();

		for (str_ite = input.begin(); str_ite != input.end(); str_ite++)
		{
			if (*str_ite == ';')
			{
				sublen = str_ite - subpos;		
				if ((sublen > 3) || (sublen < 2))
				{
					subpos = str_ite + 1;
					continue;
				}
				else
				{
					string temp = input.substr(subpos - input.begin(),sublen);
					substring.push_back(temp);
				}
				subpos = str_ite + 1;
			}
		}

		for ( vstr_ite = substring.begin(); vstr_ite != substring.end(); vstr_ite++)
		{
			PosChange(pos,*vstr_ite,(*vstr_ite).size());
		}
		cout<< pos[0]<<","<<pos[1]<<endl;
	}
}
