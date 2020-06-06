﻿#pragma once
#include <string>

using std::string;

// Post - пост в блоге пользователя с платным аккаунтом

class Post
{
	string _title;
	string _text;

public:
	void SetTitle(string title);
	void SetText(string text);

	string GetTitle();
	string GetText();

	Post(string title, string text);
};