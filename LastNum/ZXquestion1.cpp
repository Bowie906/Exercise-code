#include "stdafx.h"
#include "ZXquestion1.h"

void test1(int n)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int temp = 1;
	int temp2 = 0;
	for (i = 1; i< n+1;i++)
	{
		int px = n - (i - 1);
		for (j = 0;j < (i-1)*2;j++)
			printf("-");		
		for (k = 0;k < (n-(i-1))*2;k++)
		{
			if( k < ((n-(i-1))*2)/2)

			{
				printf("%d",temp++);
				temp2 = (temp-1 - (n-i));
			}
			else
			{				
				printf("%d",(px*px + temp2));
				temp2++;
			}
			
			if (k >= (n-(i-1))*2 - 1)
			{
				break;
			}
			printf("*");
		}
		printf("\n");
	}

	
}

