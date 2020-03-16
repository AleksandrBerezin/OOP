#include <iostream>
#include "Enums.h"
#include "MovieWithGenre.h"

using namespace std;

// Исправленная структура Movie находится в файле MovieWithGenre.h

static void DemoMovieWithGenre()
{
	MovieWithGenre movie;
	movie.Title = "1 + 1";
	movie.DurationInMinutes = 110;
	movie.Year = 2015;
	movie.Genre = Drama;
	movie.Rating = 8.9;
}