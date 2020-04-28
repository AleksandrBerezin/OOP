#pragma once
#include "Point.h"

class Rectangle
{
private:
	double _length;
	double _width;
	Point* _center;

public:
	double GetLength();
	double GetWidth();
	Point* GetCenter();

	void SetLength(double length);
	void SetWidth(double width);
	void SetCenter(Point* center);

	Rectangle(double length, double width, Point* center);
	~Rectangle();
};

void DemoRectangleWithPoint();