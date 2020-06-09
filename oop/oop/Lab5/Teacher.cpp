#pragma once
#include "Teacher.h"

string Teacher::GetPosition()
{
	return this->_position;
}

void Teacher::SetPosition(string position)
{
	this->_position = position;
}

Teacher::Teacher(string firstName, string lastName, string middleName, string position) :
	Person(firstName, lastName, middleName)
{
	SetPosition(position);
}