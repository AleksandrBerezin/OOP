#include <iostream>
#include "CommonLibrary.h"
#include "Tasks.h"

using namespace std;

void MenuArrays()
{
	bool isBack = false;

	while (!isBack)
	{
		cout << endl;
		cout << "Select task:" << endl
			<< "1) Task 2.1;" << endl
			<< "2) Task 2.2;" << endl
			<< "3) Task 2.3;" << endl
			<< "0) Back." << endl;
		cout << endl;

		switch (InputInt())
		{
			case 1:
			{
				Task_2_1();
				break;
			}
			case 2:
			{
				Task_2_2();
				break;
			}
			case 3:
			{
				Task_2_3();
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