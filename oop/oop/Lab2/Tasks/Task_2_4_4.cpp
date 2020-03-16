#include <iostream>
#include "Structures.h"

using namespace std;

void WrongPointers()
{
	Flight flight;
	Movie movie;

	Flight* pointerToFlight = &flight;
	Movie* pointerToMovie = &movie;

	/*pointerToFlight = &movie;
	pointerToMovie = &flight;*/
}