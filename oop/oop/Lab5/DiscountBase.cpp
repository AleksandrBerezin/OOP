#pragma once
#include <iostream>
#include <iomanip>
#include "DiscountBase.h"

using namespace std;

void DiscountBase::SetCategory(CategoryType category)
{
	_category = category;
}

CategoryType DiscountBase::GetCategory()
{
	return _category;
}

DiscountBase::DiscountBase(CategoryType category)
{
	SetCategory(category);
}

void ShowCheckWithDiscount(DiscountBase* discount, Product* products, int productsCount)
{
	double fullCost = 0;

	for (int i = 0; i < productsCount; i++)
	{
		cout << left << setw(35) << products[i].GetName();
		cout << "Old Cost: " << products[i].GetCost() << "\tNew Cost: ";
		double newCost = discount->Calculate(&products[i]);
		cout << newCost << endl;
		fullCost += newCost;
	}

	cout << "Full Cost with Discount: " << fullCost << endl;
}