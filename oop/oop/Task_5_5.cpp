#include <iostream>
#include "Task_5_5.h"

using namespace std;

int SearchIndexByValue(int array[], int length, int value)
{
    for (int i = 0; i < length; i++)
    {
        if (array[i] == value)
        {
            return i;
        }
    }

    return -1;
}

void Task_5_5()
{
    int arraySize = 10;
    int* array = new int[arraySize];
	//TODO: проще
    array[0] = 1;
    array[1] = 15;
    array[2] = -8;
    array[3] = -3;
    array[4] = 12;
    array[5] = 38;
    array[6] = 0;
    array[7] = 4;
    array[8] = 16;
    array[9] = 4;

    cout << "Int array:" << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl << endl;

    int searchingValue;
    cout << "Enter searching value: ";
    cin >> searchingValue;
    cout << endl;

    int index = SearchIndexByValue(array, arraySize, searchingValue);

    if (index != -1)
    {
        cout << "Index of searching value " << searchingValue << " is: " << index << endl;
    }
    else
    {
        cout << "There is no such element" << endl;
    }

    delete[] array;
}