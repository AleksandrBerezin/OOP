#pragma once
#include <string>

using std::string;

struct Rectangle
{
	double Length;
	double Width;
	string Color;
};
// TODO: в один файл со структурой (Done)
void ReadRectangle(Rectangle& rectangle);
void WriteRectangle(Rectangle& rectangle);
void Exchange(Rectangle& rectangle1, Rectangle& rectangle2);
Rectangle* FindRectangle(Rectangle* rectangles, int count);
Rectangle* FindMaxRectangle(Rectangle* rectangles, int count);
Rectangle* MakeRectangle(int length, int width, string color);
Rectangle* CopyRectangle(Rectangle& rectangle);
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