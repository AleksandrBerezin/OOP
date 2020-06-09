#pragma once
#include <exception>
#include "CertificateDiscount.h"

using namespace std;

int CertificateDiscount::GetAmount()
{
    return _amount;
}

void CertificateDiscount::SetAmount(int amount)
{
    if (amount < 0 || amount > 10000)
    {
        throw exception("Размер ертификата должен быть в диапазоне 0-10000");
    }
    _amount = amount;
}

CertificateDiscount::CertificateDiscount(CategoryType category, int amount) : DiscountBase(category)
{
    SetAmount(amount);
}

double CertificateDiscount::Calculate(Product* product)
{
    if (product->GetCategory() == this->GetCategory())
    {
        if (this->_amount > product->GetCost())
        {
            this->_amount -= product->GetCost();
            return 0;
        }

        if (this->_amount < product->GetCost())
        {
            double cost = product->GetCost() - this->_amount;
            this->_amount = 0;
            return cost;
        }
    }
    return product->GetCost();
}