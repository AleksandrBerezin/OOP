#pragma once
#include "Point.h"

struct Rectangle
{
	double Length;
	double Width;
	Point* Center;
};

Rectangle* MakeRectangle(double length, double width, Point* center);
void SetLength(Rectangle& rectangle, double length);
void SetWidth(Rectangle& rectangle, double width);
void SetCenter(Rectangle& rectangle, Point* center);
void DemoRectangleWithPoint();