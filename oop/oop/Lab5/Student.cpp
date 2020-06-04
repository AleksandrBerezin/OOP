#pragma once
#include "Student.h"

int Student::GetId()
{
	return this->_id;
}

int Student::GetEntranceYear()
{
	return this->_entranceYear;
}

void Student::SetId(int id)
{
	this->_id = id;
}

void Student::SetEntranceYear(int entranceYear)
{
	this->_entranceYear = entranceYear;
}

Student::Student(string name, string surname, string patronymic, int id, int entranceYear) :
	Person(name, surname, patronymic)
{
	SetId(id);
	SetEntranceYear(entranceYear);
}