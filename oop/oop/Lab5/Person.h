#pragma once
#include <string>

using std::string;

class Person
{
private:
	string _name;
	string _surname;
	string _patronymic;

public:
	string GetName();
	string GetSurname();
	string GetPatronymic();

	void SetName(string name);
	void SetSurname(string surname);
	void SetPatronymic(string patronymic);

	Person(string name, string surname, string patronymic);
};

void ShowName(Person* person);