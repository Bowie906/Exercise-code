#include "stdafx.h"
#include <sstream>

#define u32 unsigned int
/*
��һ��10.0.0.1���{{10}��{0}��{0}��{1}}
*/
void stringsplit(string split[4],string str)
{
	int ret = 0;
	int pos = 0;
	int j = 0;
	for (u32 i = 0; i < str.size(); i++)
	{
		if (str[i] == '.')
		{
			split[j++] = str.substr(pos,i-pos);
			pos = i+1;
		}
	}
	split[j] = str.substr(pos,str.size() - pos);
}	

/*
�ж��Ƿ�����Ϸ�������xxx.xxx.xxx.xxx��ʽ
*/
bool IsLegal(string split[4])
{
	for (int i = 0; i < 4; i++)
	{
		if (split[i] == "") 
		{
			return false;
		}
	}
	return true;
}
/*
IP��ַ����
*/
char Classification(string split[4])	
{
	u32 ip;
	stringstream ss;
	ss << split[0];
	ss >> ip;
	ss.clear();
	if (0 == ip)
	{
		return 'T';		//��ȷ��������
	}
	else if ((ip >= 1) && (ip <= 126))
	{
		if (10 == ip)
		{
			return 'P';
		}
		else
		{
			return 'A';
		}
	}
	else if((ip >= 128) && (ip <= 191))
	{
		if (172 == ip)
		{
			ss << split[1];
			ss >> ip;
			ss.clear();
			if ((ip >= 16) && (ip <= 31))
			{
				return 'P';
			}
		}		
		else
		{
			return 'B';
		}
	}
	else if ((ip >= 192) && (ip <= 223))
	{
		if (192 == ip)
		{
			ss << split[1];
			ss >> ip;
			ss.clear();
			if (168 == ip)
			{
				return 'P';
			}
		}		
		else
		{
			return 'C';
		}
	}
	else if ((ip >= 224) && (ip <= 239))
	{
		return 'D';
	}
	else if ((ip >= 240) && (ip <= 255))
	{
		return 'E';
	}
	else
	{
		return '0';
	}
	return '0';
}
/*
��MASK�ĵ�ʮ����Ϊ�����ƴ����B[4][8]��
*/
void D2B(string split[4],u32 B[4][8])
{
	u32 value;
	stringstream ss;
	int j  = 0;

	for (int i = 0; i < 4; i++)
	{
		ss << split[i];
		ss >> value;
		while (value)
		{
			B[i][7 - j] = value % 2;
			value /= 2;
			j++;
		}
	}
}

int IPmain(int argc, _TCHAR* argv[])
{

	string total;	//�����ÿһ��
	int A = 0;	int B = 0;	int C = 0;	int D = 0;	int E = 0;	int P = 0;	
	int ERRORIP = 0;	int ERRORMASK = 0;	//�����������
	while (cin >> total)
	{
		string ipstr;	//���IP
		string maskstr;	//���MASK
		string split[4];	//��һ��10.0.0.1���{{10}��{0}��{0}��{1}}��MASKһ��
		u32 Binary[4][8] = {0};//��MASK�ĵ�ʮ����Ϊ�����ƴ����B[4][8]��
		char c;
		int postemp = 0;
		postemp = total.find('~',0);	//һ������ָ������string��IP,MASK
		ipstr = total.substr(0,postemp);
		maskstr = total.substr(postemp + 1,total.size() - postemp);
		cout << ipstr << " " << maskstr <<endl;	//������
		stringsplit(split,ipstr);
		if (!IsLegal(split))
		{
			ERRORIP++;
		}
		else
		{
			c= Classification(split);
			switch (c)
			{
			case '0': ERRORIP++; break;
			case 'P': P++; break;
			case 'A': A++; break;
			case 'B': B++; break;
			case 'C': C++; break;
			case 'D': D++; break;
			case 'E': E++; break;
			case 'T': break;
			default:
				break;
			}
		}

		stringsplit(split,maskstr);
		if (!IsLegal(split))
		{
			ERRORMASK++;
		}
		else
		{
			D2B(split,Binary);
			u32 *p = &Binary[0][0];
			for (int i = 0; i < 31; i++)
			{
				if ((0 == *p) && (1 == *(p + 1)))
				{
					ERRORMASK++;
					break;
				}
				p++;
			}
		}
		cout <<"A = "<<A<<" "<<"B = "<<B<<" "<<"C = "<<C<<" "<<"D = "<<D<<" "<<"E = "<<E<<" ";
		cout <<"ERRORIP = "<<ERRORIP<<" "<<"ERRORMASK = "<<ERRORMASK<<" "<<"P = "<<P<<endl;
	}
}