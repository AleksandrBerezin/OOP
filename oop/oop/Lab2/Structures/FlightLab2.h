#pragma once
#include <string>

using std::string;

struct FlightLab2
{
	string DeparturePoint;
	string DestinationPoint;
	int FlightTimeInMinutes;
};

void WriteFlight(FlightLab2& flight);
FlightLab2* FindShortestFlight(FlightLab2* flights, int count);
FlightLab2* MakeFlight(string departurePoint, string destinationPoint, int flightTimeInMinutes);
FlightLab2* CopyFlight(FlightLab2& flight);
void DemoFlight_2_3_2();
void DemoFlight_2_3_3();
void DemoFlight_2_4_3();
void DemoDynamicFlight_2_6_1();
void DemoDynamicFlights_2_6_3();
void DemoFlight_2_7_2();
void DemoFlight_2_7_3();