﻿#include <iostream>
#include "Rectangle.h"

using namespace std;

void DemoRectangle_2_3_2()
{
	Rectangle rectangle;

	rectangle.Length = 25;
	rectangle.Width = 17;
	rectangle.Color = "red";

	Rectangle rectangle2;

	ReadRectangle(rectangle2);
	WriteRectangle(rectangle2);
}

void DemoRectangle_2_3_3()
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

	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "The rectangle " << i + 1 << " size: " << rectangles[i].Length
			<< " x " << rectangles[i].Width << ". The rectangle color is " << rectangles[i].Color
			<< "." << endl;
	}
}

void DemoRectangle_2_4_1()
{
	Rectangle rectangle;

	rectangle.Length = 25;
	rectangle.Width = 17;
	rectangle.Color = "red";

	Rectangle* pointer = &rectangle;
	WriteRectangle(rectangle);

	pointer->Length = 20;
	pointer->Width = 12;
	pointer->Color = "white";

	cout << "Values were changed via pointer.";
	WriteRectangle(rectangle);
}

void DemoRectangle_2_4_2()
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

void WriteRectangle(Rectangle& rectangle)
{
	cout << endl << "The rectangle size: " << rectangle.Length << " x " << rectangle.Width
		<< ". The rectangle color is " << rectangle.Color << "." << endl;
}

void ReadRectangle(Rectangle& rectangle)
{
	cout << endl << "Enter rectangle length (positive number):" << endl << "> ";
	cin >> rectangle.Length;
	cout << "Enter rectangle width (positive number):" << endl << "> ";
	cin >> rectangle.Width;
	cout << "Enter rectangle color:" << endl << "> ";
	cin >> rectangle.Color;
}

void DemoReadAndWriteRectangles_2_5_3()
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

void DemoRectangle_2_5_4()
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

Rectangle* FindRectangle(Rectangle* rectangles, int count)
{// TODO: переделай, чтобы функция возвращала указатель на найденный прямоугольник, а вывод на экран производился в DemoRectangle() (Done)
	int maxLength = 0;
	int index = 0;

	for (int i = 0; i < count; i++)
	{
		if (rectangles[i].Length > maxLength)
		{
			maxLength = rectangles[i].Length;
			index = i;
		}
	}

	return &rectangles[index];
}

void DemoRectangle_2_5_5()
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

	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "The rectangle " << i + 1 << " size: " << rectangles[i].Length
			<< " x " << rectangles[i].Width << ". The rectangle color is " << rectangles[i].Color
			<< "." << endl;
	}

	Rectangle* findedRectangle = FindRectangle(rectangles, 3);

	cout << endl << "The rectangle with max length has a size: " << findedRectangle->Length
		<< " x " << findedRectangle->Width << "." << endl;
}

Rectangle* FindMaxRectangle(Rectangle* rectangles, int count)
{
	// TODO: также сделать через возвращение указателя на найденный объект (Done)
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

	return &rectangles[index];
}

void DemoRectangle_2_5_6()
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

	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "The rectangle " << i + 1 << " size: " << rectangles[i].Length
			<< " x " << rectangles[i].Width << ". The rectangle color is " << rectangles[i].Color
			<< "." << endl;
	}

	Rectangle* maxRectangle = FindMaxRectangle(rectangles, 3);

	cout << endl << "The rectangle with max square has a size: " << maxRectangle->Length
		<< " x " << maxRectangle->Width << ". The square of the rectangle is "
		<< maxRectangle->Length * maxRectangle->Width << "." << endl;
}

Rectangle* MakeRectangle(int length, int width, string color)
{
	Rectangle* rectangle = new Rectangle();
	rectangle->Length = length;
	rectangle->Width = width;
	rectangle->Color = color;

	return rectangle;
}

void DemoRectangle_2_7_2()
{
	cout << endl << "Verifying that constructor function are working correctly."
		<< endl << endl;

	Rectangle* rectangle = MakeRectangle(25, 17, "red");
	cout << "The rectangle size: " << rectangle->Length << " x " << rectangle->Width
		<< ". The rectangle color is " << rectangle->Color << "." << endl;
}

Rectangle* CopyRectangle(Rectangle& rectangle)
{
	Rectangle* copiedRectangle = new Rectangle();
	copiedRectangle->Length = rectangle.Length;
	copiedRectangle->Width = rectangle.Width;
	copiedRectangle->Color = rectangle.Color;

	return copiedRectangle;
}

void DemoRectangle_2_7_3()
{
	cout << endl << "Verifying that copy function are working correctly."
		<< endl << endl;

	cout << "Data before copying:" << endl << endl;

	Rectangle rectangle;
	rectangle.Length = 25;
	rectangle.Width = 17;
	rectangle.Color = "red";

	cout << "The rectangle size: " << rectangle.Length << " x " << rectangle.Width
		<< ". The rectangle color is " << rectangle.Color << "." << endl;

	cout << endl << "Data after copying:" << endl << endl;

	Rectangle* rectangle2 = CopyRectangle(rectangle);
	cout << "The rectangle size: " << rectangle2->Length << " x " << rectangle2->Width
		<< ". The rectangle color is " << rectangle2->Color << "." << endl;

	delete rectangle2;
}