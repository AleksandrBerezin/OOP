#include <iostream>
#include <ctime>
#include "Task_5_7.h"

using namespace std;

int* MakeRandomArray(int arraySize)
{
    int* array = new int[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        array[i] = rand() % 101;
    }

    return array;
}

void Task_5_7()
{
    srand(time(nullptr));

    int* a = MakeRandomArray(5);

    cout << "Random array of 5:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl << endl;

    delete[] a;

    int* b = MakeRandomArray(8);

    cout << "Random array of 8:" << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl << endl;

    delete[] b;

    int* c = MakeRandomArray(13);

    cout << "Random array of 13:" << endl;
    for (int i = 0; i < 13; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;

    delete[] c;
}