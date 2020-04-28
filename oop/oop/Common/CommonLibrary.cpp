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

// Если число состоит из 1 цифры, то добавляется 0 перед числом
string GetDecimalStartingWithZero(int number)
{
	if (number / 10 > 0)
	{
		return to_string(number);;
	}
	else
	{
		return "0" + to_string(number);;
	}
}