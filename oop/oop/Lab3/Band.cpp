#pragma once
#include <string>
#include <iostream>
#include "Band.h"
#include "Album.h"
#include "Genre.h"

using namespace std;

string Band::GetTitle()
{
	return this->_title;
}

string Band::GetDescription()
{
	return this->_description;
}

Album* Band::GetAlbums()
{
	return this->_albums;
}

int Band::GetAlbumsCount()
{
	return this->_albumsCount;
}

void Band::SetTitle(string title)
{
	this->_title = title;
}

void Band::SetDescription(string description)
{
	this->_description = description;
}

void Band::SetAlbums(Album* albums)
{
	this->_albums = albums;
}

void Band::SetAlbumsCount(int albumsCount)
{
	this->_albumsCount = albumsCount;
}

Band::Band(string title, string description, Album* albums, int albumsCount)
{
	this->SetTitle(title);
	this->SetDescription(description);
	this->SetAlbums(albums);
	this->SetAlbumsCount(albumsCount);
}

Band::Band()
{
}

Band::~Band()
{
}

Song* Band::FindSong(string songTitle)
{
	for (int i = 0; i < this->GetAlbumsCount(); i++)
	{
		for (int j = 0; j < this->GetAlbums()[i].GetSongsCount(); j++)
		{
			if (this->GetAlbums()[i].GetSongs()[j].GetTitle() == songTitle)
			{
				return &this->GetAlbums()[i].GetSongs()[j];
			}
		}
	}
	return nullptr;
}

Album* Band::FindAlbum(Song* song)
{
	for (int i = 0; i < this->GetAlbumsCount(); i++)
	{
		for (int j = 0; j < this->GetAlbums()[i].GetSongsCount(); j++)
		{
			if (&this->GetAlbums()[i].GetSongs()[j] == song)
			{
				return &this->GetAlbums()[i];
			}
		}
	}
	return nullptr;
}

Song* Band::GetAllSongs(int& allSongsCount)
{
	int songsCount = 0;

	for (int i = 0; i < this->GetAlbumsCount(); i++)
	{
		for (int j = 0; j < this->GetAlbums()[i].GetSongsCount(); j++)
		{
			songsCount++;
		}
	}

	Song* allSongs = new Song[songsCount]();
	allSongsCount = songsCount;

	for (int i = 0; i < this->GetAlbumsCount(); i++)
	{
		for (int j = 0; j < this->GetAlbums()[i].GetSongsCount(); j++)
		{
			allSongs[allSongsCount - songsCount] = this->GetAlbums()[i].GetSongs()[j];
			songsCount--;
		}
	}

	return allSongs;
}

Song* Band::GetAllGenreSongs(Genre findingGenre, int& allSongsCount)
{
	int songsCount = 0;

	for (int i = 0; i < this->GetAlbumsCount(); i++)
	{
		for (int j = 0; j < this->GetAlbums()[i].GetSongsCount(); j++)
		{
			if (this->GetAlbums()[i].GetSongs()[j].GetGenre() == findingGenre)
			{
				songsCount++;
			}
		}
	}

	Song* allSongs = new Song[songsCount]();
	allSongsCount = songsCount;

	for (int i = 0; i < this->GetAlbumsCount(); i++)
	{
		for (int j = 0; j < this->GetAlbums()[i].GetSongsCount(); j++)
		{
			if (this->GetAlbums()[i].GetSongs()[j].GetGenre() == findingGenre)
			{
				allSongs[allSongsCount - songsCount] = this->GetAlbums()[i].GetSongs()[j];
				songsCount--;
			}
		}
	}

	return allSongs;
}

