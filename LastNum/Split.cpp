#include "stdafx.h"

void Split8(char *p)
{

	int i = 0;
	int len = strlen(p);
	char temp[9];
	if( len == 0 )
       return;
	else if(len < 8)
	{
		strncpy(temp,p,len);
		for (i = len;i < 8;i++)
		{
			temp[i] = '0';
		}
		temp[i] = '\0';
		puts(temp);
		memset(temp,0,9);
	}

	else if( len >= 8)
	{
		int count = 0;
		count = len/8;
		int mod = len%8;

		for(i = 0;i < count;i++)
		{
			strncpy(temp,p+i*8,8);
			temp[8] = '\0';
			puts(temp);

		}
		memset(temp,0,9);
		strncpy(temp,p + count*8,len - (count*8));

		for (i = len - (count*8);i < 8;i++)
		{
			temp[i] = '0';
		}
		temp[i] = '\0';
		puts(temp);
		memset(temp,0,9);
	}
}