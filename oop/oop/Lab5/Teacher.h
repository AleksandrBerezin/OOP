#pragma once
#include "Person.h"

using std::string;

class Teacher : public Person
{
private:
	string _position;	// Должность

public:
	string GetPosition();

	void SetPosition(string position);

	Teacher(string firstName, string lastName, string middleName, string position);
};