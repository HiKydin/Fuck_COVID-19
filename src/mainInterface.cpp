#include "initdata.h"

void adminusing()
{
	string ops;
	cout << "��ѡ�����Ĳ���:" << endl;
	cin >> ops;
	while (ops != "4")
	{
		if (ops != "1" && ops != "2" && ops != "3")
		{
			cout << "����������������룡��" << endl;
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
					cout << "ѡ��1" << endl;
					break;
				case 2:
					cout << "ѡ��2" << endl;
					break;
				case 3:
					cout << "ѡ��3" << endl;
					break;
				}
				cout << endl << "��ѡ�����Ĳ���:" << endl;
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
	cout <<"��ѡ�����Ĳ���:" << endl;
	cin >> ops;
	while(ops != "4")
	{
		if (ops != "1" && ops != "2" && ops != "3")
		{
			cout << "����������������룡��" << endl;
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
					cout << "ѡ��1" << endl;
					break;
				case 2:
					cout << "ѡ��2" << endl;
					break;
				case 3:
					cout << "ѡ��3" << endl;
					cout << "���������Ա�˺�:" << endl;
					cin >> tmpname;
					cout << "���������Ա����:" << endl;
					cin >> tmppwd;
					Checklogin(tmpname,tmppwd);
					adminusing();
					break;
				}
				cout <<endl<< "��ѡ�����Ĳ���:" << endl;
				cin >> ops;
			}
		}
	}
}