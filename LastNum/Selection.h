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
			_gamerselections.insert(pair<string,int>("剪刀",4));
			_gamerselections.insert(pair<string,int>("石头",7));
			_gamerselections.insert(pair<string,int>("布",10));
		}
		else if("computer" == selector)
		{
			_computerselections.insert(pair<string,int>("剪刀",0));
			_computerselections.insert(pair<string,int>("石头",1));
			_computerselections.insert(pair<string,int>("布",2));
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
			cout <<"无相应选项"<<endl;
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
			cout <<"平局"<<endl;
			cout <<"你出的是：剪刀"<<endl<< "电脑出的是：剪刀"<<endl;
			break;
		case 8:
			cout <<"平局"<<endl;
			cout <<"你出的是：石头"<<endl<< "电脑出的是：石头"<<endl;
			break;
		case 12:
			cout <<"平局"<<endl;
			cout <<"你出的是：布"<<endl<< "电脑出的是：布"<<endl;
			break;
		case 5:
			cout <<"你输了"<<endl;
			cout <<"你出的是：剪刀"<<endl<< "电脑出的是：石头"<<endl;
			break;
		case 9:
			cout <<"你输了"<<endl;
			cout <<"你出的是：石头"<<endl<< "电脑出的是：布"<<endl;
			break;
		case 10:
			cout <<"你输了"<<endl;
			cout <<"你出的是：布"<<endl<< "电脑出的是：剪刀"<<endl;
			break;
		case 6:
			cout <<"你赢了"<<endl;
			cout <<"你出的是：剪刀"<<endl<< "电脑出的是：布"<<endl;
			break;
		case 7:
			cout <<"你赢了"<<endl;
			cout <<"你出的是：石头"<<endl<< "电脑出的是：剪刀"<<endl;
			break;
		case 11:
			cout <<"你赢了"<<endl;
			cout <<"你出的是：布"<<endl<< "电脑出的是：石头"<<endl;
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
