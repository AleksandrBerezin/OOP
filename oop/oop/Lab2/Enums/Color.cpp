#include <iostream>
#include "Color.h"
#include "../../Common/CommonLibrary.h"

using namespace std;

void DemoColor_2_8_4()
{
	Color color = Red;

	Color colors[6];
	colors[0] = Red;
	colors[1] = Orange;
	colors[2] = Yellow;
	colors[3] = Green;
	colors[4] = Blue;
	colors[5] = DarkBlue;
}

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

void DemoColor_2_8_5()
{
	cout << endl << "WriteColor function example:" << endl << endl;
	WriteColor(Red);
	WriteColor(DarkBlue);
	WriteColor(Yellow);
}

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

void DemoColor_2_8_6()
{
	cout << endl << "ReadColor function example:" << endl;
	Color color = ReadColor();
	WriteColor(color);
}

void DemoColor_2_8_7()
{
	const int count = 10;
	Color colors[count];

	colors[0] = Red;
	colors[1] = Orange;
	colors[2] = Yellow;
	colors[3] = Green;
	colors[4] = Red;
	colors[5] = Orange;
	colors[6] = DarkBlue;
	colors[7] = Blue;
	colors[8] = Yellow;
	colors[9] = Violet;

	cout << endl << "Current array:" << endl;

	for (int i = 0; i < count; i++)
	{
		WriteColor(colors[i]);
	}

	cout << endl << "The number of red colors in the array: " << CountColor(colors, count, Red)
		<< "." << endl;
}

int CountColor(Color* colors, int count, Color findedColor)
{
	int countColor = 0;

	for (int i = 0; i < count; i++)
	{
		if (colors[i] == findedColor)
		{
			countColor++;
		}
	}

	return countColor;
}

void DemoColor_2_8_8()
{
	const int count = 10;
	Color colors[count];

	colors[0] = Red;
	colors[1] = Orange;
	colors[2] = Yellow;
	colors[3] = Green;
	colors[4] = Red;
	colors[5] = Orange;
	colors[6] = DarkBlue;
	colors[7] = Blue;
	colors[8] = Yellow;
	colors[9] = Violet;

	cout << endl << "Current array:" << endl;

	for (int i = 0; i < count; i++)
	{
		WriteColor(colors[i]);
	}

	cout << endl << "Enter finded color:";
	Color findedColor = ReadColor();
	cout << "The number of color in the array: " << CountColor(colors, count, findedColor)
		<< "." << endl;
}