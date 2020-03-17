#pragma once
#include <string>
#include "Enums.h"

using std::string;
// TODO: каждую структуру в отдельный файл. Функции по работе со структурой туда же
struct Rectangle
{
	double Length;
	double Width;
	string Color;
};

struct Flight
{
	string DeparturePoint;
	string DestinationPoint;
	int FlightTimeInMinutes;
};

struct Movie
{
	string Title;
	int DurationInMinutes;
	int Year;
	string Genre;
	double Rating;
};

struct Time
{
	int Hours;
	int Minutes;
	int Seconds;
};

struct Contact
{
	string Name;
	string SurName;
	string Number;
};

struct Song
{
	string Title;
	string Author;
	int DurationInSeconds;
};

struct Subject
{
	string SubjectName;
	string TeacherSurname;
	int Mark;
};