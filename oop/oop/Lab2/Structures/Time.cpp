#include <iostream>
#include "Time.h"

using namespace std;

void WriteTime(Time& time)
{
	cout << endl << "Current time: " << time.Hours << " hours, " << time.Minutes
		<< " minutes and " << time.Seconds << " seconds." << endl;
}

void DemoTime_2_3_2()
{
	Time time;

	time.Hours = 17;
	time.Minutes = 34;
	time.Seconds = 22;

	Time time2;

	cout << endl << "Enter hours (from 0 to 23):" << endl << "> ";
	cin >> time2.Hours;
	cout << "Enter minutes (from 0 to 59):" << endl << "> ";
	cin >> time2.Minutes;
	cout << "Enter seconds (from 0 to 59):" << endl << "> ";
	cin >> time2.Seconds;

	WriteTime(time2);
}

void DemoTime_2_3_3()
{
	Time time[3];

	time[0].Hours = 17;
	time[0].Minutes = 34;
	time[0].Seconds = 22;

	time[1].Hours = 7;
	time[1].Minutes = 54;
	time[1].Seconds = 48;

	time[2].Hours = 13;
	time[2].Minutes = 28;
	time[2].Seconds = 4;

	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "The time " << i + 1 << ": " << time[i].Hours << " hours, " << time[i].Minutes
			<< " minutes and " << time[i].Seconds << " seconds." << endl;
	}
}

void DemoTime_2_4_3()
{
	Time time;

	time.Hours = 17;
	time.Minutes = 34;
	time.Seconds = 22;

	Time* pointer1 = &time;
	Time* pointer2 = &time;

	cout << endl << "Time:" << endl;
	cout << "Address in first pointer: " << pointer1 << endl;
	cout << "Address in second pointer: " << pointer2 << endl;
}

Time* MakeTime(int hours, int minutes, int seconds)
{
	Time* time = new Time();
	time->Hours = hours;
	time->Minutes = minutes;
	time->Seconds = seconds;

	return time;
}

void DemoTime_2_7_2()
{
	cout << endl << "Verifying that constructor function are working correctly." << endl;
	Time* time = MakeTime(17, 34, 22);
	WriteTime(*time);
}

Time* CopyTime(Time& time)
{
	Time* copiedTime = new Time();
	copiedTime->Hours = time.Hours;
	copiedTime->Minutes = time.Minutes;
	copiedTime->Seconds = time.Seconds;

	return copiedTime;
}

void DemoTime_2_7_3()
{
	cout << endl << "Verifying that copy function are working correctly."
		<< endl << endl;

	cout << "Data before copying:" << endl;

	Time time;
	time.Hours = 17;
	time.Minutes = 34;
	time.Seconds = 22;

	WriteTime(time);
	cout << endl << "Data after copying:" << endl;
	Time* time2 = CopyTime(time);
	WriteTime(*time2);

	delete time2;
}