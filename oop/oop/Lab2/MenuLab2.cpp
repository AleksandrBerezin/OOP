#pragma once
#include <iostream>
#include <conio.h>
#include "../Common/CommonLibrary.h"
#include "Enums/Color.h"
#include "Structures/FlightLab2.h"
#include "Structures/Movie.h"
#include "Structures/RectangleLab2.h"
#include "Structures/TimeLab2.h"

using namespace std;

void MenuLab2()
{
	cout << endl;
	cout << "-----------------------" << endl;
	cout << "------ Rectangle ------" << endl;
	cout << "-----------------------" << endl;
	_getch();

	PrintNumberOfTask("2.3.2");
	DemoRectangle_2_3_2();
	_getch();

	PrintNumberOfTask("2.3.3");
	DemoRectangle_2_3_3();
	_getch();

	PrintNumberOfTask("2.4.1");
	DemoRectangle_2_4_1();
	_getch();

	PrintNumberOfTask("2.4.2");
	DemoRectangle_2_4_2();
	_getch();

	PrintNumberOfTask("2.5.3");
	DemoReadAndWriteRectangles_2_5_3();
	_getch();

	PrintNumberOfTask("2.5.4");
	DemoRectangle_2_5_4();
	_getch();

	PrintNumberOfTask("2.5.5");
	DemoRectangle_2_5_5();
	_getch();

	PrintNumberOfTask("2.5.6");
	DemoRectangle_2_5_6();
	_getch();

	PrintNumberOfTask("2.7.2");
	DemoRectangle_2_7_2();
	_getch();

	PrintNumberOfTask("2.7.3");
	DemoRectangle_2_7_3();
	_getch();

	cout << endl;
	cout << "-----------------------" << endl;
	cout << "-------- Flight -------" << endl;
	cout << "-----------------------" << endl;
	_getch();

	PrintNumberOfTask("2.3.2");
	DemoFlight_2_3_2();
	_getch();

	PrintNumberOfTask("2.3.3");
	DemoFlight_2_3_3();
	_getch();

	PrintNumberOfTask("2.4.3");
	DemoFlight_2_4_3();
	_getch();

	PrintNumberOfTask("2.6.1");
	DemoDynamicFlight_2_6_1();
	_getch();

	PrintNumberOfTask("2.6.3");
	DemoDynamicFlights_2_6_3();
	_getch();

	PrintNumberOfTask("2.7.2");
	DemoFlight_2_7_2();
	_getch();

	PrintNumberOfTask("2.7.3");
	DemoFlight_2_7_3();

	cout << endl;
	cout << "-----------------------" << endl;
	cout << "-------- Movie --------" << endl;
	cout << "-----------------------" << endl;
	_getch();

	PrintNumberOfTask("2.3.2");
	DemoMovie_2_3_2();
	_getch();

	PrintNumberOfTask("2.3.3");
	DemoMovie_2_3_3();
	_getch();

	PrintNumberOfTask("2.4.3");
	DemoMovie_2_4_3();
	_getch();

	PrintNumberOfTask("2.7.2");
	DemoMovie_2_7_2();
	_getch();

	PrintNumberOfTask("2.7.3");
	DemoMovie_2_7_3();
	_getch();

	PrintNumberOfTask("2.9.3");
	DemoMovieWithGenre_2_9_3();
	_getch();

	PrintNumberOfTask("2.9.4");
	DemoMovieWithGenre_2_9_4();
	_getch();

	PrintNumberOfTask("2.9.5");
	DemoMovieWithGenre_2_9_5();
	_getch();

	cout << endl;
	cout << "-----------------------" << endl;
	cout << "--------- Time --------" << endl;
	cout << "-----------------------" << endl;
	_getch();

	PrintNumberOfTask("2.3.2");
	DemoTime_2_3_2();
	_getch();

	PrintNumberOfTask("2.3.3");
	DemoTime_2_3_3();
	_getch();

	PrintNumberOfTask("2.4.3"); 
	DemoTime_2_4_3();
	_getch();

	PrintNumberOfTask("2.7.2"); 
	DemoTime_2_7_2();
	_getch();

	PrintNumberOfTask("2.7.3"); 
	DemoTime_2_7_3();
	_getch();

	cout << endl;
	cout << "-----------------------" << endl;
	cout << "-------- Color --------" << endl;
	cout << "-----------------------" << endl;
	_getch();

	PrintNumberOfTask("2.8.5");
	DemoColor_2_8_5();
	_getch();

	PrintNumberOfTask("2.8.6");
	DemoColor_2_8_6();
	_getch();

	PrintNumberOfTask("2.8.7");
	DemoColor_2_8_7();
	_getch();

	PrintNumberOfTask("2.8.8");
	DemoColor_2_8_8();
	_getch();
}