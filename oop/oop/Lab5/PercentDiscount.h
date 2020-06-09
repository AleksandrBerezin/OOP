#pragma once
#include "DiscountBase.h"
#include "CategoryType.h"

class PercentDiscount : public DiscountBase
{
	int _percent;	// Размер скидки в процентах

public:
	int GetPercent();

	void SetPercent(int percent);

	PercentDiscount(CategoryType category, int percent);
	double Calculate(Product* product) override;
};