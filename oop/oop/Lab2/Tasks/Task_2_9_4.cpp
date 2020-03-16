#include <iostream>
#include "Enums.h"
#include "MovieWithGenre.h"

using namespace std;

int CountMoviesByGenre(MovieWithGenre* movies, int count, Genre findGenre)
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
	MovieWithGenre* movies = new MovieWithGenre[count];

	movies[0] = *MakeMovie("Avengers", 120, 2012, Action, 7.7);
	movies[1] = *MakeMovie("Rogue", 120, 2000, Drama, 8.3);
	movies[2] = *MakeMovie("Green Mile", 120, 1999, Drama, 9.1);
	movies[3] = *MakeMovie("Shawshank Redemption", 120, 1994, Action, 9.1);
	movies[4] = *MakeMovie("Iron Man", 120, 2008, Action, 7.7);
	movies[5] = *MakeMovie("Watchmen", 120, 2009, Drama, 7.7);
	movies[6] = *MakeMovie("Spider-Man", 120, 2002, Blockbuster, 7.7);
	movies[7] = *MakeMovie("Quiet Place", 120, 2012, Horror, 7.7);
	movies[8] = *MakeMovie("Home Alone", 120, 1990, Comedy, 7.7);
	movies[9] = *MakeMovie("Man of Steel", 120, 2013, Blockbuster, 7.7);

	cout << endl << "Current array:" << endl << endl;

	for (int i = 0; i < count; i++)
	{
		cout << "The movie " << i + 1 << " " << movies[i].Title << " in genre ";
		WriteGenre(movies[i].Genre);
		cout << " was released in " << movies[i].Year << ". The movie lasts "
			<< movies[i].DurationInMinutes << " minutes. MovieWithGenre rating is "
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