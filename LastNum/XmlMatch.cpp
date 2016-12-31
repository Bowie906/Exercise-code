#include "stdafx.h"
using namespace std;

void XmlMatch()
{
	char c;
	vector<char> intarr1;
	vector<char> intarr2;
	vector<char> intarr3;
	vector<char> ::iterator int_ite;

	while ((c = getchar()) != '\n')
	{
		intarr1.push_back(c);
	}

	while ((c = getchar()) == '-')
	{
	}

	while ((c = getchar()) != '\n')
	{
		intarr2.push_back(c);
	}

	while ((c = getchar()) == '-')
	{
	}

	while ((c = getchar()) != '\n')
	{
		if (c == '\"')
		{
			c = getchar();
			while (c != '\"')
			{
				intarr3.push_back(c);
				c = getchar();
			}
			break;
		}
	}

	for (int i = 0; i < (int)intarr1.size(); i++)
	{
		if (intarr1[i] != intarr2[i])
		{
			printf("False");
			return;
		}
	}
	printf("True");

}
