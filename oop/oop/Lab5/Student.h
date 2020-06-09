#pragma once
#include "Person.h"

using std::string;

class Student : public Person
{
private:
	int _id;			// Номер зачетной книжки
	int _entranceYear;	// Год поступления

public:
	int GetId();
	int GetEntranceYear();

	void SetId(int id);
	void SetEntranceYear(int entranceYear);

	Student(string firstName, string lastName, string middleName, int id, int entranceYear);
};