#include <iostream>
#include "Enums.h"
#include "Color.h"
#include "../../Common/CommonLibrary.h"

using namespace std;

Color ReadColor()
{
	cout << endl << "Enter number from 0 to 6 (0 - red, 1 - orange, 2 - yellow,"
		<< " 3 - green, 4 - blue, 5 - dark blue, 6 - violet):" << endl;
	cout << "> ";

	switch (InputInt())
	{
		case 0:
		{
			return Red;
		}
		case 1:
		{
			return Orange;
		}
		case 2:
		{
			return Yellow;
		}
		case 3:
		{
			return Green;
		}
		case 4:
		{
			return Blue;
		}
		case 5:
		{
			return DarkBlue;
		}
		case 6:
		{
			return Violet;
		}
	}
}

void Task_2_8_6()
{
	cout << endl << "ReadColor function example:" << endl;
	Color color = ReadColor();
	WriteColor(color);
}