#include <iostream>

using namespace std;

void Task_5_2()
{
    int arraySize = 8;
	//TODO: зачем тебе arraySize, если всё равно используешь 8?
    bool* array = new bool[arraySize] {true, false, true, true, false, true, false, false};

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