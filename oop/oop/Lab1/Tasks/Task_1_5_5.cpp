#include <iostream>

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

void Task_1_5_5()
{
    int arraySize = 10;
    int* array = new int[arraySize] {1, 15, -8, -3, 12, 38, 0, 4, 16, 4};

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