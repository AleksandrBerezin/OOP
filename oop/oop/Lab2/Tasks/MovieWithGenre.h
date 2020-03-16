#pragma once
#include "Enums.h"
#include <string>

using std::string;

struct Movie
{
	string Title;
	int DurationInMinutes;
	int Year;
	Genre Genre;
	double Rating;
};

Movie* MakeMovie(string title, int durationInMinutes, int year, Genre genre,
	double rating);
void WriteGenre(Genre genre);
Genre ReadGenre();
void InitMovie(Movie& movie, string title, int durationInMinutes, int year, 
	Genre genre, double rating);