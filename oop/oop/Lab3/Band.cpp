#pragma once
#include <string>
#include <iostream>
#include "Band.h"
#include "Album.h"
#include "Genre.h"

using namespace std;

Band* MakeBand(string title, string description, Album* albums, int albumsCount)
{
	Band* band = new Band();
	SetTitle(*band, title);
	SetDescription(*band, description);
	SetAlbums(*band, albums);
	SetAlbumsCount(*band, albumsCount);
	return band;
}

void SetTitle(Band& band, string title)
{
	band.Title = title;
}

void SetDescription(Band& band, string description)
{
	band.Description = description;
}

void SetAlbums(Band& band, Album* albums)
{
	band.Albums = albums;
}

void SetAlbumsCount(Band& band, int albumsCount)
{
	band.AlbumsCount = albumsCount;
}

Song* GetAllSongs(Band* band, int& allSongsCount)
{
	int songsCount = 0;

	for (int i = 0; i < band->AlbumsCount; i++)
	{
		for (int j = 0; j < band->Albums[i].SongsCount; j++)
		{
			songsCount++;
		}
	}
		
	Song* allSongs = new Song[songsCount]();
	allSongsCount = songsCount;

	for (int i = 0; i < band->AlbumsCount; i++)
	{
		for (int j = 0; j < band->Albums[i].SongsCount; j++)
		{
			allSongs[allSongsCount - songsCount] = band->Albums[i].Songs[j];
			songsCount--;
		}
	}

	return allSongs;
}

Song* GetAllGenreSongs(Band* band, Genre findingGenre, int& allSongsCount)
{
	int songsCount = 0;

	for (int i = 0; i < band->AlbumsCount; i++)
	{
		for (int j = 0; j < band->Albums[i].SongsCount; j++)
		{
			if (band->Albums[i].Songs[j].Genre == findingGenre)
			{
				songsCount++;
			}
		}
	}

	Song* allSongs = new Song[songsCount]();
	allSongsCount = songsCount;

	for (int i = 0; i < band->AlbumsCount; i++)
	{
		for (int j = 0; j < band->Albums[i].SongsCount; j++)
		{
			if (band->Albums[i].Songs[j].Genre == findingGenre)
			{
				allSongs[allSongsCount - songsCount] = band->Albums[i].Songs[j];
				songsCount--;
			}
		}
	}

	return allSongs;
}

void DemoBand()
{
	Band band;
	int albumsCount = 3;
	Album* albums = new Album[albumsCount]();

	int songs1Count = 4;
	Song* songs1 = new Song[songs1Count]();
	songs1[0] = *MakeSong("Song1", 125, Rock);
	songs1[1] = *MakeSong("Song7", 100, Rock);
	songs1[2] = *MakeSong("Song9", 160, Electronic);
	songs1[3] = *MakeSong("Song2", 130, HipHop);

	albums[0] = *MakeAlbum("Album1", 1988, songs1, songs1Count);

	int songs2Count = 5;
	Song* songs2 = new Song[songs2Count]();
	songs2[0] = *MakeSong("Song4", 120, Jazz);
	songs2[1] = *MakeSong("Song8", 90, Rock);
	songs2[2] = *MakeSong("Song3", 145, HipHop);
	songs2[3] = *MakeSong("Song13", 115, Electronic);
	songs2[4] = *MakeSong("Song10", 140, Rock);

	albums[1] = *MakeAlbum("Album2", 1995, songs2, songs2Count);

	int songs3Count = 4;
	Song* songs3 = new Song[songs3Count]();
	songs3[0] = *MakeSong("Song12", 100, Rock);
	songs3[1] = *MakeSong("Song5", 95, Rock);
	songs3[2] = *MakeSong("Song6", 105, Jazz);
	songs3[3] = *MakeSong("Song11", 85, Rock);

	albums[2] = *MakeAlbum("Album3", 2000, songs3, songs3Count);

	band = *MakeBand("Queen", "Состав: Фредди Меркьюри, Брайан Мэй, Роджер Тейлор, Джон Дикон",
		albums, albumsCount);

	// Вывод всей информации о группе в консоль
	cout << endl << "Группа " << band.Title << ". " << band.Description << ". Группа имеет "
		<< band.AlbumsCount << " альбома." << endl;

	for (int i = 0; i < band.AlbumsCount; i++)
	{
		cout << endl << "Альбом " << band.Albums[i].Title << " был выпущен в "
			<< band.Albums[i].ReleaseYear << ". В его состав входили "
			<< band.Albums[i].SongsCount << " песен." << endl;

		for (int j = 0; j < band.Albums[i].SongsCount; j++)
		{
			cout << "Песня " << band.Albums[i].Songs[j].Title << " в жанре ";
			WriteGenre(band.Albums[i].Songs[j].Genre);
			cout << " имеет продолжительность в " << band.Albums[i].Songs[j].DurationSeconds
				<< " секунд." << endl;
		}
	}

	// Поиск песни
	string findingSong;
	cout << endl << "Введите название песни, которую нужно найти (например Song1): ";
	cin.ignore();
	getline(cin, findingSong);

	Song* findedSong = band.FindSong(findingSong);
	if (findedSong != nullptr)
	{
		cout << "Песня " << findingSong << " принадлежит группе " << band.Title
			<< "." << endl;

		// Поиск альбома
		Album* findedAlbum = band.FindAlbum(findedSong);
		if (findedAlbum != nullptr)
		{
			cout << "Песня является частью альбома " << findedAlbum->Title
				<< "." << endl;
		}
		else
		{
			cout << "Песня не является частью ни одного альбома." << endl;
		}
	}
	else
	{
		cout << "Песня " << findingSong << " не принадлежит группе " << band.Title
			<< "." << endl;
	}

	// Получение всех песен
	int allSongsCount;
	Song* allSongs = GetAllSongs(&band, allSongsCount);
	cout << endl << "Группе " << band.Title << " принадлежит " << allSongsCount
		<< " песен." << endl;

	// Получение всех песен в жанре Rock
	int allGenreSongsCount;
	Genre findingGenre = Rock;
	Song* allGenreSongs = GetAllGenreSongs(&band, findingGenre, allGenreSongsCount);
	cout << "Группе " << band.Title << " принадлежит " << allGenreSongsCount 
		<< " песен в жанре ";
	WriteGenre(findingGenre);
	cout << "." << endl;
}

Song* Band::FindSong(string songTitle)
{
	for (int i = 0; i < AlbumsCount; i++)
	{
		for (int j = 0; j < Albums[i].SongsCount; j++)
		{
			if (Albums[i].Songs[j].Title == songTitle)
			{
				return &Albums[i].Songs[j];
			}
		}
	}
	return nullptr;
}

Album* Band::FindAlbum(Song* song)
{
	for (int i = 0; i < AlbumsCount; i++)
	{
		for (int j = 0; j < Albums[i].SongsCount; j++)
		{
			if (&Albums[i].Songs[j] == song)
			{
				return &Albums[i];
			}
		}
	}
	return nullptr;
}