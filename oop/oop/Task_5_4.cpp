#include <iostream>
#include "Task_5_4.h"

using namespace std;

void SortDoubleArray(double array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[i])
            {
                double tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
}

void Task_5_4()
{
    int arraySize = 10;
    double* array = new double[arraySize];
	//TODO: проще
    array[0] = 1.0;
    array[1] = 15.0;
    array[2] = -8.2;
    array[3] = -3.5;
    array[4] = 12.6;
    array[5] = 38.4;
    array[6] = -0.5;
    array[7] = 4.5;
    array[8] = 16.7;
    array[9] = 4.5;

    cout << "Array of double:" << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    SortDoubleArray(array, arraySize);

    cout << endl;
    cout << "Sorted array of double:" << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    delete[] array;
}