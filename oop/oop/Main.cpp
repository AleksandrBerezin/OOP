#include <iostream>
#include "Tasks.h"
#include "Menus.h"
//TODO: название решения заглавными буквами - это аббревиатура

using namespace std;

int InputInt();

int main()
{
	//TODO: куча инклюдов, чтобы запустить одну задачу...
	bool isExit = false;

	while (!isExit)
	{
		cout << endl;
		cout << "Select number of laboratory work:" << endl
			<< "1) Laboratory work 1;" << endl
			<< "2) Work in progress..." << endl
			<< "0) Exit." << endl;
		cout << endl;

		switch (InputInt())
		{
			case 1:
			{
				MenuLab1();
				break;
			}
			case 2:
			{
				cout << "Work in progress... Please choose other option." << endl;
				break;
			}
			case 0:
			{
				isExit = true;
				break;
			}
			default:
			{
				cout << "Wrong option selected, try again." << endl;
				break;
			}
		}
	}

	return 0;
}