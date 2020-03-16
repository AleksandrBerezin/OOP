#include <iostream>
#include "Structures.h"

using namespace std;

static void DemoRectangle()
{
	Rectangle rectangle;

	rectangle.Length = 25;
	rectangle.Width = 17;
	rectangle.Color = "red";

	Rectangle rectangle2;

	cout << endl << "Enter rectangle length (positive number):" << endl << "> ";
	cin >> rectangle2.Length;
	cout << "Enter rectangle width (positive number):" << endl << "> ";
	cin >> rectangle2.Width;
	cout << "Enter rectangle color:" << endl << "> ";
	cin >> rectangle2.Color;

	cout << "The rectangle size: " << rectangle2.Length << " x " << rectangle2.Width 
		<< ". The rectangle color is " << rectangle2.Color << "." << endl;
}

static void DemoFlight()
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

	cout << "The flight from " << flight2.DeparturePoint << " to "
		<< flight2.DestinationPoint << " will last " << flight2.FlightTimeInMinutes 
		<< " minutes." << endl;
}

static void DemoMovie()
{
	Movie movie;

	movie.Title = "Star Wars";
	movie.DurationInMinutes = 140;
	movie.Year = 1977;
	movie.Genre = "Sci-fi";
	movie.Rating = 7.9;

	Movie movie2;

	cout << endl << "Enter movie title:" << endl << "> ";
	cin >> movie2.Title;
	cout << "Enter movie duration in minutes (positive number):" << endl << "> ";
	cin >> movie2.DurationInMinutes;
	cout << "Enter movie release year (four-digit):" << endl << "> ";
	cin >> movie2.Year;
	cout << "Enter movie genre:" << endl << "> ";
	cin >> movie2.Genre;
	cout << "Enter movie rating (from 0.0 to 10.0):" << endl << "> ";
	cin >> movie2.Rating;

	cout << "The movie " << movie2.Title << " in genre " << movie2.Genre
		<< " was released in " << movie2.Year << ". The movie lasts "
		<< movie2.DurationInMinutes << " minutes. Movie rating is "
		<< movie2.Rating << "." << endl;
}

static void DemoTime()
{
	Time time;

	time.Hours = 17;
	time.Minutes = 34;
	time.Seconds = 22;

	Time time2;

	cout << endl << "Enter hours (from 0 to 23):" << endl << "> ";
	cin >> time2.Hours;
	cout << "Enter minutes (from 0 to 59):" << endl << "> ";
	cin >> time2.Minutes;
	cout << "Enter seconds (from 0 to 59):" << endl << "> ";
	cin >> time2.Seconds;

	cout << "Current time: " << time2.Hours << " hours, " << time2.Minutes
		<< " minutes and " << time2.Seconds << " seconds." << endl;
}

void Task_2_3_2()
{
	DemoRectangle();
	DemoFlight();
	DemoMovie();
	DemoTime();
}