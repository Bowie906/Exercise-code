#include "stdafx.h"
//#include "EqualNum.h"
//#include "LastNum.h"
//#include "MingsRandom.h"
//#include "Split.h"
//#include "ZXquestion1.h"
//#include "MeiTuan.h"
//#include "XmlMatch.h"
//#include "InputPro.h"
//#include "MergeMap.h"
#include "Selection.h"
//^(?([^\r\n])\s)*\r?$\r?\n -- delete konghang




#pragma region MingsRandom
/*int num = 0;
int i = 0;

while (scanf("%d",&num) != EOF)
{
int *input = (int*)malloc(sizeof(int)*num);
for(i = 0;i < num;i++)
{
scanf("%d",&input[i]);
}
MingsRandom(input,num);	

free(input);	
}*/
#pragma endregion

#pragma region Split8
//char str1[100] = "";
//char str2[100] = "";
//scanf("%s",str1);
//scanf("%s",str2);
//if (!(strcmp(str1,"")) || !(strcmp(str2,"")))
//	return 0;
//else
//{
//	Split8(str1);
//	Split8(str2);
//	return 0;
//}

#pragma endregion

#pragma region MemOperate
//int T,MaxMem;
//int i = 0;
//int j = 0;
//char symbol[3]; 
//int appsize = 0;
//int flag = 0;
//char p[100][100];

//scanf("%d %d",&T,&MaxMem);

//while (scanf("%s %d",symbol,&appsize) != EOF)
//{
//	MemOperate(symbol,appsize,MaxMem,&flag,&i,p);
//	memset(symbol,0,sizeof(char)*3);
//}

//for (j = 0;j < i-1;j ++)
//{
//	if (flag == 1)
//	{
//		printf("%s\n",p[j]);
//	}
//	else
//	{
//		printf("%d\n",(int)p[j]);
//	}
//}
#pragma endregion

#pragma region MergeTable
//int n;
//while (cin >> n)
//{
//	MergeTable(n);
//}
#pragma endregion

#pragma region BinaryVirus
//unsigned int input;
//vector<int> barray;
//vector<int> :: iterator char_ite;
//barray.reserve(100);
//int i = 0;

//while (cin >> input)
//{
//	barray.push_back(BinaryNum(input));
//}
#pragma endregion	

#define Capacity 10
#define Num 3

int main()
{
#pragma region ��ȭ
	/*
	while (1)
	{
		Selection *gamer = new Selection("gamer");
		Selection *computer = new Selection("computer");
		char selection;
		cout << "��ȭ��Ϸ��������Ҫ��ѡ��" <<endl;
		cout << "A:����" << endl;
		cout << "B:ʯͷ" << endl;
		cout << "C:��" << endl;
		cout << "D:��ѡ" << endl;
		cin >> selection;
		switch (selection)
		{
		case 'A':
			gamer->GamerSelection("����");
			break;
		case 'B':
			gamer->GamerSelection("ʯͷ");
			break;
		case 'C':
			gamer->GamerSelection("��");
			break;
		case 'D':
			return 0;
		default:
			break;
		}
		computer ->ComputerSelection();
		gamer ->Result(computer);

		delete gamer;
		delete computer;
	}
	*/
#pragma endregion

}






