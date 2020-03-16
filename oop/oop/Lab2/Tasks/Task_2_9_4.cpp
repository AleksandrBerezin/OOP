#include <iostream>
#include "Enums.h"
#include "MovieWithGenre.h"

using namespace std;

int CountMoviesByGenre(Movie* movies, int count, Genre findGenre)
{
	int countGenre = 0;

	for (int i = 0; i < count; i++)
	{
		if (movies[i].Genre == findGenre)
		{
			countGenre++;
		}
	}

	return countGenre;
}

static void DemoMovieWithGenre()
{
	const int count = 10;
	Movie* movies = new Movie[count];

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

	cout << endl << "Current array:" << endl;

	//TODO:: Появляется исключение в строке 44 "i + 1", не знаю как исправить, сама функция работает

	for (int i = 0; i < count; i++)
	{
		cout << "The movie " << i + 1 << " " << movies[i].Title << " in genre ";
		WriteGenre(movies[i].Genre);
		cout << " was released in " << movies[i].Year << ". The movie lasts "
			<< movies[i].DurationInMinutes << " minutes. Movie rating is "
			<< movies[i].Rating << "." << endl;
	}

	cout << endl << "Enter finded genre:";
	Genre findedGenre = ReadGenre();
	cout << "The number of movies of the finded genre in the array: "
		<< CountMoviesByGenre(movies, count, findedGenre) << "." << endl;

	delete[] movies;
}

void Task_2_9_4()
{
	DemoMovieWithGenre();
}