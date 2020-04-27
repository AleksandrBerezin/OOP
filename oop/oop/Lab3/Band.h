#pragma once
#include <string>
#include "Album.h"

using std::string;

struct Band
{
	string Title;
	string Description;
	Album* Albums;
	int AlbumsCount;

	Song* FindSong(string songTitle);
	Album* FindAlbum(Song* song);
};

Band* MakeBand(string title, string description, Album* albums, int albumsCount);
void SetTitle(Band& band, string title);
void SetDescription(Band& band, string description);
void SetAlbums(Band& band, Album* albums);
void SetAlbumsCount(Band& band, int albumsCount);
Song* GetAllSongs(Band* band, int& allSongsCount);
Song* GetAllGenreSongs(Band* band, Genre findingGenre, int& allSongsCount);
void DemoBand();