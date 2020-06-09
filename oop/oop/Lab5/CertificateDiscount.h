#pragma once
#include "DiscountBase.h"
#include "CategoryType.h"

class CertificateDiscount : public DiscountBase
{
	int _amount;	// Размер сертификата в рублях

public:
	int GetAmount();
	
	void SetAmount(int amount);

	CertificateDiscount(CategoryType category, int amount);
	double Calculate(Product* product) override;
};