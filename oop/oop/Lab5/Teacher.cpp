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

Teacher::Teacher(string name, string surname, string patronymic, string position) :
	Person(name, surname, patronymic)
{
	SetPosition(position);
}