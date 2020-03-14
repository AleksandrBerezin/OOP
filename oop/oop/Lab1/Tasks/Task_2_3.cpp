#include <iostream>

using namespace std;

void Task_2_3()
{
    const int arraySize = 8;
    char array[arraySize];

    cout << "Enter array on 8 chars" << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cout << "array[" << i << "]: ";
        cin >> array[i];
    }
    cout << endl;

    cout << "Your array is:" << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    cout << "All letters in your array is:" << endl;
    for (int i = 0; i < arraySize; i++)
    {
        if ((array[i] >= 'a' && array[i] <= 'z') || (array[i] >= 'A' && array[i] <= 'Z'))
        {
            cout << array[i] << " ";
        }
    }
    cout << endl;
}