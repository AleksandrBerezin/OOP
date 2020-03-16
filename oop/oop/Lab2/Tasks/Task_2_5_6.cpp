#include <iostream>
#include "Structures.h"

using namespace std;

// Поиск прямоугольника с наибольшей площадью
void FindMaxRectangle(Rectangle* rectangles, int count)
{
	int maxSquare = 0;
	int index = 0;

	for (int i = 0; i < count; i++)
	{
		int square = rectangles[i].Length * rectangles[i].Width;

		if (square > maxSquare)
		{
			maxSquare = square;
			index = i;
		}
	}

	cout << endl << "The rectangle with max square has a size: " << rectangles[index].Length
		<< " x " << rectangles[index].Width << ". The square of the rectangle is "
		<< maxSquare << "." << endl;
}

static void DemoRectangle()
{
	Rectangle rectangles[3];

	rectangles[0].Length = 25;
	rectangles[0].Width = 17;
	rectangles[0].Color = "red";

	rectangles[1].Length = 53;
	rectangles[1].Width = 27;
	rectangles[1].Color = "yellow";

	rectangles[2].Length = 28;
	rectangles[2].Width = 7;
	rectangles[2].Color = "blue";

	FindMaxRectangle(rectangles, 3);
}

void Task_2_5_6()
{
	DemoRectangle();
}