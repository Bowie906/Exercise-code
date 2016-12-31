#include "stdafx.h"

void Vrius_AB()
{
		int k;
	unsigned int countA = 0;
	unsigned countB = 0;
	vector<	char> result;
	vector<char> :: iterator char_ite;
	result.reserve(10000);
	result.push_back ('A');

	cin >> k;
	
	for (int i = 0; i < k; i++)
	{
		for ( char_ite = result.begin(); char_ite != result.end(); char_ite++)
		{
			if (*char_ite == 'A')
			{
				*char_ite = 'B';
				continue;
			}
			if (*char_ite == 'B')
			{
				char_ite = result.insert(char_ite+1,'A');
				//char_ite ++;
			}
		}
	}

	for ( char_ite = result.begin(); char_ite != result.end(); char_ite++)
	{
		cout << *char_ite <<" ";
		//
		if (*char_ite == 'A')
		{
			countA ++;
		}
		if (*char_ite == 'B')
		{
			countB ++;
		}
	}
	cout << endl;
	cout << countA << " "<<countB<<endl;

}
