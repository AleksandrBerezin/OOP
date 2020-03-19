#pragma once

struct Time
{
	int Hours;
	int Minutes;
	int Seconds;
};

void WriteTime(Time& time);
Time* MakeTime(int hours, int minutes, int seconds);
Time* CopyTime(Time& time);
void DemoTime_2_3_2();
void DemoTime_2_3_3();
void DemoTime_2_4_3();
void DemoTime_2_7_2();
void DemoTime_2_7_3();