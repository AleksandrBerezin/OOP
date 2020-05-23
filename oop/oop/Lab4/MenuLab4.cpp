#pragma once
#include <iostream>
#include <conio.h>
#include "../Common/CommonLibrary.h"
#include "Ring.h"

using namespace std;

void MenuLab4()
{
	cout << endl;
	cout << "-----------------------" << endl;
	cout << "--------- Ring --------" << endl;
	cout << "-----------------------" << endl;
	_getch();

	DemoRing();
	_getch();
}