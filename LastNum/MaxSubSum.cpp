#include "stdafx.h"

int FindGreatestSumOfSubArray(vector<int> input)
{
	vector<int>::iterator _intite;
	int cursum = *(input.begin());//���ڴ洢��������е������յ�
	int greatestSum = -10000;//����ȫ�����ͣ���֤ʼ�����
	int header = 0;
	int rear = 0;//���ڴ洢��������е������յ�
	if (input.empty())
	{
		return -1;
	}
	for (_intite = input.begin() + 1; _intite != input.end(); _intite++)
	{
		if (cursum < 0)//�����ǰ����Ϊ������������ǰ��ĸ������ͣ�����һ������ʼ����
		{
			cursum = *_intite;
			header = _intite - input.begin();
		}
		else
		{
			cursum += *_intite;		//�����ǰ���Ͳ�Ϊ��������ϵ�ǰ��
			
		}
		if(cursum>greatestSum)//�����ǰ���ʹ���ȫ�����ͣ����޸�ȫ������
        {
            greatestSum=cursum;
			rear ++;			
        }
	}

	cout << "��������з�Χ�� " << header << "-" << rear << endl;
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