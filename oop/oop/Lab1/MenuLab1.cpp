#include <iostream>
#include "../Common/CommonLibrary.h"
#include "Menus/MenusLab1.h"

using namespace std;

void MenuLab1()
{
	bool isBack = false;

	while (!isBack)
	{
		cout << endl;
		cout << "Select topic:" << endl
			<< "1) Algoritms and debugging;" << endl
			<< "2) Arrays;" << endl
			<< "3) Functions;" << endl
			<< "4) Addresses and pointers;" << endl
			<< "5) Dynamic memory;" << endl
			<< "0) Back." << endl;
		cout << endl;

		switch (InputInt())
		{
			case 1:
			{
				MenuAlgoritmsAndDebugging();
				break;
			}
			case 2:
			{
				MenuArrays();
				break;
			}
			case 3:
			{
				MenuFunctions();
				break;
			}
			case 4:
			{
				MenuAddressesAndPointers();
				break;
			}
			case 5:
			{
				MenuDynamicMemory();
				break;
			}
			case 0:
			{
				isBack = true;
				break;
			}
			default:
			{
				cout << "Wrong option selected, try again." << endl;
				break;
			}
		}
	}
}