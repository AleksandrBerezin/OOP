#pragma once
#include <iostream>
#include "Rectangle.h"
#include "Point.h"

using namespace std;

Rectangle* MakeRectangle(double length, double width, Point* center)
{
	Rectangle* rectangle = new Rectangle();
	SetLength(*rectangle, length);
	SetWidth(*rectangle, width);
	SetCenter(*rectangle, center);
	return rectangle;
}

void SetLength(Rectangle& rectangle, double length)
{
	if (length <= 0)
	{
		throw exception("Длина должна быть положительной.");
	}
	rectangle.Length = length;
}

void SetWidth(Rectangle& rectangle, double width)
{
	if (width <= 0)
	{
		throw exception("Ширина должна быть положительной.");
	}
	rectangle.Width = width;
}

void SetCenter(Rectangle& rectangle, Point* center)
{
	rectangle.Center = center;
}

void DemoRectangleWithPoint()
{
	const int rectanglesCount = 5;

	Rectangle rectangles[rectanglesCount];
	rectangles[0] = *MakeRectangle(25.4, 1.1, MakePoint(5.0, 10.7));
	rectangles[1] = *MakeRectangle(50.0, 7.3, MakePoint(12.0, -10.7));
	rectangles[2] = *MakeRectangle(4.7, 43.6, MakePoint(-7.0, 16.2));
	rectangles[3] = *MakeRectangle(9.2, 23.9, MakePoint(4.0, 4.1));
	rectangles[4] = *MakeRectangle(17.9, 38.0, MakePoint(-3.0, -2.1));

	cout << endl;

	for (int i = 0; i < rectanglesCount; i++)
	{
		cout << "X = " << rectangles[i].Center->X
			<< ";		Y = " << rectangles[i].Center->Y
			<< ";	Length = " << rectangles[i].Length
			<< ";		Width = " << rectangles[i].Width
			<< endl;
	}

	double averageX = 0.0;
	double averageY = 0.0;

	for (int i = 0; i < rectanglesCount; i++)
	{
		averageX += rectangles[i].Center->X;
		averageY += rectangles[i].Center->Y;
	}

	averageX /= rectanglesCount;
	averageY /= rectanglesCount;

	cout << endl << "Cреднее значение всех центров прямоугольников: Xcenter = "
		<< averageX << "; Ycenter = " << averageY << endl;
}