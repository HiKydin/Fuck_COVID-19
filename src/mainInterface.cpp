#include "initdata.h"

void adminusing()
{
	string ops;
	cout << "请选择您的操作:" << endl;
	cin >> ops;
	while (ops != "4")
	{
		if (ops != "1" && ops != "2" && ops != "3")
		{
			cout << "输入错误！请重新输入！！" << endl;
			cin >> ops;
		}
		else
		{
			if (ops == "1" || ops == "2" || ops == "3")
			{
				int num;
				stringstream stre;
				stre << ops;
				stre >> num;
				string tmpname;
				string tmppwd;
				switch (num)
				{
				case 1:
					cout << "选择1" << endl;
					break;
				case 2:
					cout << "选择2" << endl;
					break;
				case 3:
					cout << "选择3" << endl;
					break;
				}
				cout << endl << "请选择您的操作:" << endl;
				cin >> ops;
			}
		}
	}
	system("cls");
	cout << welcomInfo << endl;
	cout << menuPrompts[0] << endl;
}

void mainInterface()
{
	cout << welcomInfo << endl;
	cout << menuPrompts[0] << endl;
	string ops;
	cout <<"请选择您的操作:" << endl;
	cin >> ops;
	while(ops != "4")
	{
		if (ops != "1" && ops != "2" && ops != "3")
		{
			cout << "输入错误！请重新输入！！" << endl;
			cin >> ops;
		}
		else
		{
			if(ops == "1" || ops == "2" || ops == "3")
			{
				int num;
				stringstream stre;
				stre << ops;
				stre >> num;
				string tmpname;
				string tmppwd;
				switch (num)
				{
				case 1:
					cout << "选择1" << endl;
					break;
				case 2:
					cout << "选择2" << endl;
					break;
				case 3:
					cout << "选择3" << endl;
					cout << "请输入管理员账号:" << endl;
					cin >> tmpname;
					cout << "请输入管理员密码:" << endl;
					cin >> tmppwd;
					Checklogin(tmpname,tmppwd);
					adminusing();
					break;
				}
				cout <<endl<< "请选择您的操作:" << endl;
				cin >> ops;
			}
		}
	}
}