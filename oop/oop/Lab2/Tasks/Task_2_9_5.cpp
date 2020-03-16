#include <iostream>
#include "Enums.h"
#include "MovieWithGenre.h"

using namespace std;

Movie* FindBestGenreMovie(Movie* movies, int count, Genre findGenre)
{
	int index = -1;
	double rating = -1;

	for (int i = 0; i < count; i++)
	{
		if (movies[i].Genre == findGenre && movies[i].Rating > rating)
		{
			rating = movies[i].Rating;
			index = i;
		}
	}

	if (index == -1)
	{
		return nullptr;
	}
	else
	{
		return &movies[index];
	}
}

static void DemoMovieWithGenre()
{
	Movie* movies = new Movie[10];

	InitMovie(movies[0], "Avengers", 120, 2012, Action, 7.7);
	InitMovie(movies[1], "Rogue", 120, 2000, Drama, 8.3);
	InitMovie(movies[2], "Green Mile", 120, 1999, Drama, 9.1);
	InitMovie(movies[3], "Shawshank Redemption", 120, 1994, Action, 9.1);
	InitMovie(movies[4], "Iron Man", 120, 2008, Action, 7.7);
	InitMovie(movies[5], "Watchmen", 120, 2009, Drama, 7.7);
	InitMovie(movies[6], "Spider-Man", 120, 2002, Blockbuster, 7.7);
	InitMovie(movies[7], "Quiet Place", 120, 2012, Horror, 7.7);
	InitMovie(movies[8], "Home Alone", 120, 1990, Comedy, 7.7);
	InitMovie(movies[9], "Man of Steel", 120, 2013, Blockbuster, 7.7);

	Movie* bestMovie = FindBestGenreMovie(movies, 10, Drama);

	//TODO:: Появляется исключение в строке 53 "bestMovie->Year", не знаю как исправить, 
	// сама функция работает

	cout << "The movie " << bestMovie->Title << " in genre ";
	WriteGenre(bestMovie->Genre);
	cout << " was released in " << bestMovie->Year << ". The movie lasts "
		<< bestMovie->DurationInMinutes << " minutes. Movie rating is "
		<< bestMovie->Rating << "." << endl;

	delete[] movies;
}

void Task_2_9_5()
{
	DemoMovieWithGenre();
}