#include <iostream>

using namespace std;

void Task_2_2()
{
    const int arraySize = 12;
    double array[arraySize] = {12.0, 21.5, 119.2, -80.7, 300.0, 75.5, 81.2, 8.1,
        47.3, 31.2, 85.3, 100.1};

    cout << "Source array is:" << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl << endl;

    double searchingValue;
    cout << "Enter searching value: ";
    cin >> searchingValue;

    int count = 0;
    for (int i = 0; i < arraySize; i++)
    {
        if (array[i] > searchingValue)
        {
            count++;
        }
    }

    cout << "Elements of array more than " << searchingValue << " is: " << count << endl;
}