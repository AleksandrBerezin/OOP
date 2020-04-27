#pragma once
#include <string>
#include <exception>
#include "Song.h"
#include "Genre.h"

using namespace std;

Song* MakeSong(string title, int durationSeconds, Genre genre)
{
	Song* song = new Song();
	SetTitle(*song, title);
	SetDuration(*song, durationSeconds);
	SetGenre(*song, genre);
	return song;
}

void SetTitle(Song& song, string title)
{
	song.Title = title;
}

void SetDuration(Song& song, int durationSeconds)
{
	if (durationSeconds < 1)
	{
		throw exception("Продолжительность песни должна быть больше 0.");
	}
	song.DurationSeconds = durationSeconds;
}

void SetGenre(Song& song, Genre genre)
{
	song.Genre = genre;
}