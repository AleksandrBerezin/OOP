#pragma once
#include <string>
#include <exception>
#include "Album.h"
#include "Song.h"

using namespace std;

string Album::GetTitle()
{
	return this->_title;
}

int Album::GetReleaseYear()
{
	return this->_releaseYear;
}

Song* Album::GetSongs()
{
	return this->_songs;
}

int Album::GetSongsCount()
{
	return this->_songsCount;
}

void Album::SetTitle(string title)
{
	this->_title = title;
}

void Album::SetReleaseYear(int releaseYear)
{
	if (releaseYear < 1)
	{
		throw exception("Год выпуска альбома должен быть положительным.");
	}
	this->_releaseYear = releaseYear;
}

void Album::SetSongs(Song* songs, int songsCount)
{
	if (songsCount < 1)
	{
		throw exception("Количество песен в альбоме должно быть больше 0.");
	}
	this->_songs = songs;
	this->_songsCount = songsCount;
}

Album::Album(string title, int releaseYear, Song* songs, int songsCount)
{
	this->SetTitle(title);
	this->SetReleaseYear(releaseYear);
	this->SetSongs(songs, songsCount);
}

Album::Album()
{
}

Album::~Album()
{
	delete[] _songs;
}