#include <iostream>
#include "Flight.h"

using namespace std;

void WriteFlight(Flight& flight)
{
	cout << endl << "The flight from " << flight.DeparturePoint << " to "
		<< flight.DestinationPoint << " will last " << flight.FlightTimeInMinutes
		<< " minutes." << endl;
}

void DemoFlight_2_3_2()
{
	Flight flight;

	flight.DeparturePoint = "Tomsk";
	flight.DestinationPoint = "Moscow";
	flight.FlightTimeInMinutes = 240;

	Flight flight2;

	cout << endl << "Enter departure point:" << endl << "> ";
	cin >> flight2.DeparturePoint;
	cout << "Enter destination point:" << endl << "> ";
	cin >> flight2.DestinationPoint;
	cout << "Enter flight time in minutes (positive number):" << endl << "> ";
	cin >> flight2.FlightTimeInMinutes;

	WriteFlight(flight2);
}

void DemoFlight_2_3_3()
{
	Flight flights[5];

	flights[0].DeparturePoint = "Tomsk";
	flights[0].DestinationPoint = "Moscow";
	flights[0].FlightTimeInMinutes = 240;

	flights[1].DeparturePoint = "Tomsk";
	flights[1].DestinationPoint = "Novosibirsk";
	flights[1].FlightTimeInMinutes = 60;

	flights[2].DeparturePoint = "Novosibirsk";
	flights[2].DestinationPoint = "Moscow";
	flights[2].FlightTimeInMinutes = 250;

	flights[3].DeparturePoint = "Saint Petersburg";
	flights[3].DestinationPoint = "Moscow";
	flights[3].FlightTimeInMinutes = 60;

	flights[4].DeparturePoint = "Moscow";
	flights[4].DestinationPoint = "Ekaterinburg";
	flights[4].FlightTimeInMinutes = 120;

	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "The flight " << i + 1 << " from " << flights[i].DeparturePoint
			<< " to " << flights[i].DestinationPoint << " will last "
			<< flights[i].FlightTimeInMinutes << " minutes." << endl;
	}
}

void DemoFlight_2_4_3()
{
	Flight flight;

	flight.DeparturePoint = "Tomsk";
	flight.DestinationPoint = "Moscow";
	flight.FlightTimeInMinutes = 240;

	Flight* pointer1 = &flight;
	Flight* pointer2 = &flight;

	cout << endl << "Flight:" << endl;
	cout << "Address in first pointer: " << pointer1 << endl;
	cout << "Address in second pointer: " << pointer2 << endl;
}

void DemoDynamicFlight_2_6_1()
{
	Flight* flight = new Flight();

	flight->DeparturePoint = "Tomsk";
	flight->DestinationPoint = "Moscow";
	flight->FlightTimeInMinutes = 240;

	WriteFlight(*flight);

	delete flight;
}

Flight* FindShortestFlight(Flight* flights, int count)
{
	// TODO: сделать через возврат указателя (Done)
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

	return &flights[index];
}

void DemoDynamicFlights_2_6_3()
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

	Flight* shortestFlight = FindShortestFlight(flights, count);

	cout << endl << "The shortest flight: from " << shortestFlight->DeparturePoint
		<< " to " << shortestFlight->DestinationPoint << " will last "
		<< shortestFlight->FlightTimeInMinutes << " minutes." << endl;

	delete[] flights;
}

Flight* MakeFlight(string departurePoint, string destinationPoint, int flightTimeInMinutes)
{
	Flight* flight = new Flight();
	flight->DeparturePoint = departurePoint;
	flight->DestinationPoint = destinationPoint;
	flight->FlightTimeInMinutes = flightTimeInMinutes;

	return flight;
}

void DemoFlight_2_7_2()
{
	cout << endl << "Verifying that constructor function are working correctly."
		<< endl;

	Flight* flight = MakeFlight("Tomsk", "Moscow", 240);
	WriteFlight(*flight);
}

Flight* CopyFlight(Flight& flight)
{
	Flight* copiedFlight = new Flight();
	copiedFlight->DeparturePoint = flight.DeparturePoint;
	copiedFlight->DestinationPoint = flight.DestinationPoint;
	copiedFlight->FlightTimeInMinutes = flight.FlightTimeInMinutes;

	return copiedFlight;
}

void DemoFlight_2_7_3()
{
	cout << endl << "Verifying that copy function are working correctly."
		<< endl << endl;

	cout << "Data before copying:" << endl;
	
	Flight flight;

	flight.DeparturePoint = "Tomsk";
	flight.DestinationPoint = "Moscow";
	flight.FlightTimeInMinutes = 240;

	WriteFlight(flight);

	cout << endl << "Data after copying:" << endl;

	Flight* flight2 = CopyFlight(flight);
	WriteFlight(*flight2);

	delete flight2;
}