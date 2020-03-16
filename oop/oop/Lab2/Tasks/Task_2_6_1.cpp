#include <iostream>
#include "Structures.h"

using namespace std;

void DemoDynamicFlight()
{
	Flight* flight = new Flight();

	flight->DeparturePoint = "Tomsk";
	flight->DestinationPoint = "Moscow";
	flight->FlightTimeInMinutes = 240;

	cout << endl << "The flight from " << flight->DeparturePoint << " to "
		<< flight->DestinationPoint << " will last " << flight->FlightTimeInMinutes
		<< " minutes." << endl;

	delete flight;
}

void Task_2_6_1()
{
	DemoDynamicFlight();
}