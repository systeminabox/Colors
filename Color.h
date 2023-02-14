#pragma once
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
class Colors
{
public:
	
	int blue = 1;
	int green = 2;
	int cyan = 3;
	int red = 4;
	int purple = 5;
	int darkYellow = 6;
	int white = 7;
	int defaultWhite = 7;
	int gray = 8;
	int grey = 8;
	int blueBright = 9;
	int greenBright = 10;
	int cyanBright = 11;
	int redBright = 12;
	int pink = 13;
	int yellow = 14;
	int whiteBright = 15;



	Colors();
	void SetTextColor(int color);
	void SetBackgroundColor(int color);
	void RemoveColor();
	~Colors();

private:

};

Colors::Colors()
{
}

inline void Colors::SetTextColor(int color)
{
	SetConsoleTextAttribute(h, color);
}

inline void Colors::SetBackgroundColor(int color)
{
	color = color + 15;
	SetConsoleTextAttribute(h, color);
}

inline void Colors::RemoveColor()
{
	SetConsoleTextAttribute(h, defaultWhite);
}

Colors::~Colors()
{
}
void main();