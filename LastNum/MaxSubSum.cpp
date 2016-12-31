#include "stdafx.h"

int FindGreatestSumOfSubArray(vector<int> input)
{
	vector<int>::iterator _intite;
	int cursum = *(input.begin());//用于存储最大子序列的起点和终点
	int greatestSum = -10000;//保存全局最大和（保证始终最大）
	int header = 0;
	int rear = 0;//用于存储最大子序列的起点和终点
	if (input.empty())
	{
		return -1;
	}
	for (_intite = input.begin() + 1; _intite != input.end(); _intite++)
	{
		if (cursum < 0)//如果当前最大和为负数，则舍弃前面的负数最大和，从下一个数开始计算
		{
			cursum = *_intite;
			header = _intite - input.begin();
		}
		else
		{
			cursum += *_intite;		//如果当前最大和不为负数则加上当前数
			
		}
		if(cursum>greatestSum)//如果当前最大和大于全局最大和，则修改全局最大和
        {
            greatestSum=cursum;
			rear ++;			
        }
	}

	cout << "最大子序列范围： " << header << "-" << rear << endl;
	return greatestSum;

}

int run()
{

	int input[] = {1,-2,3,10,-4,7,2,-5};
	int maxsubsum = -1000;
	int inputnum = sizeof(input)/sizeof(int);
	vector<int> inputarr(input,input+inputnum);
	maxsubsum =  FindGreatestSumOfSubArray(inputarr);

	cout<<"maxsubsum = "<<maxsubsum<<endl;
	return 0;
}