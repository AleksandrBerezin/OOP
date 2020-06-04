#pragma once
#include <iostream>
#include "Person.h"

using namespace std;

string Person::GetName()
{
	return this->_name;
}

string Person::GetSurname()
{
	return this->_surname;
}

string Person::GetPatronymic()
{
	return this->_patronymic;
}

void Person::SetName(string name)
{
	this->_name = name;
}

void Person::SetSurname(string surname)
{
	this->_surname = surname;
}

void Person::SetPatronymic(string patronymic)
{
	this->_patronymic = patronymic;
}

Person::Person(string name, string surname, string patronymic)
{
	SetName(name);
	SetSurname(surname);
	SetPatronymic(patronymic);
}

void ShowName(Person* person)
{
	cout << person->GetName() << " " << person->GetSurname() << " " << person->GetPatronymic() 
		<< endl;
}