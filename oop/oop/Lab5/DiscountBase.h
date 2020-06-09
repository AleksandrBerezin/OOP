#pragma once
#include "CategoryType.h"
#include "Product.h"

class DiscountBase
{
	CategoryType _category;

	void SetCategory(CategoryType category);

public:
	CategoryType GetCategory();
	virtual double Calculate(Product* product) = 0;

protected:
	DiscountBase(CategoryType category);
};

void ShowCheckWithDiscount(DiscountBase* discount, Product* products, int productsCount);