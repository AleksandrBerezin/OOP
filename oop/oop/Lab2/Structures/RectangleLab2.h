#pragma once
#include <string>

using std::string;

struct RectangleLab2
{
	double Length;
	double Width;
	string Color;
};

void ReadRectangle(RectangleLab2& rectangle);
void WriteRectangle(RectangleLab2& rectangle);
void Exchange(RectangleLab2& rectangle1, RectangleLab2& rectangle2);
RectangleLab2* FindRectangle(RectangleLab2* rectangles, int count);
RectangleLab2* FindMaxRectangle(RectangleLab2* rectangles, int count);
RectangleLab2* MakeRectangle(int length, int width, string color);
RectangleLab2* CopyRectangle(RectangleLab2& rectangle);
void DemoRectangle_2_3_2();
void DemoRectangle_2_3_3();
void DemoRectangle_2_4_1();
void DemoRectangle_2_4_2();
void DemoReadAndWriteRectangles_2_5_3();
void DemoRectangle_2_5_4();
void DemoRectangle_2_5_5();
void DemoRectangle_2_5_6();
void DemoRectangle_2_7_2();
void DemoRectangle_2_7_3();