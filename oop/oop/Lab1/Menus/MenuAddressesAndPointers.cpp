#include <iostream>
#include "../../Common/CommonLibrary.h"
#include "../Tasks/TasksLab1.h"

using namespace std;

void MenuAddressesAndPointers()
{
	bool isBack = false;

	while (!isBack)
	{
		cout << endl;
		cout << "Select task:" << endl
			<< "1) Task 4.1;" << endl
			<< "2) Task 4.2;" << endl
			<< "3) Task 4.3;" << endl
			<< "4) Task 4.4;" << endl
			<< "5) Task 4.5;" << endl
			<< "6) Task 4.6;" << endl
			<< "7) Task 4.8;" << endl
			<< "0) Back." << endl;
		cout << endl;

		switch (InputInt())
		{
			case 1:
			{
				Task_1_4_1();
				break;
			}
			case 2:
			{
				Task_1_4_2();
				break;
			}
			case 3:
			{
				Task_1_4_3();
				break;
			}
			case 4:
			{
				Task_1_4_4();
				break;
			}
			case 5:
			{
				Task_1_4_5();
				break;
			}
			case 6:
			{
				Task_1_4_6();
				break;
			}
			case 7:
			{
				Task_1_4_8();
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