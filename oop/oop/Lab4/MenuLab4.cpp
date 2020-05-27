#pragma once
#include <iostream>
#include <conio.h>
#include "../Common/CommonLibrary.h"
#include "GeometricProgram.h"

using namespace std;

void MenuLab4()
{
	GeometricProgram geometricProgram;

	bool isBack = false;
	// TODO: А почему само меню нельзя перенести в класс GeometricProgram?
	while (!isBack)
	{
		cout << endl;
		cout << "Выберите вариант:" << endl
			<< "1) Прямоугольник;" << endl
			<< "2) Кольцо;" << endl
			<< "3) Столкновение;" << endl
			<< "0) Назад." << endl;
		cout << endl;

		switch (InputInt())
		{
			case 1:
			{
				geometricProgram.DemoRectangleWithPoint();
				break;
			}
			case 2:
			{
				geometricProgram.DemoRing();
				break;
			}
			case 3:
			{
				geometricProgram.DemoCollision();
				break;
			}
			case 0:
			{
				isBack = true;
				break;
			}
			default:
			{
				cout << "Выбран неверный вариант, попробуйте ещё раз." << endl;
				break;
			}
		}
	}
}