void DemoBand()
{
	Band* band;
	int albumsCount = 3;
	Album* albums = new Album[albumsCount]();

	int songs1Count = 4;
	Song* songs1 = new Song[songs1Count]();
	songs1[0] = *new Song("Song1", 125, Rock);
	songs1[1] = *new Song("Song7", 100, Rock);
	songs1[2] = *new Song("Song9", 160, Electronic);
	songs1[3] = *new Song("Song2", 130, HipHop);

	albums[0] = *new Album("Album1", 1988, songs1, songs1Count);

	int songs2Count = 5;
	Song* songs2 = new Song[songs2Count]();
	songs2[0] = *new Song("Song4", 120, Jazz);
	songs2[1] = *new Song("Song8", 90, Rock);
	songs2[2] = *new Song("Song3", 145, HipHop);
	songs2[3] = *new Song("Song13", 115, Electronic);
	songs2[4] = *new Song("Song10", 140, Rock);

	albums[1] = *new Album("Album2", 1995, songs2, songs2Count);

	int songs3Count = 4;
	Song* songs3 = new Song[songs3Count]();
	songs3[0] = *new Song("Song12", 100, Rock);
	songs3[1] = *new Song("Song5", 95, Rock);
	songs3[2] = *new Song("Song6", 105, Jazz);
	songs3[3] = *new Song("Song11", 85, Rock);

	albums[2] = *new Album("Album3", 2000, songs3, songs3Count);

	band = new Band("Queen", "Состав: Фредди Меркьюри, Брайан Мэй, Роджер Тейлор, Джон Дикон",
		albums, albumsCount);

	// Вывод всей информации о группе в консоль
	cout << endl << "Группа " << band->GetTitle() << ". " << band->GetDescription()
		<< ". Группа имеет " << band->GetAlbumsCount() << " альбома." << endl;

	for (int i = 0; i < band->GetAlbumsCount(); i++)
	{
		cout << endl << "Альбом " << band->GetAlbums()[i].GetTitle() << " был выпущен в "
			<< band->GetAlbums()[i].GetReleaseYear() << ". В его состав входили "
			<< band->GetAlbums()[i].GetSongsCount() << " песен." << endl;

		for (int j = 0; j < band->GetAlbums()[i].GetSongsCount(); j++)
		{
			cout << "Песня " << band->GetAlbums()[i].GetSongs()[j].GetTitle()
				<< " в жанре ";
			WriteGenre(band->GetAlbums()[i].GetSongs()[j].GetGenre());
			cout << " имеет продолжительность в "
				<< band->GetAlbums()[i].GetSongs()[j].GetDurationSeconds()
				<< " секунд." << endl;
		}
	}

	// Поиск песни
	string findingSong;
	cout << endl << "Введите название песни, которую нужно найти (например Song1): ";
	cin.ignore();
	getline(cin, findingSong);

	Song* findedSong = band->FindSong(findingSong);
	if (findedSong != nullptr)
	{
		cout << "Песня " << findingSong << " принадлежит группе " << band->GetTitle()
			<< "." << endl;

		// Поиск альбома
		Album* findedAlbum = band->FindAlbum(findedSong);
		if (findedAlbum != nullptr)
		{
			cout << "Песня является частью альбома " << findedAlbum->GetTitle()
				<< "." << endl;
		}
		else
		{
			cout << "Песня не является частью ни одного альбома." << endl;
		}
	}
	else
	{
		cout << "Песня " << findingSong << " не принадлежит группе " << band->GetTitle()
			<< "." << endl;
	}

	// Получение всех песен
	int allSongsCount;
	Song* allSongs = band->GetAllSongs(allSongsCount);
	cout << endl << "Группе " << band->GetTitle() << " принадлежит " << allSongsCount
		<< " песен." << endl;

	// Получение всех песен в жанре Rock
	int allGenreSongsCount;
	Genre findingGenre = Rock;
	Song* allGenreSongs = band->GetAllGenreSongs(findingGenre, allGenreSongsCount);
	cout << "Группе " << band->GetTitle() << " принадлежит " << allGenreSongsCount
		<< " песен в жанре ";
	WriteGenre(findingGenre);
	cout << "." << endl;
}