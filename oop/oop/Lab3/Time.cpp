#pragma once
#include <exception>
#include "Time.h"

using namespace std;

int Time::GetYear()
{
	return this->_year;
}

int Time::GetMonth()
{
	return this->_month;
}

int Time::GetDay()
{
	return this->_day;
}

int Time::GetHour()
{
	return this->_hour;
}

int Time::GetMinute()
{
	return this->_minute;
}

void Time::SetYear(int year)
{
	if (year < 1)
	{
		throw exception("Год должен быть положительным.");
	}
	this->_year = year;
}

void Time::SetMonth(int month)
{
	if (month < 1 || month > 12)
	{
		throw exception("Месяц должен быть в диапазоне 1-12.");
	}
	this->_month = month;
}

void Time::SetDay(int day)
{
	if (day < 1 || day > 30)
	{
		throw exception("День должен быть в диапазоне 1-30.");
	}
	this->_day = day;
}

void Time::SetHour(int hour)
{
	if (hour < 1 || hour > 24)
	{
		throw exception("Час должен быть в диапазоне 1-24.");
	}
	this->_hour = hour;
}

void Time::SetMinute(int minute)
{
	if (minute < 1 || minute > 60)
	{
		throw exception("Минуты должны быть в диапазоне 1-60.");
	}
	this->_minute = minute;
}

Time::Time(int year, int month, int day, int hour, int minute)
{
	this->SetYear(year);
	this->SetMonth(month);
	this->SetDay(day);
	this->SetHour(hour);
	this->SetMinute(minute);
}

Time::~Time()
{
}