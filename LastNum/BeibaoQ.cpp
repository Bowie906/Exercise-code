#include "stdafx.h"
#define Capacity 10
#define Num 3

void Bag0_1()
{

	u32 weight[Num] = {3,4,5};
	u32 value[Num] = {4,5,6};

	u32 c[Num+1][Capacity+1] = {0};			//�ö�ά�������洢��i��ʣ��j����������ֵ

	//��������
	for (u32 i = 1; i < Num+1; i++)			
	{
		for (u32 j = 1; j < Capacity+1; j++)
		{
			if (j > weight[i])
			{
				if (c[i-1][j] > c[i-1][j-weight[i]] + value[i])		//״̬ת�Ʒ���c[i][j] = max{c[i-1][j],c[i-1][j-weight[i]] + value[i]}
				{
					c[i][j] = c[i-1][j];							//״̬ת�Ʒ��̷����κ������
				}
				else
				{
					c[i][j] = c[i-1][j-weight[i]] + value[i];
				}
			}
			else
			{
				c[i][j] = c[i - 1][j];								//��֤״̬��ȷ�ԣ�ÿ������Ԫ�ر�����ʱ��ȷ
			}
		}
	}
	cout << c[3][10] << endl;
	
	//�Ż�
	u32 f[10+1] = {0};
	//��ά����ת��Ϊһά���飺��f[j]�Ӻ���ǰ��������
	for (u32 i = 1; i < 4; i++)
	{
		for (u32 j = 10; j > 0; j--)
		{
			if (j > weight[i])
			{
				if (f[j] > value[i] + f[j - weight[i]])			//״̬ת�Ʒ���f[j] = max {f[j],value[i] + f[j - weight[i]]}
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