#include <iostream>
#include "Enums.h"
#include "MovieWithGenre.h"

using namespace std;

// Исправленная структура MovieWithGenre находится в файле MovieWithGenre.h

MovieWithGenre* MakeMovie(string title, int durationInMinutes, int year, Genre genre,
	double rating)
{
	MovieWithGenre* movie = new MovieWithGenre();
	movie->Title = title;
	movie->DurationInMinutes = durationInMinutes;
	movie->Year = year;
	movie->Genre = genre;
	movie->Rating = rating;

	return movie;
}

static void DemoMovieWithGenre()
{
	MovieWithGenre movie;
	movie.Title = "1 + 1";
	movie.DurationInMinutes = 110;
	movie.Year = 2015;
	movie.Genre = Drama;
	movie.Rating = 8.9;

	MovieWithGenre* movie2 = MakeMovie("Avengers", 120, 2012, Action, 7.7);

	delete movie2;
}