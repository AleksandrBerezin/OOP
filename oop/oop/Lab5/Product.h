#pragma once
#include <string>
#include "CategoryType.h"

using std::string;

class Product
{
	string _name;
	CategoryType _category;
	double _cost;

public:
	string GetName();
	CategoryType GetCategory();
	double GetCost();

	void SetName(string name);
	void SetCategory(CategoryType category);
	void SetCost(double cost);

	Product(string name, CategoryType category, double cost);
};