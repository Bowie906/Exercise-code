#include "stdafx.h"

#define capacity 100

vector<int> InputPro()		//一行，1,2,3,4,5
{
    vector<int> arr;
    arr.reserve(capacity);
    char c;
    int sign = 1;
        while((c=getchar())!='\n')
        {
            int num;
            
            if (c == '-')	//负数
            {
                sign = -1;
            }
            if(c>='0'&&c<='9')
            {
                ungetc(c,stdin);
                cin>>num;
                arr.push_back(num*sign);
                sign = 1;
            }
        }
	vector<int>(arr).swap(arr);
    return arr;
}

vector<int> InputPro(char c)			//多行
{
	vector<int> arr;
	arr.reserve(capacity);
	int sign = 1;

		while(c!='\n')
		{
			int num;
			 if (c == '-')
            {
                sign = -1;
            }
			if(c>='0'&&c<='9')
			{
				ungetc(c,stdin);
				cin>>num;
				arr.push_back(num*sign);
                sign = 1;
			}
			c=getchar();
		}
	vector<int>(arr).swap(arr);
	return arr;
}