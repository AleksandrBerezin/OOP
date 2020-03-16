#include <iostream>
#include "Structures.h"
#include "Rectangle.h"

using namespace std;

void WriteRectangle(Rectangle& rectangle)
{
	cout << endl << "The rectangle size: " << rectangle.Length << " x " << rectangle.Width
		<< ". The rectangle color is " << rectangle.Color << "." << endl;
}

void ReadRectangle(Rectangle& rectangle)
{
	cout << endl;
	cout << "Enter rectangle length: ";
	cin >> rectangle.Length;
	cout << "Enter rectangle width: ";
	cin >> rectangle.Width;
	cout << "Enter rectangle color: ";
	cin >> rectangle.Color;
}

void DemoReadAndWriteRectangles()
{
	const int arraySize = 5;
	Rectangle rectangles[arraySize];

	for (int i = 0; i < arraySize; i++)
	{
		ReadRectangle(rectangles[i]);
	}

	for (int i = 0; i < arraySize; i++)
	{
		WriteRectangle(rectangles[i]);
	}
}

void Task_2_5_3()
{
	DemoReadAndWriteRectangles();
}