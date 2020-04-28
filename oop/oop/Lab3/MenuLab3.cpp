#pragma once
#include <iostream>
#include <conio.h>
#include "../Common/CommonLibrary.h"
#include "Book.h"
#include "Route.h"
#include "Rectangle.h"
#include "Flight.h"
#include "Band.h"

using namespace std;

void MenuLab3()
{
	cout << endl;
	cout << "-----------------------" << endl;
	cout << "--------- Book --------" << endl;
	cout << "-----------------------" << endl;
	_getch();

	DemoBook();
	_getch();

	cout << endl;
	cout << "-----------------------" << endl;
	cout << "-------- Route --------" << endl;
	cout << "-----------------------" << endl;
	_getch();

	DemoRoute();
	_getch();

	cout << endl;
	cout << "-----------------------" << endl;
	cout << "-- Rectangle, Point ---" << endl;
	cout << "-----------------------" << endl;
	_getch();

	DemoRectangleWithPoint();
	_getch();

	cout << endl;
	cout << "-----------------------" << endl;
	cout << "----- Flight, Time ----" << endl;
	cout << "-----------------------" << endl;
	_getch();

	DemoFlightWithTime();
	_getch();

	cout << endl;
	cout << "-----------------------" << endl;
	cout << "-- Band, Album, Song --" << endl;
	cout << "-----------------------" << endl;
	_getch();

	DemoBand();
	_getch();
}