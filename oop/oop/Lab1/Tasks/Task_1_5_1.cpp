#include <iostream>

using namespace std;

void Task_1_5_1()
{
    int arraySize = 10;
    double* array = new double[arraySize] {1.0, 15.0, -8.2, -3.5, 12.6, 38.4,
        -0.5, 4.5, 16.7, 4.5};

    cout << "Array of double:" << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    delete[] array;
}