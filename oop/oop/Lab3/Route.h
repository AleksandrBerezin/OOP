#pragma once
#include <string>

using std::string;

struct Route
{
	int Number;
	int AverageDurationMinutes;
	int FrequencyMinutes;
	string Stations[10];
	int StationsCount;
};

void DemoRoute();
void ReadRouteFromConsole(Route& route);
void WriteRouteToConsole(Route& route);
int FindRouteTo(Route* routes, int routesCount, string station);