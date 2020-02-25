#include <iostream>
#include "Task_5_6.h"

using namespace std;

int CountLetters(char array[], int length)
{
    int count = 0;

    for (int i = 0; i < length; i++)
    {
        if ((array[i] >= 'a' && array[i] <= 'z') || (array[i] >= 'A' && array[i] <= 'Z'))
        {
            count++;;
        }
    }

    return count;
}

void Task_5_6()
{
    int arraySize;
    cout << "Enter char array size: ";
    cin >> arraySize;

    char* array = new char[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        cout << "Enter a[" << i << "]: ";
        cin >> array[i];
    }

    cout << endl;
    cout << "Your char array is:" << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    int countLetters = CountLetters(array, arraySize);

    cout << endl;
    cout << "Count letters in array: " << countLetters << endl;

    delete[] array;
}