#include <iostream>
#include "Task_5_2.h"

using namespace std;

void Task_5_2()
{
    int arraySize = 8;
	//TODO: зачем тебе arraySize, если всё равно используешь 8?
    bool* array = new bool[8];
	//TODO: проще
    array[0] = true;
    array[1] = false;
    array[2] = true;
    array[3] = true;
    array[4] = false;
    array[5] = true;
    array[6] = false;
    array[7] = false;

    cout << endl;
    cout << "Array of bool:" << endl;
    for (int i = 0; i < arraySize; i++)
    {
        if (array[i])
        {
            cout << "true ";
        }
        else
        {
            cout << "false ";
        }
    }
    cout << endl;

    delete[] array;
}