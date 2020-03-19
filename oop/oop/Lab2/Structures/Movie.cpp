#include <iostream>
#include "Movie.h"
#include "../Enums/Genre.h"

using namespace std;

void WriteMovie(Movie& movie)
{
	cout << endl << "The movie " << movie.Title << " in genre ";
	WriteGenre(movie.Genre);
	cout << " was released in " << movie.Year << ". The movie lasts "
		<< movie.DurationInMinutes << " minutes. Movie rating is "
		<< movie.Rating << "." << endl;
}

void DemoMovie_2_3_2()
{
	Movie movie;

	movie.Title = "Star Wars";
	movie.DurationInMinutes = 140;
	movie.Year = 1977;
	movie.Genre = Action;
	movie.Rating = 7.9;

	Movie movie2;

	cout << endl << "Enter movie title:" << endl << "> ";
	cin >> movie2.Title;
	cout << "Enter movie duration in minutes (positive number):" << endl << "> ";
	cin >> movie2.DurationInMinutes;
	cout << "Enter movie release year (four-digit):" << endl << "> ";
	cin >> movie2.Year;
	movie2.Genre = ReadGenre();
	cout << "Enter movie rating (from 0.0 to 10.0):" << endl << "> ";
	cin >> movie2.Rating;

	WriteMovie(movie2);
}

void DemoMovie_2_3_3()
{
	Movie movies[4];

	movies[0].Title = "Star Wars";
	movies[0].DurationInMinutes = 140;
	movies[0].Year = 1977;
	movies[0].Genre = Action;
	movies[0].Rating = 7.9;

	movies[1].Title = "Blade Runner";
	movies[1].DurationInMinutes = 120;
	movies[1].Year = 1982;
	movies[1].Genre = Thriller;
	movies[1].Rating = 8.9;

	movies[2].Title = "X-men";
	movies[2].DurationInMinutes = 104;
	movies[2].Year = 2000;
	movies[2].Genre = Action;
	movies[2].Rating = 7.4;

	movies[3].Title = "Iron Man";
	movies[3].DurationInMinutes = 126;
	movies[3].Year = 2008;
	movies[3].Genre = Action;
	movies[3].Rating = 7.9;

	cout << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << "The movie " << i + 1 << " " << movies[i].Title << " in genre ";
		WriteGenre(movies[i].Genre);
		cout << " was released in " << movies[i].Year << ". The movie lasts "
			<< movies[i].DurationInMinutes << " minutes. Movie rating is "
			<< movies[i].Rating << "." << endl;
	}
}

void DemoMovie_2_4_3()
{
	Movie movie;

	movie.Title = "Star Wars";
	movie.DurationInMinutes = 140;
	movie.Year = 1977;
	movie.Genre = Action;
	movie.Rating = 7.9;

	Movie* pointer1 = &movie;
	Movie* pointer2 = &movie;

	cout << endl << "Movie:" << endl;
	cout << "Address in first pointer: " << pointer1 << endl;
	cout << "Address in second pointer: " << pointer2 << endl;
}

Movie* MakeMovie(string title, int durationInMinutes, int year, Genre genre, double rating)
{
	Movie* movie = new Movie();
	movie->Title = title;
	movie->DurationInMinutes = durationInMinutes;
	movie->Year = year;
	movie->Genre = genre;
	movie->Rating = rating;

	return movie;
}

void DemoMovie_2_7_2()
{
	cout << endl << "Verifying that constructor function are working correctly." << endl;

	Movie* movie = MakeMovie("Star Wars", 140, 1977, Action, 7.9);
	WriteMovie(*movie);
}

Movie* CopyMovie(Movie& movie)
{
	Movie* copiedMovie = new Movie();
	copiedMovie->Title = movie.Title;
	copiedMovie->DurationInMinutes = movie.DurationInMinutes;
	copiedMovie->Year = movie.Year;
	copiedMovie->Genre = movie.Genre;
	copiedMovie->Rating = movie.Rating;

	return copiedMovie;
}

void DemoMovie_2_7_3()
{
	cout << endl << "Verifying that copy function are working correctly."
		<< endl << endl;

	cout << "Data before copying:" << endl;

	Movie movie;

	movie.Title = "Star Wars";
	movie.DurationInMinutes = 140;
	movie.Year = 1977;
	movie.Genre = Action;
	movie.Rating = 7.9;

	WriteMovie(movie);

	cout << endl << "Data after copying:" << endl;
	Movie* movie2 = CopyMovie(movie);
	WriteMovie(*movie2);

	delete movie2;
}

void DemoMovieWithGenre_2_9_3()
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

void DemoMovieWithGenre_2_9_4()
{
	const int count = 10;
	Movie* movies = new Movie[count];

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

void DemoMovieWithGenre_2_9_5()
{
	const int count = 10;
	Movie* movies = new Movie[count];

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
	Movie* bestMovie = FindBestGenreMovie(movies, count, ReadGenre());
	cout << endl << "The best movie in genre ";
	WriteGenre(bestMovie->Genre);
	cout << ":";
	WriteMovie(*bestMovie);

	delete[] movies;
}