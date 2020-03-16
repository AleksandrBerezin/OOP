#include <iostream>

using namespace std;

void Task_1_5_3()
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

    delete[] array;
}