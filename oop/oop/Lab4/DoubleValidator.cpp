#pragma once
#include "DoubleValidator.h"
#include <exception>

using namespace std;

bool DoubleValidator::IsValuePositive(double value)
{
	return value > 0;
}

bool DoubleValidator::IsValueInRange(double value, double min, double max)
{
	return (value >= min) && (value <= max);
}

void DoubleValidator::AssertPositiveValue(double value)
{
	if (!IsValuePositive(value))
	{
		throw exception("Значение должно быть положительным.");
	}
}

void DoubleValidator::AssertValueInRange(double value, double min, double max)
{
	if (!IsValueInRange(value, min, max))
	{
		throw exception("Значение не попадает в диапазон.");
	}
}