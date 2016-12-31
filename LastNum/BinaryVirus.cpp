#include "stdafx.h"

int BinaryNum(unsigned int input)
{
	int ret = 0;
	bool flag ;

	for (unsigned int i = 1; i <= input; i++)
	{
		flag = true;
		unsigned int j = i;
		while(i)
		{
			if (((i%10) == 1) || ((i%10) == 0))
			{
				i /= 10;				
			}
			else
			{
				//ret = 0;
				flag = false;
				break;
			}
		}
		if (flag)
		{
			ret ++;
		}		
		i = j;
	}

	return ret;
}
