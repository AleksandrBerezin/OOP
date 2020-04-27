#pragma once
#include <iostream>
#include <string>
#include "Flight.h"
#include "Time.h"

using namespace std;

Flight* MakeFlight(string number, string departurePoint, string destinationPoint,
	Time* departureTime, Time* destinationTime)
{
	Flight* flight = new Flight();
	SetNumber(*flight, number);
	SetDeparturePoint(*flight, departurePoint);
	SetDestinationPoint(*flight, destinationPoint);
	SetDepartureTime(*flight, departureTime);
	SetArrivalTime(*flight, destinationTime);
	return flight;
}

void SetNumber(Flight& flight, string number)
{
	flight.Number = number;
}

void SetDeparturePoint(Flight& flight, string departurePoint)
{
	flight.DeparturePoint = departurePoint;
}

void SetDestinationPoint(Flight& flight, string destinationPoint)
{
	flight.DestinationPoint = destinationPoint;
}

void SetDepartureTime(Flight& flight, Time* departureTime)
{
	flight.DepartureTime = departureTime;
}

void SetArrivalTime(Flight& flight, Time* arrivalTime)
{
	if (flight.DepartureTime->Year <= arrivalTime->Year &&
		flight.DepartureTime->Month <= arrivalTime->Month &&
		flight.DepartureTime->Day <= arrivalTime->Day &&
		flight.DepartureTime->Hour <= arrivalTime->Hour &&
		flight.DepartureTime->Minute <= arrivalTime->Minute)
	{
		flight.ArrivalTime = arrivalTime;
		return;
	}

	if (flight.DepartureTime->Year <= arrivalTime->Year &&
		flight.DepartureTime->Month <= arrivalTime->Month &&
		flight.DepartureTime->Day <= arrivalTime->Day &&
		flight.DepartureTime->Hour < arrivalTime->Hour &&
		flight.DepartureTime->Minute > arrivalTime->Minute)
	{
		flight.ArrivalTime = arrivalTime;
		return;
	}
	
	if (flight.DepartureTime->Year <= arrivalTime->Year &&
		flight.DepartureTime->Month <= arrivalTime->Month &&
		flight.DepartureTime->Day < arrivalTime->Day &&
		flight.DepartureTime->Hour > arrivalTime->Hour)
	{
		flight.ArrivalTime = arrivalTime;
		return;
	}

	if (flight.DepartureTime->Year <= arrivalTime->Year &&
		flight.DepartureTime->Month < arrivalTime->Month &&
		flight.DepartureTime->Day > arrivalTime->Day)
	{
		flight.ArrivalTime = arrivalTime;
		return;
	}

	if (flight.DepartureTime->Year < arrivalTime->Year &&
		flight.DepartureTime->Month > arrivalTime->Month)
	{
		flight.ArrivalTime = arrivalTime;
		return;
	}

	throw exception("Время прибытия не может быть раньше времени отправления.");
}

void DemoFlightWithTime()
{
	const int flightsCount = 5;

	Flight flights[5];
	flights[0] = *MakeFlight("S015", "Томск", "Москва", MakeTime(20, 04, 26, 12, 20),
		MakeTime(20, 04, 26, 16, 15));
	flights[1] = *MakeFlight("S021", "Томск", "Новосибирск", MakeTime(20, 03, 22, 10, 10),
		MakeTime(20, 03, 22, 11, 10));
	flights[2] = *MakeFlight("S034", "Томск", "Екатеринбург", MakeTime(20, 04, 23, 12, 20),
		MakeTime(20, 04, 23, 14, 50));
	flights[3] = *MakeFlight("S032", "Томск", "Сургут", MakeTime(20, 03, 23, 11, 15),
		MakeTime(20, 03, 23, 12, 45));
	flights[4] = *MakeFlight("S032", "Томск", "Стрежевой", MakeTime(20, 03, 27, 11, 20),
		MakeTime(20, 03, 27, 12, 5));

	cout << endl;

	for (int i = 0; i < flightsCount; i++)
	{
		cout << flights[i].Number << " " << flights[i].DeparturePoint << "-"
			<< flights[i].DestinationPoint << ". Вылет "
			<< GetDecimalStartingWithZero(flights[i].DepartureTime->Day)
			<< "." << GetDecimalStartingWithZero(flights[i].DepartureTime->Month)
			<< "." << GetDecimalStartingWithZero(flights[i].DepartureTime->Year)
			<< " " << GetDecimalStartingWithZero(flights[i].DepartureTime->Hour)
			<< ":" << GetDecimalStartingWithZero(flights[i].DepartureTime->Minute)
			<< ". Прибытие " << GetDecimalStartingWithZero(flights[i].ArrivalTime->Day)
			<< "." << GetDecimalStartingWithZero(flights[i].ArrivalTime->Month)
			<< "." << GetDecimalStartingWithZero(flights[i].ArrivalTime->Year)
			<< " " << GetDecimalStartingWithZero(flights[i].ArrivalTime->Hour)
			<< ":" << GetDecimalStartingWithZero(flights[i].ArrivalTime->Minute)
			<< "." << endl;
	}

	cout << endl;

	for (int i = 0; i < flightsCount; i++)
	{
		int flightTime = GetFlightTimeMinutes(flights[i]);
		cout << flights[i].Number << " " << flights[i].DeparturePoint << "-"
			<< flights[i].DestinationPoint << ". Время полета: "
			<< flightTime / 60 << "ч. " << flightTime % 60 << "мин." << endl;
	}
}

int GetFlightTimeMinutes(Flight& flight)
{
	return (((flight.ArrivalTime->Hour - flight.DepartureTime->Hour) * 60) +
		(flight.ArrivalTime->Minute - flight.DepartureTime->Minute));
}