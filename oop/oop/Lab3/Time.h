#pragma once
#include <string>

using std::string;

struct Time
{
	int Year;
	int Month;
	int Day;
	int Hour;
	int Minute;
};

Time* MakeTime(int year, int month, int day, int hour, int minute);
void SetYear(Time& time, int year);
void SetMonth(Time& time, int month);
void SetDay(Time& time, int day);
void SetHour(Time& time, int hour);
void SetMinute(Time& time, int minute);
string GetDecimalStartingWithZero(int numder);