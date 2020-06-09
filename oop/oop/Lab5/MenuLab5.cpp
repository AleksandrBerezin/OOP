#pragma once
#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "User.h"
#include "PaidUser.h"
#include "Post.h"
#include "Product.h"
#include "PercentDiscount.h"
#include "CertificateDiscount.h"

using namespace std;

void MenuLab5()
{
	//////////// Наследование 5.1.1-5.1.7

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

	//////////// Рефакторинг с выделением базового класса 5.2.1-5.2.7

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

	////////////// Полиморфизм 5.3.1-5.3.8

	Product* products = new Product[10]
	{
		*new Product("Acer Asripe XC-830", BuildingBlock, 11999.00),
		*new Product("Sven 350W", PowerSupplyUnit, 1088.55),
		*new Product("Xilence A200", Cooler, 405.00),
		*new Product("Lenovo Ideacentre 310S-08ASR", BuildingBlock, 22500.90),
		*new Product("Philips 226E9QSB", Monitor, 9199.99),
		*new Product("Smartbuy 338 One чёрный", Mouse, 345.00),
		*new Product("GIGABYTE B450M DS3H", Motherboard, 5299.35),
		*new Product("Winard 500W", PowerSupplyUnit, 1240.99),
		*new Product("Aardwolf Performa 5X", Cooler, 1550.00),
		*new Product("Cougar VS450W", BuildingBlock, 3699.75),
	};

	int percent = 15;

	cout << endl << "Размер процентной скидки на категорию \"Материнская плата\" составляет "
		<< percent << "%" << endl;

	PercentDiscount* percentDiscount = new PercentDiscount(Motherboard, percent);
	ShowCheckWithDiscount(percentDiscount, products, 10);
	delete percentDiscount;

	int certificateSize = 500;

	cout << endl << "Размер сертификатной скидки на категорию \"Кулер\" составляет "
		<< certificateSize << " руб." << endl;

	CertificateDiscount* certificateDiscount = new CertificateDiscount(Cooler, certificateSize);
	ShowCheckWithDiscount(certificateDiscount, products, 10);
	delete certificateDiscount;

	delete[] products;
}