#include <iostream>

using namespace std;

void Task_1_2_1()
{
    const int arraySize = 10;
    int array[arraySize] = {12, 21, 119, -80, 300, 75, 81, -8, 47, 31};

    cout << "Source array is:" << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < arraySize; i++)
    {
        for (int j = i + 1; j < arraySize; j++)
        {
            if (array[j] < array[i])
            {
                int tmp = array[j];
                array[j] = array[i];
                array[i] = tmp;
            }
        }
    }

    cout << endl;
    cout << "Sorted array is:" << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}