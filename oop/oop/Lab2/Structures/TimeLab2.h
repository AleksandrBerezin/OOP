#pragma once

struct TimeLab2
{
	int Hours;
	int Minutes;
	int Seconds;
};

void WriteTime(TimeLab2& time);
TimeLab2* MakeTime(int hours, int minutes, int seconds);
TimeLab2* CopyTime(TimeLab2& time);
void DemoTime_2_3_2();
void DemoTime_2_3_3();
void DemoTime_2_4_3();
void DemoTime_2_7_2();
void DemoTime_2_7_3();