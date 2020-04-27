#pragma once
#include <string>
#include "Time.h"

using std::string;

struct Flight
{
	string Number;
	string DeparturePoint;
	string DestinationPoint;
	Time* DepartureTime;
	Time* ArrivalTime;
};

Flight* MakeFlight(string number, string departurePoint, string destinationPoint,
	Time* departureTime, Time* arrivalTime);
void SetNumber(Flight& flight, string number);
void SetDeparturePoint(Flight& flight, string departurePoint);
void SetDestinationPoint(Flight& flight, string destinationPoint);
void SetDepartureTime(Flight& flight, Time* departureTime);
void SetArrivalTime(Flight& flight, Time* arrivalTime);
void DemoFlightWithTime();
int GetFlightTimeMinutes(Flight& flight);