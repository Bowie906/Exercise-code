#include <map>
#include <string>
#include <iostream>
using namespace std;

class Selection
{
public:
	Selection(string selector)
	{
		if ("gamer" == selector)
		{
			_gamerselections.insert(pair<string,int>("����",4));
			_gamerselections.insert(pair<string,int>("ʯͷ",7));
			_gamerselections.insert(pair<string,int>("��",10));
		}
		else if("computer" == selector)
		{
			_computerselections.insert(pair<string,int>("����",0));
			_computerselections.insert(pair<string,int>("ʯͷ",1));
			_computerselections.insert(pair<string,int>("��",2));
		}
		else
		{
		}
	}

	void GamerSelection(string c)
	{
		string p = c;
		map<string,int> :: iterator _mapite;
		_mapite = _gamerselections.find(p);
		if (_mapite != _gamerselections.end())
		{
			this->_gamerchoice = _mapite->second;
		}
		else
		{
			cout <<"����Ӧѡ��"<<endl;
		}
	}

	void ComputerSelection()
	{
		int computernum = rand()%3;
		this->_computerchoice = computernum;
	}

	void Result(const Selection* computer)
	{
		int sum;
		sum = this->_gamerchoice + computer->_computerchoice;
		switch (sum)
		{
		case 4:
			cout <<"ƽ��"<<endl;
			cout <<"������ǣ�����"<<endl<< "���Գ����ǣ�����"<<endl;
			break;
		case 8:
			cout <<"ƽ��"<<endl;
			cout <<"������ǣ�ʯͷ"<<endl<< "���Գ����ǣ�ʯͷ"<<endl;
			break;
		case 12:
			cout <<"ƽ��"<<endl;
			cout <<"������ǣ���"<<endl<< "���Գ����ǣ���"<<endl;
			break;
		case 5:
			cout <<"������"<<endl;
			cout <<"������ǣ�����"<<endl<< "���Գ����ǣ�ʯͷ"<<endl;
			break;
		case 9:
			cout <<"������"<<endl;
			cout <<"������ǣ�ʯͷ"<<endl<< "���Գ����ǣ���"<<endl;
			break;
		case 10:
			cout <<"������"<<endl;
			cout <<"������ǣ���"<<endl<< "���Գ����ǣ�����"<<endl;
			break;
		case 6:
			cout <<"��Ӯ��"<<endl;
			cout <<"������ǣ�����"<<endl<< "���Գ����ǣ���"<<endl;
			break;
		case 7:
			cout <<"��Ӯ��"<<endl;
			cout <<"������ǣ�ʯͷ"<<endl<< "���Գ����ǣ�����"<<endl;
			break;
		case 11:
			cout <<"��Ӯ��"<<endl;
			cout <<"������ǣ���"<<endl<< "���Գ����ǣ�ʯͷ"<<endl;
			break;
		default:
			break;
		}
	}

private:
	map<string,int> _gamerselections;
	map<string,int> _computerselections;
	int _gamerchoice;
	int _computerchoice;
};
