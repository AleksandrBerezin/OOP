#pragma once
#include <string>
#include <exception>
#include "Album.h"
#include "Song.h"

using namespace std;

Album* MakeAlbum(string title, int releaseYear, Song* songs, int songsCount)
{
	Album* album = new Album();
	SetTitle(*album, title);
	SetReleaseYear(*album, releaseYear);
	SetSongs(*album, songs);
	SetSongsCount(*album, songsCount);
	return album;
}

void SetTitle(Album& album, string title)
{
	album.Title = title;
}

void SetReleaseYear(Album& album, int releaseYear)
{
	if (releaseYear < 1)
	{
		throw exception("Год выпуска альбома должен быть положительным.");
	}
	album.ReleaseYear = releaseYear;
}

void SetSongs(Album& album, Song* songs)
{
	album.Songs = songs;
}

void SetSongsCount(Album& album, int songsCount)
{
	if (songsCount < 1)
	{
		throw exception("Количество песен в альбоме должно быть больше 0.");
	}
	album.SongsCount = songsCount;
}