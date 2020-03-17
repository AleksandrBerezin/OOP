#pragma once
#include "Enums.h"
#include <string>

using std::string;

// TODO: в принципе, двух структур Movie в программе не надо. Оставь только одну, которая работает с перечислением
struct MovieWithGenre
{
	string Title;
	int DurationInMinutes;
	int Year;
	Genre Genre;
	double Rating;
};

MovieWithGenre* MakeMovie(string title, int durationInMinutes, int year, Genre genre,
	double rating);
void WriteGenre(Genre genre);
Genre ReadGenre();
void InitMovie(MovieWithGenre& movie, string title, int durationInMinutes, int year,
	Genre genre, double rating);