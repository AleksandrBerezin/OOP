#include <iostream>
#include "Structures.h"

using namespace std;

static void DemoRectangle()
{
	Rectangle rectangle;

	rectangle.Length = 25;
	rectangle.Width = 17;
	rectangle.Color = "red";

	Rectangle* pointer1 = &rectangle;
	Rectangle* pointer2 = &rectangle;

	cout << endl << "Rectangle:" << endl;
	cout << "Address in first pointer: " << pointer1 << endl;
	cout << "Address in second pointer: " << pointer2 << endl;
}

void Task_2_4_2()
{
	DemoRectangle();
}