#pragma once
#include "Point.h"

class Rectangle
{
private:
	double _length;
	double _width;
	Point* _center;

	void SetCenter(double x, double y);

public:
	double GetLength();
	double GetWidth();
	Point* GetCenter();

	void SetLength(double length);
	void SetWidth(double width);

	Rectangle(double length, double width, double x, double y);
	~Rectangle();
};