#pragma once
#include <iostream>
#include <string>
#include "Flight.h"
#include "Time.h"
#include "../Common/CommonLibrary.h"

using namespace std;

string Flight::GetNumber()
{
	return this->_number;
}

string Flight::GetDeparturePoint()
{
	return this->_departurePoint;
}

string Flight::GetDestinationPoint()
{
	return this->_destinationPoint;
}

Time* Flight::GetDepartureTime()
{
	return this->_departureTime;
}

Time* Flight::GetArrivalTime()
{
	return this->_arrivalTime;
}

void Flight::SetNumber(string number)
{
	this->_number = number;
}

void Flight::SetDeparturePoint(string departurePoint)
{
	this->_departurePoint = departurePoint;
}

void Flight::SetDestinationPoint(string destinationPoint)
{
	this->_destinationPoint = destinationPoint;
}

void Flight::SetDepartureTime(Time* departureTime)
{
	this->_departureTime = departureTime;
}

void Flight::SetArrivalTime(Time* arrivalTime)
{
	if (this->GetDepartureTime()->GetYear() <= arrivalTime->GetYear() &&
		this->GetDepartureTime()->GetMonth() <= arrivalTime->GetMonth() &&
		this->GetDepartureTime()->GetDay() <= arrivalTime->GetDay() &&
		this->GetDepartureTime()->GetHour() <= arrivalTime->GetHour() &&
		this->GetDepartureTime()->GetMinute() <= arrivalTime->GetMinute())
	{
		this->_arrivalTime = arrivalTime;
		return;
	}

	if (this->GetDepartureTime()->GetYear() <= arrivalTime->GetYear() &&
		this->GetDepartureTime()->GetMonth() <= arrivalTime->GetMonth() &&
		this->GetDepartureTime()->GetDay() <= arrivalTime->GetDay() &&
		this->GetDepartureTime()->GetHour() < arrivalTime->GetHour() &&
		this->GetDepartureTime()->GetMinute() > arrivalTime->GetMinute())
	{
		this->_arrivalTime = arrivalTime;
		return;
	}

	if (this->GetDepartureTime()->GetYear() <= arrivalTime->GetYear() &&
		this->GetDepartureTime()->GetMonth() <= arrivalTime->GetMonth() &&
		this->GetDepartureTime()->GetDay() < arrivalTime->GetDay() &&
		this->GetDepartureTime()->GetHour() > arrivalTime->GetHour())
	{
		this->_arrivalTime = arrivalTime;
		return;
	}

	if (this->GetDepartureTime()->GetYear() <= arrivalTime->GetYear() &&
		this->GetDepartureTime()->GetMonth() < arrivalTime->GetMonth() &&
		this->GetDepartureTime()->GetDay() > arrivalTime->GetDay())
	{
		this->_arrivalTime = arrivalTime;
		return;
	}

	if (this->GetDepartureTime()->GetYear() < arrivalTime->GetYear() &&
		this->GetDepartureTime()->GetMonth() > arrivalTime->GetMonth())
	{
		this->_arrivalTime = arrivalTime;
		return;
	}

	throw exception("Время прибытия не может быть раньше времени отправления.");
}

Flight::Flight(string number, string departurePoint, string destinationPoint,
	Time* departureTime, Time* arrivalTime)
{
	this->SetNumber(number);
	this->SetDeparturePoint(departurePoint);
	this->SetDestinationPoint(destinationPoint);
	this->SetDepartureTime(departureTime);
	this->SetArrivalTime(arrivalTime);
}

Flight::~Flight()
{
}

int Flight::GetFlightTimeMinutes()
{
	return (((this->GetArrivalTime()->GetHour() - this->GetDepartureTime()->GetHour()) * 60)
		+ (this->GetArrivalTime()->GetMinute() - this->GetDepartureTime()->GetMinute()));
}

void DemoFlightWithTime()
{
	const int flightsCount = 5;

	Flight* flights[flightsCount];
	flights[0] = new Flight("S015", "Томск", "Москва", new Time(20, 04, 26, 12, 20),
		new Time(20, 04, 26, 16, 15));
	flights[1] = new Flight("S021", "Томск", "Новосибирск", new Time(20, 03, 22, 10, 10),
		new Time(20, 03, 22, 11, 10));
	flights[2] = new Flight("S034", "Томск", "Екатеринбург", new Time(20, 04, 23, 12, 20),
		new Time(20, 04, 23, 14, 50));
	flights[3] = new Flight("S032", "Томск", "Сургут", new Time(20, 03, 23, 11, 15),
		new Time(20, 03, 23, 12, 45));
	flights[4] = new Flight("S032", "Томск", "Стрежевой", new Time(20, 03, 27, 11, 20),
		new Time(20, 03, 27, 12, 5));

	cout << endl;

	for (int i = 0; i < flightsCount; i++)
	{
		PrintFlight(*flights[i]);
		cout << ". Вылет ";
		PrintFlightTime(*flights[i]);
		cout << ". Прибытие ";
		PrintFlightTime(*flights[i]);
		cout << "." << endl;
	}

	cout << endl;

	for (int i = 0; i < flightsCount; i++)
	{
		int flightTime = flights[i]->GetFlightTimeMinutes();
		PrintFlight(*flights[i]);
		cout << ". Время полета: " << flightTime / 60 << "ч. " << flightTime % 60
			<< "мин." << endl;
	}
}

void PrintFlight(Flight& flight)
{
	cout << flight.GetNumber() << " " << flight.GetDeparturePoint() << "-"
		<< flight.GetDestinationPoint();
}

void PrintFlightTime(Flight& flight)
{
	cout << GetDecimalStartingWithZero(flight.GetDepartureTime()->GetDay())
		<< "." << GetDecimalStartingWithZero(flight.GetDepartureTime()->GetMonth())
		<< "." << GetDecimalStartingWithZero(flight.GetDepartureTime()->GetYear())
		<< " " << GetDecimalStartingWithZero(flight.GetDepartureTime()->GetHour())
		<< ":" << GetDecimalStartingWithZero(flight.GetDepartureTime()->GetMinute());
}