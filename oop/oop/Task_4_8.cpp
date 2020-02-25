#include <iostream>
#include "Task_4_8.h"

using namespace std;

void Foo(double* a)
{
	cout << "Address in pointer: " << a << endl;
	cout << "Address of pointer: " << &a << endl;
	cout << "Value in pointer address: " << *a << endl;

	*a = 15.0;
	cout << "New value in pointer address: " << *a << endl;
}

void Task_4_8()
{
	double a = 5.0;
	double* pointer = &a;
	cout << "Address of a in main(): " << &a << endl;
	cout << "Address in pointer in main(): " << pointer << endl;
	cout << "Address of pointer in main(): " << &pointer << endl;
	cout << "Value of a in main(): " << a << endl;
	cout << endl;

	Foo(pointer);

	cout << endl;
	cout << "Value of a in main(): " << a << endl;
}