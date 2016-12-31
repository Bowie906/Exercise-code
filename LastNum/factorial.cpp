#include "stdafx.h"

void NumberofZero()
{
	u32 num = 100;
	u32 count5 = 0;
	u32 numtemp = num;

	for (u32 i = 1; i <= num; i++)
	{
		u32 j = i;
		while ((j%5) == 0)
		{
			j /= 5;
			count5++;
		} 
	}
	cout << count5 << endl;
}

void NumberofNoneZero()
{
	
}