#pragma once
#include <iostream>
#include <conio.h>
#include "../Common/CommonLibrary.h"
#include "GeometricProgram.h"

using namespace std;

void MenuLab4()
{
	GeometricProgram geometricProgram;
	geometricProgram.MenuGeometricProgram();
	// TODO: А почему само меню нельзя перенести в класс GeometricProgram?
}