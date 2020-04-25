#pragma once
#include <iostream>
#include <string>
#include "Book.h"

using namespace std;

void DemoBook()
{
	const int booksCount = 3;
	Book books[booksCount];

	cin.ignore();

	for (int i = 0; i < booksCount; i++)
	{
		ReadBookFromConsole(books[i]);
	}

	cout << endl;

	for (int i = 0; i < booksCount; i++)
	{
		WriteBookToConsole(books[i]);
	}

	string findedAuthor;
	cout << endl << "Введите автора для поиска книги: ";
	getline(cin, findedAuthor);

	int findedBook = FindBookByAuthor(books, booksCount, findedAuthor);

	if (findedBook == -1)
	{
		cout << "Нет книги с данным автором." << endl;
	}
	else
	{
		cout << "Книга автора: ";
		WriteBookToConsole(books[findedBook]);
	}
}

void ReadBookFromConsole(Book& book)
{
	cout << endl << "Введите название книги: ";
	getline(cin, book.Title);

	cout << "Введите год издания: ";
	int publishingYear;
	cin >> publishingYear;

	while (publishingYear < 1 || publishingYear > 2020)
	{
		cout << "Год издания должен быть положительным, но не более текущего года. "
			<< "Повторите ввод."  << endl;
		cout << "Введите год издания: ";
		cin >> publishingYear;
	}
	book.PublishingYear = publishingYear;

	cout << "Введите количество страниц: ";
	int pagesCount;
	cin >> pagesCount;

	while (pagesCount < 1)
	{
		cout << "Количество страниц должно быть больше 0. Повторите ввод." << endl;
		cout << "Введите количество страниц: ";
		cin >> pagesCount;
	}
	book.PagesCount = pagesCount;

	cout << "Введите количество авторов: ";
	int authorsCount;
	cin >> authorsCount;

	while (authorsCount < 1 || authorsCount > 10)
	{
		cout << "Количество авторов должно быть в диапазоне 1-10. Повторите ввод." << endl;
		cout << "Введите количество авторов: ";
		cin >> authorsCount;
	}
	book.AuthorsCount = authorsCount;

	cin.ignore();

	for (int i = 0; i < book.AuthorsCount; i++)
	{
		cout << "Введите автора №" << i + 1 << ": ";
		getline(cin, book.Authors[i]);		
	}
}

void WriteBookToConsole(Book& book)
{
	for (int i = 0; i < book.AuthorsCount; i++)
	{
		cout << book.Authors[i];
		if (i != book.AuthorsCount - 1)
		{
			cout << ",";
		}
		else if (book.Authors[i][book.Authors[i].length() - 1] != '.')
		{
			cout << ".";
		}
		cout << " ";
	}

	cout << book.Title << ". " << book.PublishingYear << ". - " << book.PagesCount
		<< "с." << endl;
}

int FindBookByAuthor(Book* books, int booksCount, string author)
{
	for (int i = 0; i < booksCount; i++)
	{
		for (int j = 0; j < books[i].AuthorsCount; j++)
		{
			if (books[i].Authors[j] == author)
			{
				return i;
			}
		}
	}

	return -1;
}
