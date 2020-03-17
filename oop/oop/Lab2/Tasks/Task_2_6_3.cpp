#include <iostream>
#include "Structures.h"

using namespace std;

void FindShortestFlight(Flight* flights, int count)
{
	// TODO: сделать через возврат указателя
	int minTime = flights[0].FlightTimeInMinutes;
	int index = 0;

	for (int i = 0; i < count; i++)
	{
		if (flights[i].FlightTimeInMinutes < minTime)
		{
			minTime = flights[i].FlightTimeInMinutes;
			index = i;
		}
	}

	cout << endl << "The shortest flight: from " << flights[index].DeparturePoint
		<< " to " << flights[index].DestinationPoint << " will last "
		<< flights[index].FlightTimeInMinutes << " minutes." << endl;
}

void DemoDynamicFlights()
{
	int count = 4;
	Flight* flights = new Flight[count];

	flights[0].DeparturePoint = "Tomsk";
	flights[0].DestinationPoint = "Moscow";
	flights[0].FlightTimeInMinutes = 240;

	flights[1].DeparturePoint = "Tomsk";
	flights[1].DestinationPoint = "Novosibirsk";
	flights[1].FlightTimeInMinutes = 80;

	flights[2].DeparturePoint = "Novosibirsk";
	flights[2].DestinationPoint = "Moscow";
	flights[2].FlightTimeInMinutes = 250;

	flights[3].DeparturePoint = "Saint Petersburg";
	flights[3].DestinationPoint = "Moscow";
	flights[3].FlightTimeInMinutes = 60;

	cout << endl;
	for (int i = 0; i < count; i++)
	{
		cout << "The flight " << i + 1 << " from " << flights[i].DeparturePoint
			<< " to " << flights[i].DestinationPoint << " will last "
			<< flights[i].FlightTimeInMinutes << " minutes." << endl;
	}

	FindShortestFlight(flights, count);

	delete[] flights;
}

void Task_2_6_3()
{
	DemoDynamicFlights();
}