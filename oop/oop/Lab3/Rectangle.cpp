#pragma once
#include <iostream>
#include "Rectangle.h"
#include "Point.h"
#include "../Lab4/DoubleValidator.h"

using namespace std;

double Rectangle::GetLength()
{
	return this->_length;
}

double Rectangle::GetWidth()
{
	return this->_width;
}

Point* Rectangle::GetCenter()
{
	return this->_center;
}

void Rectangle::SetLength(double length)
{
	DoubleValidator::AssertPositiveValue(length);
	this->_length = length;
}

void Rectangle::SetWidth(double width)
{
	DoubleValidator::AssertPositiveValue(width);
	this->_width = width;
}

void Rectangle::SetCenter(Point* center)
{
	this->_center = center;
}

Rectangle::Rectangle(double length, double width, Point* center)
{
	this->SetLength(length);
	this->SetWidth(width);
	this->SetCenter(center);
}

Rectangle::~Rectangle()
{
	delete _center;
}