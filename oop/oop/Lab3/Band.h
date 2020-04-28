#pragma once
#include <string>
#include "Album.h"

using std::string;

class Band
{
private:
	string _title;
	string _description;
	Album* _albums;
	int _albumsCount;

public:
	string GetTitle();
	string GetDescription();
	Album* GetAlbums();
	int GetAlbumsCount();

	void SetTitle(string title);
	void SetDescription(string description);
	void SetAlbums(Album* albums);
	void SetAlbumsCount(int albumsCount);

	Band(string title, string description, Album* albums, int albumsCount);
	Band();
	~Band();

	Song* FindSong(string songTitle);
	Album* FindAlbum(Song* song);
	Song* GetAllSongs(int& allSongsCount);
	Song* GetAllGenreSongs(Genre findingGenre, int& allSongsCount);
};

void DemoBand();