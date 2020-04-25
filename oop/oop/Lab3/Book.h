#pragma once
#include <string>

using namespace std;
using std::string;

struct Book
{
	string Title;
	int PublishingYear;
	int PagesCount;
	string Authors[10];
	int AuthorsCount;
};

void DemoBook();
void ReadBookFromConsole(Book& book);
void WriteBookToConsole(Book& book);
int FindBookByAuthor(Book* books, int booksCount, string author);