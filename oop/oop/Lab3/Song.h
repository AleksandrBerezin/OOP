#pragma once
#include <string>
#include "Genre.h"

using std::string;

class Song
{
private:
	string _title;
	int _durationSeconds;
	Genre _genre;

public:
	string GetTitle();
	int GetDurationSeconds();
	Genre GetGenre();

	void SetTitle(string title);
	void SetDurationSeconds(int durationSeconds);
	void SetGenre(Genre genre);

	Song(string title, int durationSeconds, Genre genre);
	Song();
	~Song();
};