#include <iostream>
#include "Enums.h"
#include "MovieWithGenre.h"

using namespace std;

// Исправленная структура Movie находится в файле MovieWithGenre.h

Movie* MakeMovie(string title, int durationInMinutes, int year, Genre genre,
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

static void DemoMovieWithGenre()
{
	Movie movie;
	movie.Title = "1 + 1";
	movie.DurationInMinutes = 110;
	movie.Year = 2015;
	movie.Genre = Drama;
	movie.Rating = 8.9;

	Movie* movie2 = MakeMovie("Avengers", 120, 2012, Action, 7.7);

	delete movie2;
}