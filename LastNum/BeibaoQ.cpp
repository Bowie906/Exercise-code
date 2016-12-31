#include "stdafx.h"
#define Capacity 10
#define Num 3

void Bag0_1()
{

	u32 weight[Num] = {3,4,5};
	u32 value[Num] = {4,5,6};

	u32 c[Num+1][Capacity+1] = {0};			//用二维数组来存储第i次剩下j容量的最大价值

	//两个遍历
	for (u32 i = 1; i < Num+1; i++)			
	{
		for (u32 j = 1; j < Capacity+1; j++)
		{
			if (j > weight[i])
			{
				if (c[i-1][j] > c[i-1][j-weight[i]] + value[i])		//状态转移方程c[i][j] = max{c[i-1][j],c[i-1][j-weight[i]] + value[i]}
				{
					c[i][j] = c[i-1][j];							//状态转移方程符合任何情况！
				}
				else
				{
					c[i][j] = c[i-1][j-weight[i]] + value[i];
				}
			}
			else
			{
				c[i][j] = c[i - 1][j];								//保证状态正确性：每个数组元素被调用时正确
			}
		}
	}
	cout << c[3][10] << endl;
	
	//优化
	u32 f[10+1] = {0};
	//二维数组转化为一维数组：把f[j]从后往前遍历即可
	for (u32 i = 1; i < 4; i++)
	{
		for (u32 j = 10; j > 0; j--)
		{
			if (j > weight[i])
			{
				if (f[j] > value[i] + f[j - weight[i]])			//状态转移方程f[j] = max {f[j],value[i] + f[j - weight[i]]}
				{
					f[j] = f[j];
				}
				else
				{
					f[j] = value[i] + f[j - weight[i]];
				}
			}
		}
	}
	cout << f[10] <<endl;
}