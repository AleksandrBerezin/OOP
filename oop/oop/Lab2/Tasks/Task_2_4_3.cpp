#include <iostream>
#include "Structures.h"

using namespace std;

static void DemoFlight()
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

static void DemoMovie()
{
	Movie movie;

	movie.Title = "Star Wars";
	movie.DurationInMinutes = 140;
	movie.Year = 1977;
	movie.Genre = "Sci-fi";
	movie.Rating = 7.9;

	Movie* pointer1 = &movie;
	Movie* pointer2 = &movie;

	cout << endl << "Movie:" << endl;
	cout << "Address in first pointer: " << pointer1 << endl;
	cout << "Address in second pointer: " << pointer2 << endl;
}

static void DemoTime()
{
	Time time;

	time.Hours = 17;
	time.Minutes = 34;
	time.Seconds = 22;

	Time* pointer1 = &time;
	Time* pointer2 = &time;

	cout << endl << "Time:" << endl;
	cout << "Address in first pointer: " << pointer1 << endl;
	cout << "Address in second pointer: " << pointer2 << endl;
}

void Task_2_4_3()
{
	DemoFlight();
	DemoMovie();
	DemoTime();
}