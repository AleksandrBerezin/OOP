#include <iostream>
#include "CommonLibrary.h"

using namespace std;

//Проверка, что вводимое число int
int InputInt()
{
	int number = 0;

	while (true)
	{
		cin >> number;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "ERROR\n";
		}
		else
		{
			break;
		}
	}

	return number;
}

void PrintNumberOfTask(string number)
{
	cout << endl << "------------" << endl;
	cout << "|Task " << number << "|" << endl;
	cout << "------------" << endl;
}

void PrintNumbersOfTask(string firstNumber, string secondNumber)
{
}