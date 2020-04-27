#pragma once
#include <string>
#include "Song.h"

using std::string;

struct Album
{
	string Title;
	int ReleaseYear;
	Song* Songs;
	int SongsCount;
};

Album* MakeAlbum(string title, int releaseYear, Song* songs, int songsCount);
void SetTitle(Album& album, string title);
void SetReleaseYear(Album& album, int releaseYear);
void SetSongs(Album& album, Song* songs);
void SetSongsCount(Album& album, int songsCount);