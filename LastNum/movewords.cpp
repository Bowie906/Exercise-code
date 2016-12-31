#include "stdafx.h"

string Wordsmove(string word,int num)
{
	string movedstring = word;
	int j = num;
	int jindex;
	for (int i = 0; i < (int)word.size(); i++)
	{
		jindex = j%word.size();
		movedstring[jindex] = word[i];
		j++;
	}
	return movedstring;
}

int mainWordsmove()
{
	int N;
	cin >> N;
	getchar();
	string *movedwords = new string[N];


	for (int i = 0; i < N; i++)
	{
		string word;
		getline(cin,word);
		int movednum;
		cin >> movednum;		
		movedwords[i] = Wordsmove(word,movednum);
	}
	
	for (int i = 0; i < N; i++)
	{
		cout << movedwords[i] << endl;
	}

	delete[] movedwords;
	return 0;
}