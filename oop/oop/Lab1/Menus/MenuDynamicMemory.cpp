#include <iostream>
#include "../../Common/CommonLibrary.h"
#include "../Tasks/Tasks.h"

using namespace std;

void MenuDynamicMemory()
{
	bool isBack = false;

	while (!isBack)
	{
		cout << endl;
		cout << "Select task:" << endl
			<< "1) Task 5.1;" << endl
			<< "2) Task 5.2;" << endl
			<< "3) Task 5.3;" << endl
			<< "4) Task 5.4;" << endl
			<< "5) Task 5.5;" << endl
			<< "6) Task 5.6;" << endl
			<< "7) Task 5.7;" << endl
			<< "8) Task 5.8;" << endl
			<< "0) Back." << endl;
		cout << endl;

		switch (InputInt())
		{
			case 1:
			{
				Task_5_1();
				break;
			}
			case 2:
			{
				Task_5_2();
				break;
			}
			case 3:
			{
				Task_5_3();
				break;
			}
			case 4:
			{
				Task_5_4();
				break;
			}
			case 5:
			{
				Task_5_5();
				break;
			}
			case 6:
			{
				Task_5_6();
				break;
			}
			case 7:
			{
				Task_5_7();
				break;
			}
			case 8:
			{
				Task_5_8();
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