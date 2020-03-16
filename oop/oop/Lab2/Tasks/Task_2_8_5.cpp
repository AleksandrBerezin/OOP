#include <iostream>
#include "Enums.h"

using namespace std;

void WriteColor(Color color)
{
	switch (color)
	{
		case Red:
		{
			cout << "Red color" << endl;
			break;
		}
		case Orange:
		{
			cout << "Orange color" << endl;
			break;
		}
		case Yellow:
		{
			cout << "Yellow color" << endl;
			break;
		}
		case Green:
		{
			cout << "Green color" << endl;
			break;
		}
		case Blue:
		{
			cout << "Blue color" << endl;
			break;
		}
		case DarkBlue:
		{
			cout << "Dark blue color" << endl;
			break;
		}
		case Violet:
		{
			cout << "Violet color" << endl;
			break;
		}
	}
}

void Task_2_8_5()
{
	cout << endl << "WriteColor function example:" << endl << endl;
	WriteColor(Red);
	WriteColor(DarkBlue);
	WriteColor(Yellow);
}