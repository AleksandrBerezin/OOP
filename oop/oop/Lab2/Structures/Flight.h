#pragma once
#include <string>

using std::string;

struct Flight
{
	string DeparturePoint;
	string DestinationPoint;
	int FlightTimeInMinutes;
};

void WriteFlight(Flight& flight);
Flight* FindShortestFlight(Flight* flights, int count);
Flight* MakeFlight(string departurePoint, string destinationPoint, int flightTimeInMinutes);
Flight* CopyFlight(Flight& flight);
void DemoFlight_2_3_2();
void DemoFlight_2_3_3();
void DemoFlight_2_4_3();
void DemoDynamicFlight_2_6_1();
void DemoDynamicFlights_2_6_3();
void DemoFlight_2_7_2();
void DemoFlight_2_7_3();