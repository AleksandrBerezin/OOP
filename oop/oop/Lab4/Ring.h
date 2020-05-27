#pragma once
#include "../Lab3/Point.h"

class Ring
{
private:
	const double PI = 3.14159;
	static int AllRingsCount;

	double _outsideRadius;
	double _insideRadius;
	Point* _center;

public:
	static int GetAllRingsCount();
	double GetOutsideRadius();
	double GetInsideRadius();
	Point* GetCenter();

	void SetRadiuses(double outsideRadius, double insideRadius);
	void SetCenter(double x, double y);

	Ring(double outsideRadius, double insideRadius, double x, double y);
	~Ring();

	double GetArea();
};