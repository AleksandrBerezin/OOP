#include <iostream>
#include "CommonLibrary.h"
#include "Tasks.h"

using namespace std;

void MenuFunctions()
{
	bool isBack = false;

	while (!isBack)
	{
		cout << endl;
		cout << "Select option:" << endl
			<< "1) Task 3.3;" << endl
			<< "2) Task 3.4;" << endl
			<< "0) Back." << endl;
		cout << endl;

		switch (InputInt())
		{
			case 1:
			{
				Task_3_3();
				break;
			}
			case 2:
			{
				Task_3_4();
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

	return;
}