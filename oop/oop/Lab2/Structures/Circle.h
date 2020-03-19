#pragma once
#include <string>

using std::string;

using namespace std; struct Circle
{
	double X;			// X-координата центра круга
	double Y;			// Y-координата центра круга
	double Radius;
	string Color;
};

Circle* MakeCircle(double x, double y, double radius, string color);
Circle* CopyCircle(Circle& circle);
void DemoCircle();