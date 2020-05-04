#pragma once

enum Color
{
	Red,
	Orange,
	Yellow,
	Green,
	Blue,
	DarkBlue,
	Violet
};

void WriteColor(Color color);
Color ReadColor();
int CountColor(Color* colors, int count, Color findedColor);
void DemoColor_2_8_4();
void DemoColor_2_8_5();
void DemoColor_2_8_6();
void DemoColor_2_8_7();
void DemoColor_2_8_8();