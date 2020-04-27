#pragma once
#include <string>
#include "Genre.h"

using std::string;

struct Song
{
	string Title;
	int DurationSeconds;
	Genre Genre;
};

Song* MakeSong(string title, int durationSeconds, Genre genre);
void SetTitle(Song& song, string title);
void SetDuration(Song& song, int durationSeconds);
void SetGenre(Song& song, Genre genre);