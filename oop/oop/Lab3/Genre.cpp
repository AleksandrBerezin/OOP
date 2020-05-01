#pragma once
#include <iostream>
#include "Genre.h"

using namespace std;

// TODO: почему не в папке?
void WriteGenre(Genre genre)
{
	switch (genre)
	{
        case Rock:
        {
            cout << "Rock";
            break;
        }
        case HipHop:
        {
            cout << "HipHop";
            break;
        }
        case Electronic:
        {
            cout << "Electronic";
            break;
        }
        case Jazz:
        {
            cout << "Jazz";
            break;
        }
	}
}