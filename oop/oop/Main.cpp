#include <iostream>
#include "Common/Menus.h"
#include "Common/CommonLibrary.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	bool isExit = false;

	while (!isExit)
	{
		cout << endl;
		cout << "Select number of laboratory work:" << endl
			<< "1) Laboratory work 1;" << endl
			<< "2) Laboratory work 2;" << endl
			<< "3) Work in progress..." << endl
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
				MenuLab2();
				break;
			}
			case 3:
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