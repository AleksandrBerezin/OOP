#pragma once
#include <string>
#include "Song.h"

using std::string;

class Album
{
private:
	string _title;
	int _releaseYear;
	Song* _songs;
	int _songsCount;

public:
	string GetTitle();
	int GetReleaseYear();
	Song* GetSongs();
	int GetSongsCount();

	void SetTitle(string title);
	void SetReleaseYear(int releaseYear);
	void SetSongs(Song* songs, int songsCount);

	Album(string title, int releaseYear, Song* songs, int songsCount);
	Album();
	~Album();
};