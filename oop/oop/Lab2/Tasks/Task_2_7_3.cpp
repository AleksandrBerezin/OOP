#include <iostream>
#include "Structures.h"

using namespace std;

Rectangle* CopyRectangle(Rectangle& rectangle)
{
	Rectangle* copiedRectangle = new Rectangle();
	copiedRectangle->Length = rectangle.Length;
	copiedRectangle->Width = rectangle.Width;
	copiedRectangle->Color = rectangle.Color;

	return copiedRectangle;
}

Flight* CopyFlight(Flight& flight)
{
	Flight* copiedFlight = new Flight();
	copiedFlight->DeparturePoint = flight.DeparturePoint;
	copiedFlight->DestinationPoint = flight.DestinationPoint;
	copiedFlight->FlightTimeInMinutes = flight.FlightTimeInMinutes;

	return copiedFlight;
}

Movie* CopyMovie(Movie& movie)
{
	Movie* copiedMovie = new Movie();
	copiedMovie->Title = movie.Title;
	copiedMovie->DurationInMinutes = movie.DurationInMinutes;
	copiedMovie->Year = movie.Year;
	copiedMovie->Genre = movie.Genre;
	copiedMovie->Rating = movie.Rating;

	return copiedMovie;
}

Time* CopyTime(Time& time)
{
	Time* copiedTime = new Time();
	copiedTime->Hours = time.Hours;
	copiedTime->Minutes = time.Minutes;
	copiedTime->Seconds = time.Seconds;

	return copiedTime;
}

void Task_2_7_3()
{
	cout << endl << "Verifying that copy functions are working correctly."
		<< endl << endl;

	cout << "Data before copying:" << endl << endl;

	Rectangle rectangle;

	rectangle.Length = 25;
	rectangle.Width = 17;
	rectangle.Color = "red";

	cout << "The rectangle size: " << rectangle.Length << " x " << rectangle.Width
		<< ". The rectangle color is " << rectangle.Color << "." << endl;

	Flight flight;

	flight.DeparturePoint = "Tomsk";
	flight.DestinationPoint = "Moscow";
	flight.FlightTimeInMinutes = 240;

	cout << "The flight from " << flight.DeparturePoint << " to "
		<< flight.DestinationPoint << " will last " << flight.FlightTimeInMinutes
		<< " minutes." << endl;

	Movie movie;

	movie.Title = "Star Wars";
	movie.DurationInMinutes = 140;
	movie.Year = 1977;
	movie.Genre = "Sci-fi";
	movie.Rating = 7.9;

	cout << "The movie " << movie.Title << " in genre " << movie.Genre
		<< " was released in " << movie.Year << ". The movie lasts "
		<< movie.DurationInMinutes << " minutes. Movie rating is "
		<< movie.Rating << "." << endl;

	Time time;

	time.Hours = 17;
	time.Minutes = 34;
	time.Seconds = 22;

	cout << "Current time: " << time.Hours << " hours, " << time.Minutes
		<< " minutes and " << time.Seconds << " seconds." << endl;

	cout << endl << "Data after copying:" << endl << endl;

	Rectangle* rectangle2 = CopyRectangle(rectangle);
	cout << "The rectangle size: " << rectangle2->Length << " x " << rectangle2->Width
		<< ". The rectangle color is " << rectangle2->Color << "." << endl;

	Flight* flight2 = CopyFlight(flight);
	cout << "The flight from " << flight2->DeparturePoint << " to "
		<< flight2->DestinationPoint << " will last " << flight2->FlightTimeInMinutes
		<< " minutes." << endl;

	Movie* movie2 = CopyMovie(movie);
	cout << "The movie " << movie2->Title << " in genre " << movie2->Genre
		<< " was released in " << movie2->Year << ". The movie lasts "
		<< movie2->DurationInMinutes << " minutes. Movie rating is "
		<< movie2->Rating << "." << endl;

	Time* time2 = CopyTime(time);
	cout << "Current time: " << time2->Hours << " hours, " << time2->Minutes
		<< " minutes and " << time2->Seconds << " seconds." << endl;
}