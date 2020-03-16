#include <iostream>
#include "Enums.h"

using namespace std;

// Перечисления из заданий 2.8.1, 2.8.2 созданы в файле Enums.h

static void DemoEnums()
{
	Color colors[6];
	colors[0] = Red;
	colors[1] = Orange;
	colors[2] = Yellow;
	colors[3] = Green;
	colors[4] = Blue;
	colors[5] = DarkBlue;

	DayOfTheWeek days[6];
	days[0] = Monday;
	days[1] = Tuesday;
	days[2] = Wednesday;
	days[3] = Thursday;
	days[4] = Friday;
	days[5] = Saturday;

	Genre genres[6];
	genres[0] = Comedy;
	genres[1] = Drama;
	genres[2] = Thriller;
	genres[3] = Action;
	genres[4] = Horror;
	genres[5] = Blockbuster;

	StudentLearningForm learningForms[6];
	learningForms[0] = FullTime;
	learningForms[1] = Evening;
	learningForms[2] = PartTime;
	learningForms[3] = Distance;
	learningForms[4] = FullTime;
	learningForms[5] = PartTime;

	SmartphoneProducers producers[6];
	producers[0] = Samsung;
	producers[1] = Apple;
	producers[2] = Xiaomi;
	producers[3] = Samsung;
	producers[4] = Nokia;
	producers[5] = Huawei;

	Season seasons[6];
	seasons[0] = Winter;
	seasons[1] = Spring;
	seasons[2] = Summer;
	seasons[3] = Summer;
	seasons[4] = Winter;
	seasons[5] = Autumn;
}