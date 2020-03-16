#include <iostream>
#include <exception>

using namespace std;

// Сортирует массив вещественных чисел
void Sort(double* values, int count)
{
	if (count < 0)
	{
		throw exception();
	}

	double swap;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			if (values[i] < values[j])
			{
				swap = values[i];
				values[i] = values[j];
				values[j] = swap;
			}
		}
	}
}

// Демонстрирует работу сортировки
void DemoSort()
{
	int count = 5;
	double* values = new double[count] {100.0, 249.0, 12.0, 45.0, 23.5};
	cout << endl;

	try
	{
		Sort(values, -1);
		cout << "Sorting works correctly" << endl;
	}
	catch (exception e)
	{
		cout << "Exception catched!" << endl;
	}
}

void Task_2_1_2()
{
	DemoSort();
}