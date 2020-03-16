#include <iostream>

using namespace std;

double GetPower(double base, int exponent)
{
	double result = base;
	for (int i = 2; i <= exponent; i++)
	{
		result *= base;
	}

	return result;
}

void DemoGetPower(double base, int exponent)
{
	double result = GetPower(base, exponent);
	cout << base << " ^ " << exponent << " = " << result << "\n";
}

void Task_1_3_3()
{
	DemoGetPower(2.0, 5);
	DemoGetPower(3.0, 4);
	DemoGetPower(-2.0, 5);
}