#pragma once
#include <exception>
#include "Time.h"

using namespace std;

Time* MakeTime(int year, int month, int day, int hour, int minute)
{
	Time* time = new Time();
	SetYear(*time, year);
	SetMonth(*time, month);
	SetDay(*time, day);
	SetHour(*time, hour);
	SetMinute(*time, minute);
	return time;
}

void SetYear(Time& time, int year)
{
	if (year < 1)
	{
		throw exception("Год должен быть положительным.");
	}
	time.Year = year;
}

void SetMonth(Time& time, int month)
{
	if (month < 1 || month > 12)
	{
		throw exception("Месяц должен быть в диапазоне 1-12.");
	}
	time.Month = month;
}

void SetDay(Time& time, int day)
{
	if (day < 1 || day > 30)
	{
		throw exception("День должен быть в диапазоне 1-30.");
	}
	time.Day = day;
}

void SetHour(Time& time, int hour)
{
	if (hour < 1 || hour > 24)
	{
		throw exception("Час должен быть в диапазоне 1-24.");
	}
	time.Hour = hour;
}

void SetMinute(Time& time, int minute)
{
	if (minute < 1 || minute > 60)
	{
		throw exception("Минуты должны быть в диапазоне 1-60.");
	}
	time.Minute = minute;
}

// Если число состоит из 1 цифры, то добавляется 0 перед числом
string GetDecimalStartingWithZero(int number)
{
	if (number / 10 > 0)
	{
		return to_string(number);;
	}
	else
	{
		return "0" + to_string(number);;
	}
}