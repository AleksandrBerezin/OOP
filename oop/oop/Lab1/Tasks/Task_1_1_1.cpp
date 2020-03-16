#include <iostream>

using namespace std;
//i = 0, sum = 0;
//i = 1, sum = 1.1;
//i = 2, sum = 3.52;
//i = 3, sum = 7.51;
//i = 4, sum = 13.37;
//i = 5, sum = 21.42;
//i = 6, sum = 32.05;
//i = 7, sum = 45.69;
//i = 8, sum = 62.84;
//i = 9, sum = 84.06.
static void Breakpoints()
{
	double add = 1.0;
	double sum = 0.0;
	for (int i = 0; i < 10; i++)
	{
		sum += add * i;
		add *= 1.1;
	}
	cout << "Total sum is " << sum << endl;
}

void Task_1_1_1()
{
	Breakpoints();
}