#pragma once
#include <string>

using std::string;

class Person
{
private:
	string _firstName;		// Имя
	string _lastName;		// Фамилия
	string _middleName;		// Отчество

public:
	string GetFirstName();
	string GetLastName();
	string GetMiddleName();

	void SetFirstName(string firstName);
	void SetLastName(string lastName);
	void SetMiddleName(string middleName);

	Person(string firstName, string lastName, string middleName);
};

void ShowName(Person* person);