#include <iostream>

using namespace std;

void RoundToTens(int& value)
{
	if (value % 10 < 5)
	{
		value = value / 10 * 10;
	}
	else
	{
		value = (value / 10 + 1) * 10;
	}
}

void DemoRoundToTens(int number)
{
	cout << "For " << number << " rounded value is ";
	RoundToTens(number);
	cout << number << endl;
}

void Task_1_3_4()
{
	DemoRoundToTens(14);
	DemoRoundToTens(191);
	DemoRoundToTens(27);
}