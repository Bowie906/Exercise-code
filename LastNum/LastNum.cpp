#include "stdafx.h"

int LastCount(char *p)
{
	int totalnum = 0;
	int i;
	int lastnum;
	//totalnum = sizeof(p);
	//printf("%d ",totalnum);
	totalnum = strlen(p);
	//printf("%d ",totalnum);
	for (i = totalnum-1;i >= 0;i--)
	{
		if (p[i] == ' ')
		{
			lastnum = totalnum - 1 - i;
			return lastnum;
		}
	}
	return totalnum;
		
}