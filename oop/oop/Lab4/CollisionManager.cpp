#pragma once
#include <iostream>
#include <cmath>
#include "CollisionManager.h"
#include "../Lab3/Rectangle.h"
#include "Ring.h"

using namespace std;

bool CollisionManager::IsCollision(Rectangle& rectangle1, Rectangle& rectangle2)
{
	double dX = abs(rectangle1.GetCenter()->GetX() - rectangle2.GetCenter()->GetX());
	double dY = abs(rectangle1.GetCenter()->GetY() - rectangle2.GetCenter()->GetY());

	if ((rectangle1.GetLength() + rectangle2.GetLength()) / 2 >= dX &&
		(rectangle1.GetWidth() + rectangle2.GetWidth()) / 2 >= dY)
	{
		return true;
	}

	return false;
}

bool CollisionManager::IsCollision(Ring& ring1, Ring& ring2)
{
	double dX = ring1.GetCenter()->GetX() - ring2.GetCenter()->GetX();
	double dY = ring1.GetCenter()->GetY() - ring2.GetCenter()->GetY();
	double hypotenuse = sqrt(dX * dX + dY * dY);

	if (hypotenuse < abs(ring1.GetOutsideRadius() - ring2.GetOutsideRadius()))
	{
		return false;
	}

	if (hypotenuse <= (ring1.GetOutsideRadius() + ring2.GetOutsideRadius()))
	{
		return true;
	}
	return false;
}