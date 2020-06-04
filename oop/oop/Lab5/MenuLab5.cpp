#pragma once
#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"

using namespace std;

void MenuLab5()
{
	setlocale(LC_ALL, "Russian");
	cout << endl;

	Person* person = new Person("Иванов", "Андрей", "Борисович");
	Student* student = new Student("Петров", "Николай", "Константинович", 12521, 2018);
	Teacher* teacher = new Teacher("Попов", "Александр", "Семёнович", "Профессор");

	ShowName(person);
	ShowName(student);
	ShowName(teacher);

	delete person;
	delete student;
	delete teacher;
}