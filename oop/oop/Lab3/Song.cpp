#pragma once
#include <string>
#include <exception>
#include "Song.h"
#include "Genre.h"

using namespace std;

string Song::GetTitle()
{
	return this->_title;
}

int Song::GetDurationSeconds()
{
	return this->_durationSeconds;
}

Genre Song::GetGenre()
{
	return this->_genre;
}

void Song::SetTitle(string title)
{
	this->_title = title;
}

void Song::SetDurationSeconds(int durationSeconds)
{
	if (durationSeconds < 1)
	{
		throw exception("Продолжительность песни должна быть больше 0.");
	}
	this->_durationSeconds = durationSeconds;
}

void Song::SetGenre(Genre genre)
{
	this->_genre = genre;
}

Song::Song(string title, int durationSeconds, Genre genre)
{
	this->SetTitle(title);
	this->SetDurationSeconds(durationSeconds);
	this->SetGenre(genre);
}

Song::Song()
{
}

Song::~Song()
{
}