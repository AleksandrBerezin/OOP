#pragma once
#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "User.h"
#include "PaidUser.h"
#include "Post.h"

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

	cout << endl;

	User** users = new User * [8]
	{
		new User(100000, "morkovka1995", "1995morkovka"),
		new User(100001, "ilon_mask", "X æ A-12"),
		new User(100002, "megazver", "password"),
		new User(100003, "yogurt", "ksTPQzSu"),
		new PaidUser(200000, "TheKnyazz", "JHPzPGFG"),
		new PaidUser(200001, "system_exe", "UgfkDGmU"),
		new PaidUser(200002, "RazorQ", "TBgRnbCP"),
		new PaidUser(200003, "schdub", "CetyQVID"),
	};

	string login = "megazver";
	string password = "password";
	User* loginedUser = Login(users, 8, login, password);

	cout << "Signed in as: " << loginedUser->GetLogin() << endl;

	login = "system_exe";
	password = "UgfkDGmU";
	User* loginedPaidUser = Login(users, 8, login, password);

	cout << "Signed in as: " << loginedPaidUser->GetLogin() << endl;

	for (int i = 0; i < 8; i++)
	{
		delete users[i];
	}
	delete[] users;
}