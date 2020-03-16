#include <iostream>
#include "../../Common/CommonLibrary.h"
#include "../Tasks/TasksLab1.h"

using namespace std;

void MenuAlgoritmsAndDebugging()
{
	bool isBack = false;

	while (!isBack)
	{
		cout << endl;
		cout << "Select option:" << endl
			<< "1) Task 1.1;" << endl
			<< "2) Task 1.2;" << endl
			<< "0) Back." << endl;
		cout << endl;

		switch (InputInt())
		{
			case 1:
			{
				Task_1_1_1();
				break;
			}
			case 2:
			{
				Task_1_1_2();
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