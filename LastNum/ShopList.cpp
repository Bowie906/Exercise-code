#include "stdafx.h"
#define u32 unsigned int
#define col 3
#define maxmultiply 200000

void Shoplist()
{
	u32 N,m;
	while (cin >> N >> m)
	{
		u32 (*sheet)[col] = new u32[m][col];
		while ((N >= 32000) || (m >= 60 ))
		{
			cout << "out of range, input again" << endl;
			cin >> N >> m;
		}
		for (u32 i = 0; i < m; i++)
		{
			for (u32 j = 0; j < col; j++)
			{
				cin >> sheet[i][j];
			}
		}

		vector<u32> max;					//���۸�*��������
		vector<u32> :: iterator u32_ite;	
		u32 vecpos = 0;						//ĳ�����۸�*���������Ӧ���±�

		for (u32 i = 0; i < m; i++)
		{
			u32 mindex = sheet[i][2];		//�����е����������������+1
			u32 sumtemp = 0;				//��ǰ��Ʒ�ܼ۵ĺ�
			u32 maxtemp = 0;				//��i�����ܵõ����۸�*����
			if (sheet[i][0] > N)
			{
				continue;
			}
			else              
			{
				if (0 == mindex)
				{
					sumtemp += sheet[i][0];               
				}
				else
				{
					sumtemp += sheet[i][0] + sheet[mindex - 1][0];
				}
				if (sumtemp > N)
					continue;
				else
				{
					maxtemp += sheet[i][0] * sheet[i][1];
					max.insert(max.begin()+vecpos,maxtemp);
					vecpos++;
				}

				for (u32 j = i+1; (j < m) && (maxtemp < maxmultiply); j++)
				{
					mindex  = sheet[j][2];
					if ((0 == mindex) || (i == (mindex - 1)))
					{
						sumtemp += sheet[j][0];
						if (sumtemp > N)
						{
							sumtemp -= sheet[j][0];
							continue;
						}
						else
						{
							maxtemp += sheet[j][0] * sheet[j][1];
							max.insert(max.begin()+vecpos,maxtemp);
							vecpos ++;
						}
					}
					else
					{
						sumtemp += sheet[j][0] + sheet[mindex - 1][0];
						if (sumtemp > N)
						{
							sumtemp = sumtemp - sheet[j][0] - sheet[mindex - 1][0];
							continue;
						}
						else
						{
							maxtemp += sheet[j][0] * sheet[j][1];
							max.insert(max.begin()+vecpos,maxtemp);
							vecpos++;
						}
					}				
				}
			}                 
		}
		for ( u32_ite = max.begin(); u32_ite != max.end(); u32_ite++)
		{
			cout << *u32_ite << endl;
		}
		u32_ite = max_element(max.begin(),max.end());
		cout << *u32_ite <<endl;      
	}
}