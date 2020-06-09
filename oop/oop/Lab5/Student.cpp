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

Student::Student(string firstName, string lastName, string middleName, int id, int entranceYear) :
	Person(firstName, lastName, middleName)
{
	SetId(id);
	SetEntranceYear(entranceYear);
}