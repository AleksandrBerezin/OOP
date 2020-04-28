#pragma once
#include <iostream>
#include <string>
#include "Route.h"

using namespace std;

void DemoRoute()
{
	const int routesCount = 3;
	Route routes[routesCount];

	for (int i = 0; i < routesCount; i++)
	{
		ReadRouteFromConsole(routes[i]);
	}

	cout << endl;

	for (int i = 0; i < routesCount; i++)
	{
		WriteRouteToConsole(routes[i]);
	}

	string findedStation;
	cout << endl << "Введите название остановки для поиска маршрута: ";
	getline(cin, findedStation);

	int findedRoute = FindRouteTo(routes, routesCount, findedStation);

	if (findedRoute == -1)
	{
		cout << "Нет маршрута с данной остановкой." << endl;
	}
	else
	{
		cout << "Маршрут, проходящий через данную остановку - ";
		WriteRouteToConsole(routes[findedRoute]);
	}
}

void ReadRouteFromConsole(Route& route)
{
	int number;
	cout << endl << "Введите номер маршрута: ";
	cin >> number;

	while (number < 1)
	{
		cout << "Номер маршрута должен быть положительным. Повторите ввод." << endl;
		cout << "Введите номер маршрута: ";
		cin >> number;
	}
	route.Number = number;

	int averageDuration;
	cout << "Введите среднюю продолжительность маршрута в минутах: ";
	cin >> averageDuration;

	while (averageDuration < 1)
	{
		cout << "Cредняя продолжительность маршрута должна быть положительной. "
			<< "Повторите ввод." << endl;
		cout << "Введите среднюю продолжительность маршрута в минутах: ";
		cin >> averageDuration;
	}
	route.AverageDurationMinutes = averageDuration;

	int frequency;
	cout << "Введите частоту следования маршрута в минутах: ";
	cin >> frequency;

	while (frequency < 1)
	{
		cout << "Частота следования маршрута должна быть положительной. "
			<< "Повторите ввод." << endl;
		cout << "Введите частоту следования маршрута в минутах: ";
		cin >> frequency;
	}
	route.FrequencyMinutes = frequency;

	int stationsCount;
	cout << "Введите количество остановок: ";
	cin >> stationsCount;

	while (stationsCount < 2 || stationsCount > 10)
	{
		cout << "Количество остановок должно быть в диапазоне 2-10. "
			<< "Повторите ввод." << endl;
		cout << "Введите количество остановок: ";
		cin >> stationsCount;
	}
	route.StationsCount = stationsCount;

	cin.ignore();

	for (int i = 0; i < route.StationsCount; i++)
	{
		cout << "Введите название остановки №" << i + 1 << ": ";
		getline(cin, route.Stations[i]);
	}
}

void WriteRouteToConsole(Route& route)
{
	cout << route.Number << ": ";

	for (int i = 0; i < route.StationsCount; i++)
	{
		cout << route.Stations[i];
		if (i != route.StationsCount - 1)
		{
			cout << " ->";
		}
		else if (route.Stations[i][route.Stations[i].length() - 1] != '.')
		{
			cout << ".";
		}
		cout << " ";
	}

	cout << "Маршрут имеет продолжительность " << route.AverageDurationMinutes
		<< " мин., с частотой следования " << route.FrequencyMinutes
		<< " мин." << endl;
}

int FindRouteTo(Route* routes, int routesCount, string station)
{
	for (int i = 0; i < routesCount; i++)
	{
		for (int j = 0; j < routes[i].StationsCount; j++)
		{
			if (routes[i].Stations[j] == station)
			{
				return i;
			}
		}
	}

	return -1;
}