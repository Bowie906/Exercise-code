#include "stdafx.h"


void PickDupNum()
{
	int input;
	vector<int> inputnum;
	vector<int> :: iterator _intite;
	vector<int> :: iterator _intjte;
	inputnum.reserve(30);
	bool dupflag = false;

	cin >> input;

	do
	{
		inputnum.push_back(input%10);
		input /= 10;
	}while(input != 0);

	vector<int>(inputnum).swap(inputnum);

	cout << inputnum[0];

	for (_intite = inputnum.begin() + 1; _intite != inputnum.end(); _intite++)
	{
		dupflag = false;

		for ( _intjte = inputnum.begin(); _intjte != _intite; _intjte++)
		{
			if ( *_intite == *_intjte)
			{
				dupflag = true;
				break;
			}
		}
		if (dupflag)
		{
			continue;
		}
		else
		{
			cout << *_intite;
		}

	}
}