#include <iostream>
#include <Windows.h>
#include "Common/Menus.h"
#include "Common/CommonLibrary.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	bool isExit = false;

	while (!isExit)
	{
		cout << endl;
		cout << "Select number of laboratory work:" << endl
			<< "1) Laboratory work 1;" << endl
			<< "2) Laboratory work 2;" << endl
			<< "3) Laboratory work 3;" << endl
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
				MenuLab3();
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