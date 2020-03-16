#include <iostream>

using namespace std;

void Task_1_4_3()
{
	int a = 5;
	int& b = a;

	cout << "Address of a: " << &a << endl;
	cout << "Address of b: " << &b << endl;

	cout << endl;
	b = 7;
	cout << "Value of a: " << a << endl;
}