#include "stdafx.h"



int EqualNum(char *source,char item)
{
	int i = 0;
	int Num = 0;
	for (i = 0;i < (int)strlen(source);i++)
	{
		if (item == source[i] || item == source[i] + 32 || item == source[i] - 32) // +32 is big to little -32 is little to big
		{
			Num ++;
		}
	}
	return Num;
}