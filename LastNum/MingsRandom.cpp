#include "stdafx.h"
#include "MingsRandom.h"

void AdvInsertSort(int *intarray,int n)
{
	int i;
	int j;
	int temp = -1;
	for (i = 1;i < n;i++)
	{
		int flag = 0;
		temp = intarray[i];
		for (j = i - 1;(j >= 0) && (temp < intarray[j]);j--)
		{
			//temp = intarray[i];
			intarray[j+1] = intarray[j];
		}
		intarray[j+1] = temp;
	}
}

void DelDuplicate(int *intarray,int num)
{
	int i = 0;
	for(i = 0;i < num;i++)
	{
		if ((intarray[i] == intarray[i+1]) && (i < num-1))
			continue;
		printf("%d\n",intarray[i]);
	}
}

void MingsRandom(int intarray[],int n)
{
	AdvInsertSort(intarray,n);
	DelDuplicate(intarray,n);
}