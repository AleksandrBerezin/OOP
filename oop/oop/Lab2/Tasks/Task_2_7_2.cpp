#include <iostream>
#include "Structures.h"

using namespace std;
// TODO: сделай cpp-файлы для работы с каждой отдельной структурой, чтобы нумерация была не по заданиям, а по самим структурам
Rectangle* MakeRectangle(int length, int width, string color)
{
	Rectangle* rectangle = new Rectangle();
	rectangle->Length = length;
	rectangle->Width = width;
	rectangle->Color = color;

	return rectangle;
}

Flight* MakeFlight(string departurePoint, string destinationPoint,
	int flightTimeInMinutes)
{
	Flight* flight = new Flight();
	flight->DeparturePoint = departurePoint;
	flight->DestinationPoint = destinationPoint;
	flight->FlightTimeInMinutes = flightTimeInMinutes;

	return flight;
}

Movie* MakeMovie(string title, int durationInMinutes, int year, string genre,
	double rating)
{
	Movie* movie = new Movie();
	movie->Title = title;
	movie->DurationInMinutes = durationInMinutes;
	movie->Year = year;
	movie->Genre = genre;
	movie->Rating = rating;

	return movie;
}

Time* MakeTime(int hours, int minutes, int seconds)
{
	Time* time = new Time();
	time->Hours = hours;
	time->Minutes = minutes;
	time->Seconds = seconds;

	return time;
}

void Task_2_7_2()
{
	cout << endl << "Verifying that constructor functions are working correctly."
		<< endl << endl;

	Rectangle* rectangle = MakeRectangle(25, 17, "red");
	cout << "The rectangle size: " << rectangle->Length << " x " << rectangle->Width
		<< ". The rectangle color is " << rectangle->Color << "." << endl;

	Flight* flight = MakeFlight("Tomsk", "Moscow", 240);
	cout << "The flight from " << flight->DeparturePoint << " to "
		<< flight->DestinationPoint << " will last " << flight->FlightTimeInMinutes
		<< " minutes." << endl;

	Movie* movie = MakeMovie("Star Wars", 140, 1977, "Sci-fi", 7.9);
	cout << "The movie " << movie->Title << " in genre " << movie->Genre
		<< " was released in " << movie->Year << ". The movie lasts "
		<< movie->DurationInMinutes << " minutes. Movie rating is "
		<< movie->Rating << "." << endl;

	Time* time = MakeTime(17, 34, 22);
	cout << "Current time: " << time->Hours << " hours, " << time->Minutes
		<< " minutes and " << time->Seconds << " seconds." << endl;
}