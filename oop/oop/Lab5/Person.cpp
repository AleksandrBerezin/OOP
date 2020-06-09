#pragma once
#include <iostream>
#include "Person.h"

using namespace std;

string Person::GetFirstName()
{
	return this->_firstName;
}

string Person::GetLastName()
{
	return this->_lastName;
}

string Person::GetMiddleName()
{
	return this->_middleName;
}

void Person::SetFirstName(string firstName)
{
	this->_firstName = firstName;
}

void Person::SetLastName(string lastName)
{
	this->_lastName = lastName;
}

void Person::SetMiddleName(string middleName)
{
	this->_middleName = middleName;
}

Person::Person(string firstName, string lastName, string middleName)
{
	SetFirstName(firstName);
	SetLastName(lastName);
	SetMiddleName(middleName);
}

void ShowName(Person* person)
{
	cout << person->GetFirstName() << " " << person->GetLastName() << " " << person->GetMiddleName() 
		<< endl;
}