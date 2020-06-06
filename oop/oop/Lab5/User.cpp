﻿#pragma once
#include <exception>
#include "User.h"

using namespace std;

void User::SetId(int id)
{
	_id = id;
}

void User::SetLogin(string login)
{
	for (int i = 0; i < login.length(); i++)
	{
		if (login[i] == '{' || login[i] == '}' || login[i] == '<' || login[i] == '>' ||
			login[i] == '@' || login[i] == '#' || login[i] == '$' || login[i] == '%' ||
			login[i] == '^' || login[i] == '^' || login[i] == '*')
		{
			throw exception("Логин не должен содержать знаки пунктуации");
		}
	}
	_login = login;
}

void User::SetPassword(string password)
{
	_password = password;
}

int User::GetId()
{
	return _id;
}

string User::GetLogin()
{
	return _login;
}

string User::GetPassword()
{
	return _password;
}

User::User(int id, string login, string password)
{
	SetId(id);
	SetLogin(login);
	SetPassword(password);
}

bool User::IsCorrectPassword(string password)
{
	return (password == _password);
}

User* Login(User** users, int usersCount, string enteredLogin, string enteredPassword)
{
	for (int i = 0; i < usersCount; i++)
	{
		if (users[i]->GetLogin() == enteredLogin)
		{
			if (users[i]->IsCorrectPassword(enteredPassword))
			{
				return users[i];
			}
			else
			{
				throw exception("Uncorrect password");
			}
		}
	}
	return nullptr;
}