#pragma once
#include <iostream>
#include "Ring.h"

using namespace std;

int Ring::AllRingsCount = 0;

void Ring::AssertOnPositiveValue(double value)
{
	if (value <= 0)
	{
		throw exception("Радиус должны быть положительными.");
	}
}

int Ring::GetAllRingsCount()
{
	return AllRingsCount;
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
	AllRingsCount++;
}

Ring::~Ring()
{
	delete _center;
	AllRingsCount--;
}

double Ring::GetArea()
{
	return PI * (_outsideRadius * _outsideRadius - _insideRadius * _insideRadius);
}

void DemoRing()
{
	Ring ring1(2.1, 1.2, new Point(3, 4));
	cout << "Общее количество колец равно " << Ring::GetAllRingsCount() << endl;
	Ring ring2(3.1, 0.2, new Point(4, 3));
	cout << "Общее количество колец равно " << Ring::GetAllRingsCount() << endl;
	Ring ring3(1.7, 1.3, new Point(5, 4));
	cout << "Общее количество колец равно " << Ring::GetAllRingsCount() << endl;

	cout << endl << "Площадь кольца 1 равна " << ring1.GetArea() << endl;
	cout << "Площадь кольца 2 равна " << ring2.GetArea() << endl;
	cout << "Площадь кольца 3 равна " << ring3.GetArea() << endl << endl;
	
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

	cout << endl << "Количество колец до вызова конструктора: " << Ring::GetAllRingsCount() << endl;

	Ring* ring = new Ring(10.0, 5.0, new Point(25.0, 25.0));
	cout << "Количество колец после вызова конструктора: " << Ring::GetAllRingsCount() << endl;

	delete ring;
	cout << "Количество колец после вызова деструктора: " << Ring::GetAllRingsCount() << endl;
}