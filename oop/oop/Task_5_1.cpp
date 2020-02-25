#include <iostream>

using namespace std;

void Task_5_1()
{
    int arraySize = 10;
    double* array = new double[arraySize];
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

    delete[] array;
}