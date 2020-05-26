#pragma once
#include <iostream>
#include "Ring.h"
#include "DoubleValidator.h"

using namespace std;

int Ring::AllRingsCount = 0;

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
	DoubleValidator::AssertPositiveValue(outsideRadius);
	DoubleValidator::AssertPositiveValue(insideRadius);
	DoubleValidator::AssertValueInRange(outsideRadius, insideRadius, insideRadius
		+ outsideRadius);
	
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