#pragma once

enum MovieGenre
{
	Comedy,
	Drama,
	Thriller,
	Action,
	Horror,
	Blockbuster
};

void WriteGenre(MovieGenre genre);
MovieGenre ReadGenre();
void DemoGenre_2_8_4();