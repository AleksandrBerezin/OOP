#pragma once

struct Point
{
	double X;
	double Y;
};

Point* MakePoint(double x, double y);
void SetX(Point& point, double x);
void SetY(Point& point, double y);