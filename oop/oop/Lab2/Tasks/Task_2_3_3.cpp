#include <iostream>
#include "Structures.h"

using namespace std;

static void DemoRectangle()
{
	Rectangle rectangles[3];

	rectangles[0].Length = 25;
	rectangles[0].Width = 17;
	rectangles[0].Color = "red";

	rectangles[1].Length = 53;
	rectangles[1].Width = 27;
	rectangles[1].Color = "yellow";

	rectangles[2].Length = 28;
	rectangles[2].Width = 7;
	rectangles[2].Color = "blue";

	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "The rectangle " << i + 1 << " size: " << rectangles[i].Length
			<< " x " << rectangles[i].Width << ". The rectangle color is " << rectangles[i].Color 
			<< "." << endl;
	}
}

static void DemoFlight()
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

static void DemoMovie()
{
	Movie movies[4];

	movies[0].Title = "Star Wars";
	movies[0].DurationInMinutes = 140;
	movies[0].Year = 1977;
	movies[0].Genre = "Sci-fi";
	movies[0].Rating = 7.9;

	movies[1].Title = "Blade Runner";
	movies[1].DurationInMinutes = 120;
	movies[1].Year = 1982;
	movies[1].Genre = "Neo-noir";
	movies[1].Rating = 8.9;

	movies[2].Title = "X-men";
	movies[2].DurationInMinutes = 104;
	movies[2].Year = 2000;
	movies[2].Genre = "Action";
	movies[2].Rating = 7.4;

	movies[3].Title = "Iron Man";
	movies[3].DurationInMinutes = 126;
	movies[3].Year = 2008;
	movies[3].Genre = "Action";
	movies[3].Rating = 7.9;

	cout << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << "The movie " << i + 1 << " " << movies[i].Title << " in genre " << movies[i].Genre
			<< " was released in " << movies[i].Year << ". The movie lasts "
			<< movies[i].DurationInMinutes << " minutes. Movie rating is "
			<< movies[i].Rating << "." << endl;
	}
}

static void DemoTime()
{
	Time time[3];

	time[0].Hours = 17;
	time[0].Minutes = 34;
	time[0].Seconds = 22;

	time[1].Hours = 7;
	time[1].Minutes = 54;
	time[1].Seconds = 48;

	time[2].Hours =13;
	time[2].Minutes = 28;
	time[2].Seconds = 4;

	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "The time " << i + 1  << ": " << time[i].Hours << " hours, " << time[i].Minutes 
			<< " minutes and " << time[i].Seconds << " seconds." << endl;
	}
}

void Task_2_3_3()
{
	DemoRectangle();
	DemoFlight();
	DemoMovie();
	DemoTime();
}