#include <exception>
#include "Product.h"

using namespace std;

string Product::GetName()
{
    return _name;
}

CategoryType Product::GetCategory()
{
    return _category;
}

double Product::GetCost()
{
    return _cost;
}

void Product::SetName(string name)
{
    _name = name;
}

void Product::SetCategory(CategoryType category)
{
    _category = category;
}

void Product::SetCost(double cost)
{
    if (cost < 0 || cost > 100000)
    {
        throw exception("Стоимость должна быть в диапазоне 0-100000");
    }
    _cost = cost;
}

Product::Product(string name, CategoryType category, double cost)
{
    SetName(name);
    SetCategory(category);
    SetCost(cost);
}