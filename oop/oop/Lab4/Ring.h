#pragma once
#include "../Lab3/Point.h"

class Ring
{
private:
	const double PI = 3.14159;

	double _outsideRadius;
	double _insideRadius;
	Point* _center;

	void AssertOnPositiveValue(double value);

public:
	double GetOutsideRadius();
	double GetInsideRadius();
	Point* GetCenter();

	void SetRadiuses(double outsideRadius, double insideRadius);
	void SetCenter(Point* center);

	Ring(double outsideRadius, double insideRadius, Point* center);
	~Ring();

	double GetArea();
};

void DemoRing();