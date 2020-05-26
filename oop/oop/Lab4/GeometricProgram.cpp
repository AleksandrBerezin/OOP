#pragma once
#include <iostream>
#include "GeometricProgram.h"
#include "../Lab3/Rectangle.h"
#include "Ring.h"
#include "CollisionManager.h"

using namespace std;

void GeometricProgram::DemoRing()
{
	Ring ring1(2.1, 1.2, new Point(3, 4));
	cout << endl << "Общее количество колец равно " << Ring::GetAllRingsCount() << endl;
	Ring ring2(3.1, 0.2, new Point(4, 3));
	cout << "Общее количество колец равно " << Ring::GetAllRingsCount() << endl;
	Ring ring3(1.7, 1.3, new Point(5, 4));
	cout << "Общее количество колец равно " << Ring::GetAllRingsCount() << endl;

	cout << endl << "Площадь кольца 1 равна " << ring1.GetArea() << endl;
	cout << "Площадь кольца 2 равна " << ring2.GetArea() << endl;
	cout << "Площадь кольца 3 равна " << ring3.GetArea() << endl << endl;

	try
	{
		Ring wrongRing1(-2.1, 1.2, new Point(3, 4));
	}
	catch (exception e)
	{
		cout << e.what() << endl;
	}

	try
	{
		Ring wrongRing2(2.1, -1.2, new Point(3, 4));
	}
	catch (exception e)
	{
		cout << e.what() << endl;
	}

	try
	{
		Ring wrongRing3(1.2, 2.1, new Point(3, 4));
	}
	catch (exception e)
	{
		cout << e.what() << endl;
	}

	cout << endl << "Количество колец до вызова конструктора: " << Ring::GetAllRingsCount() << endl;

	Ring* ring = new Ring(10.0, 5.0, new Point(25.0, 25.0));
	cout << "Количество колец после вызова конструктора: " << Ring::GetAllRingsCount() << endl;

	delete ring;
	cout << "Количество колец после вызова деструктора: " << Ring::GetAllRingsCount() << endl;
}

void GeometricProgram::DemoRectangleWithPoint()
{
	const int rectanglesCount = 5;

	Rectangle* rectangles[rectanglesCount];
	rectangles[0] = new Rectangle(25.4, 1.1, new Point(5.0, 10.7));
	rectangles[1] = new Rectangle(50.0, 7.3, new Point(12.0, -10.7));
	rectangles[2] = new Rectangle(4.7, 43.6, new Point(-7.0, 16.2));
	rectangles[3] = new Rectangle(9.2, 23.9, new Point(4.0, 4.1));
	rectangles[4] = new Rectangle(17.9, 38.0, new Point(-3.0, -2.1));

	cout << endl;

	for (int i = 0; i < rectanglesCount; i++)
	{
		cout << "X = " << rectangles[i]->GetCenter()->GetX()
			<< ";		Y = " << rectangles[i]->GetCenter()->GetY()
			<< ";	Length = " << rectangles[i]->GetLength()
			<< ";		Width = " << rectangles[i]->GetWidth()
			<< endl;
	}

	double averageX = 0.0;
	double averageY = 0.0;

	for (int i = 0; i < rectanglesCount; i++)
	{
		averageX += rectangles[i]->GetCenter()->GetX();
		averageY += rectangles[i]->GetCenter()->GetY();
	}

	averageX /= rectanglesCount;
	averageY /= rectanglesCount;

	cout << endl << "Cреднее значение всех центров прямоугольников: Xcenter = "
		<< averageX << "; Ycenter = " << averageY << endl;
}

void GeometricProgram::DemoCollision()
{
	Rectangle* rectangleWithCollision1 = new Rectangle(4, 3, new Point(3, 2.5));
	Rectangle* rectangleWithCollision2 = new Rectangle(6, 4, new Point(7, 5));

	PrintCollision(CollisionManager::IsCollision(*rectangleWithCollision1,
		*rectangleWithCollision2));

	Rectangle* rectangleWithoutCollision1 = new Rectangle(3, 2, new Point(2.5, 2));
	Rectangle* rectangleWithoutCollision2 = new Rectangle(5, 3, new Point(3.5, 5.5));

	PrintCollision(CollisionManager::IsCollision(*rectangleWithoutCollision1,
		*rectangleWithoutCollision2));

	Ring* ringWithCollision1 = new Ring(4, 3, new Point(6, 5));
	Ring* ringWithCollision2 = new Ring(2, 1, new Point(6, 2));

	PrintCollision(CollisionManager::IsCollision(*ringWithCollision1,
		*ringWithCollision2));

	Ring* ringWithoutCollision1 = new Ring(4, 3, new Point(6, 5));
	Ring* ringWithoutCollision2 = new Ring(2, 1, new Point(6, 5));

	PrintCollision(CollisionManager::IsCollision(*ringWithoutCollision1,
		*ringWithoutCollision2));
}

void PrintCollision(bool isCollision)
{
	if (isCollision)
	{
		cout << "Столкновение произошло." << endl;
	}
	else
	{
		cout << "Столкновение не произошло." << endl;
	}
}