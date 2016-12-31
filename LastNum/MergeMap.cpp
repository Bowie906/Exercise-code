#include "stdafx.h"
#include <map>

void MergeTable(int n)
{
	map<int,int> table;
	int key,value;
	map<int,int> :: iterator itint;

	while (n--)
	{
		cin >> key >> value;

		table[key] += value;
	}

	for ( itint = table.begin(); itint != table.end(); itint++)
	{
		cout << itint->first << " " << itint ->second << endl;
	}
}