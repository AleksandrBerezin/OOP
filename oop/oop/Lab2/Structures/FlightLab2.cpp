#include <iostream>
#include "FlightLab2.h"

using namespace std;

void WriteFlight(FlightLab2& flight)
{
	cout << endl << "The flight from " << flight.DeparturePoint << " to "
		<< flight.DestinationPoint << " will last " << flight.FlightTimeInMinutes
		<< " minutes." << endl;
}

void DemoFlight_2_3_2()
{
	FlightLab2 flight;

	flight.DeparturePoint = "Tomsk";
	flight.DestinationPoint = "Moscow";
	flight.FlightTimeInMinutes = 240;

	FlightLab2 flight2;

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
	FlightLab2 flights[5];

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
	FlightLab2 flight;

	flight.DeparturePoint = "Tomsk";
	flight.DestinationPoint = "Moscow";
	flight.FlightTimeInMinutes = 240;

	FlightLab2* pointer1 = &flight;
	FlightLab2* pointer2 = &flight;

	cout << endl << "Flight:" << endl;
	cout << "Address in first pointer: " << pointer1 << endl;
	cout << "Address in second pointer: " << pointer2 << endl;
}

void DemoDynamicFlight_2_6_1()
{
	FlightLab2* flight = new FlightLab2();

	flight->DeparturePoint = "Tomsk";
	flight->DestinationPoint = "Moscow";
	flight->FlightTimeInMinutes = 240;

	WriteFlight(*flight);

	delete flight;
}

FlightLab2* FindShortestFlight(FlightLab2* flights, int count)
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
	FlightLab2* flights = new FlightLab2[count];

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

	FlightLab2* shortestFlight = FindShortestFlight(flights, count);

	cout << endl << "The shortest flight: from " << shortestFlight->DeparturePoint
		<< " to " << shortestFlight->DestinationPoint << " will last "
		<< shortestFlight->FlightTimeInMinutes << " minutes." << endl;

	delete[] flights;
}

FlightLab2* MakeFlight(string departurePoint, string destinationPoint, int flightTimeInMinutes)
{
	FlightLab2* flight = new FlightLab2();
	flight->DeparturePoint = departurePoint;
	flight->DestinationPoint = destinationPoint;
	flight->FlightTimeInMinutes = flightTimeInMinutes;

	return flight;
}

void DemoFlight_2_7_2()
{
	cout << endl << "Verifying that constructor function are working correctly."
		<< endl;

	FlightLab2* flight = MakeFlight("Tomsk", "Moscow", 240);
	WriteFlight(*flight);
}

FlightLab2* CopyFlight(FlightLab2& flight)
{
	FlightLab2* copiedFlight = new FlightLab2();
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
	
	FlightLab2 flight;

	flight.DeparturePoint = "Tomsk";
	flight.DestinationPoint = "Moscow";
	flight.FlightTimeInMinutes = 240;

	WriteFlight(flight);

	cout << endl << "Data after copying:" << endl;

	FlightLab2* flight2 = CopyFlight(flight);
	WriteFlight(*flight2);

	delete flight2;
}