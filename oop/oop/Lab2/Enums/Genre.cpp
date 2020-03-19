#include <iostream>
#include "Genre.h"
#include "../../Common/CommonLibrary.h"

using namespace std;

void WriteGenre(Genre genre)
{
	switch (genre)
	{
		case Comedy:
		{
			cout << "Comedy";
			break;
		}
		case Drama:
		{
			cout << "Drama";
			break;
		}
		case Thriller:
		{
			cout << "Thriller";
			break;
		}
		case Action:
		{
			cout << "Action";
			break;
		}
		case Horror:
		{
			cout << "Horror";
			break;
		}
		case Blockbuster:
		{
			cout << "Blockbuster";
			break;
		}
	}
}

Genre ReadGenre()
{
	cout << endl << "Enter movie genre:" << endl;
	cout << "Enter number from 0 to 6 (0 - Comedy, 1 - Drama, 2 - Thriller,"
		<< " 3 - Action, 4 - Horror, 5 - Blockbuster):" << endl;
	cout << "> ";

	switch (InputInt())
	{
		case 0:
		{
			return Comedy;
		}
		case 1:
		{
			return Drama;
		}
		case 2:
		{
			return Thriller;
		}
		case 3:
		{
			return Action;
		}
		case 4:
		{
			return Horror;
		}
		case 5:
		{
			return Blockbuster;
		}
	}
}

void DemoGenre_2_8_4()
{
	Genre genre = Action;

	Genre genres[6];
	genres[0] = Comedy;
	genres[1] = Drama;
	genres[2] = Thriller;
	genres[3] = Action;
	genres[4] = Horror;
	genres[5] = Blockbuster;
}