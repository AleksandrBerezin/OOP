#pragma once
#include <iostream>
#include "Ring.h"

using namespace std;

void Ring::AssertOnPositiveValue(double value)
{
	if (value <= 0)
	{
		throw exception("Радиус должны быть положительными.");
	}
}

double Ring::GetOutsideRadius()
{
	return this->_outsideRadius;
}

double Ring::GetInsideRadius()
{
	return this->_insideRadius;
}

Point* Ring::GetCenter()
{
	return this->_center;
}

void Ring::SetRadiuses(double outsideRadius, double insideRadius)
{
	AssertOnPositiveValue(outsideRadius);
	AssertOnPositiveValue(insideRadius);

	if (outsideRadius < insideRadius)
	{
		throw exception("Внешний радиус не может быть меньше внутреннего.");
	}
	this->_outsideRadius = outsideRadius;
	this->_insideRadius = insideRadius;
}

void Ring::SetCenter(Point* center)
{
	this->_center = center;
}

Ring::Ring(double outsideRadius, double insideRadius, Point* center)
{
	SetRadiuses(outsideRadius, insideRadius);
	SetCenter(center);
}

Ring::~Ring()
{
	delete _center;
}

double Ring::GetArea()
{
	return PI * (_outsideRadius * _outsideRadius - _insideRadius * _insideRadius);
}

void DemoRing()
{
	Ring ring1(2.1, 1.2, new Point(3, 4));
	Ring ring2(3.1, 0.2, new Point(4, 3));
	Ring ring3(1.7, 1.3, new Point(5, 4));

	cout << endl << "Площадь круга 1 равна " << ring1.GetArea() << endl;
	cout << "Площадь круга 2 равна " << ring2.GetArea() << endl;
	cout << "Площадь круга 3 равна " << ring3.GetArea() << endl << endl;
	
	try
	{
		Ring wrongRing1(-2.1, 1.2, new Point(3, 4));
	}
	catch (exception e)
	{
		cout << e.what() << endl;
	}

	try
	{
		Ring wrongRing2(2.1, -1.2, new Point(3, 4));
	}
	catch (exception e)
	{
		cout << e.what() << endl;
	}

	try
	{
		Ring wrongRing3(1.2, 2.1, new Point(3, 4));
	}
	catch (exception e)
	{
		cout << e.what() << endl;
	}
}