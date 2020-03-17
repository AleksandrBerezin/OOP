#include <iostream>
#include "Enums.h"
#include "Color.h"

using namespace std;

int CountRed(Color* colors, int count)
{
	// TODO: код дублируется с функцией CountColor из следующего задания. Избавься от дублирования (да, я знаю, такого не было в задании)
	int countRed = 0;

	for (int i = 0; i < count; i++)
	{
		if (colors[i] == Red)
		{
			countRed++;
		}
	}

	return countRed;
}

void Task_2_8_7()
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

	cout << endl << "The number of red colors in the array: " << CountRed(colors, count) 
		<< "." << endl;
}