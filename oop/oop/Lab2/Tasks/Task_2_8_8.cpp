#include <iostream>
#include "Enums.h"
#include "Color.h"

using namespace std;

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

void Task_2_8_8()
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
	cout << "The number of color in the array: " 
		<< CountColor(colors, count, findedColor) << "." << endl;
}