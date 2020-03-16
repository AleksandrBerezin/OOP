#include <iostream>
#include "Structures.h"

using namespace std;

static void DemoRectangle()
{
	Rectangle rectangle;

	rectangle.Length = 25;
	rectangle.Width = 17;
	rectangle.Color = "red";

	Rectangle* pointer = &rectangle;

	cout << endl << "The rectangle size: " << rectangle.Length << " x " << rectangle.Width
		<< ". The rectangle color is " << rectangle.Color<< "." << endl;

	pointer->Length = 20;
	pointer->Width = 12;
	pointer->Color = "white";
	
	cout << "Values were changed via pointer." << endl;

	cout << "The rectangle size: " << rectangle.Length << " x " << rectangle.Width
		<< ". The rectangle color is " << rectangle.Color << "." << endl << endl;
}

void Task_2_4_1()
{
	DemoRectangle();
}