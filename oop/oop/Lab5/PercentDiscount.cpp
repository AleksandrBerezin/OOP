#pragma once
#include <exception>
#include "PercentDiscount.h"

using namespace std;

int PercentDiscount::GetPercent()
{
    return _percent;
}

void PercentDiscount::SetPercent(int percent)
{
    if (percent < 0 || percent > 100)
    {
        throw exception("Размер скидки должен быть в диапазоне 0-100");
    }
    _percent = percent;
}

PercentDiscount::PercentDiscount(CategoryType category, int percent) : DiscountBase(category)
{
    SetPercent(percent);
}

double PercentDiscount::Calculate(Product* product)
{
    if (product->GetCategory() == this->GetCategory())
    {
        return product->GetCost() * (100 - this->_percent) / 100;
    }
    return product->GetCost();
}