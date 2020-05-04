#pragma once
#include <iostream>
#include "Rectangle.h"
#include "Point.h"

using namespace std;

double Rectangle::GetLength()
{
	return this->_length;
}

double Rectangle::GetWidth()
{
	return this->_width;
}

Point* Rectangle::GetCenter()
{
	return this->_center;
}

void Rectangle::SetLength(double length)
{
	if (length <= 0)
	{
		throw exception("Длина должна быть положительной.");
	}
	this->_length = length;
}

void Rectangle::SetWidth(double width)
{
	if (width <= 0)
	{
		throw exception("Ширина должна быть положительной.");
	}
	this->_width = width;
}

void Rectangle::SetCenter(Point* center)
{
	this->_center = center;
}

Rectangle::Rectangle(double length, double width, Point* center)
{
	this->SetLength(length);
	this->SetWidth(width);
	this->SetCenter(center);
}

Rectangle::~Rectangle()
{
	delete[] _center;
}

void DemoRectangleWithPoint()
{
	const int rectanglesCount = 5;

	Rectangle* rectangles[rectanglesCount];
	rectangles[0] = new Rectangle(25.4, 1.1, new Point(5.0, 10.7));
	rectangles[1] = new Rectangle(50.0, 7.3, new Point(12.0, -10.7));
	rectangles[2] = new Rectangle(4.7, 43.6, new Point(-7.0, 16.2));
	rectangles[3] = new Rectangle(9.2, 23.9, new Point(4.0, 4.1));
	rectangles[4] = new Rectangle(17.9, 38.0, new Point(-3.0, -2.1));

	cout << endl;

	for (int i = 0; i < rectanglesCount; i++)
	{
		cout << "X = " << rectangles[i]->GetCenter()->GetX()
			<< ";		Y = " << rectangles[i]->GetCenter()->GetY()
			<< ";	Length = " << rectangles[i]->GetLength()
			<< ";		Width = " << rectangles[i]->GetWidth()
			<< endl;
	}

	double averageX = 0.0;
	double averageY = 0.0;

	for (int i = 0; i < rectanglesCount; i++)
	{
		averageX += rectangles[i]->GetCenter()->GetX();
		averageY += rectangles[i]->GetCenter()->GetY();
	}

	averageX /= rectanglesCount;
	averageY /= rectanglesCount;

	cout << endl << "Cреднее значение всех центров прямоугольников: Xcenter = "
		<< averageX << "; Ycenter = " << averageY << endl;
}