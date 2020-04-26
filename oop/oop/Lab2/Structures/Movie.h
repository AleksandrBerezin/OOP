#pragma once
#include <string>
#include "../Enums/MovieGenre.h"

using std::string;

struct Movie
{
	string Title;
	int DurationInMinutes;
	int Year;
	MovieGenre Genre;
	double Rating;
};

void WriteMovie(Movie& movie);
Movie* MakeMovie(string title, int durationInMinutes, int year, MovieGenre genre, double rating);
Movie* CopyMovie(Movie& movie);
int CountMoviesByGenre(Movie* movies, int count, MovieGenre findGenre);
Movie* FindBestGenreMovie(Movie* movies, int count, MovieGenre findGenre);
void DemoMovie_2_3_2();
void DemoMovie_2_3_3();
void DemoMovie_2_4_3();
void DemoMovie_2_7_2();
void DemoMovie_2_7_3();
void DemoMovieWithGenre_2_9_3();
void DemoMovieWithGenre_2_9_4();
void DemoMovieWithGenre_2_9_5();