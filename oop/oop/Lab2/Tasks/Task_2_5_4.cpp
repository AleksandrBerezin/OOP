#include <iostream>
#include "Structures.h"
#include "Rectangle.h"

using namespace std;

void Exchange(Rectangle& rectangle1, Rectangle& rectangle2)
{
	int tempLength = rectangle1.Length;
	rectangle1.Length = rectangle2.Length;
	rectangle2.Length = tempLength;

	int tempWidth = rectangle1.Width;
	rectangle1.Width = rectangle2.Width;
	rectangle2.Width = tempWidth;

	string tempColor = rectangle1.Color;
	rectangle1.Color = rectangle2.Color;
	rectangle2.Color = tempColor;
}

static void DemoRectangle()
{
	Rectangle rectangle1;
	Rectangle rectangle2;

	rectangle1.Length = 25;
	rectangle1.Width = 17;
	rectangle1.Color = "red";

	rectangle2.Length = 53;
	rectangle2.Width = 27;
	rectangle2.Color = "yellow";

	cout << endl << "Variable values before exchange:";
	WriteRectangle(rectangle1);
	WriteRectangle(rectangle2);

	Exchange(rectangle1, rectangle2);

	cout << endl << "Variable values after exchange:";
	WriteRectangle(rectangle1);
	WriteRectangle(rectangle2);
}

void Task_2_5_4()
{
	DemoRectangle();
}