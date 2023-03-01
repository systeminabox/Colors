#include "ScreenColors.h"


ScreenColors::ScreenColors()
{
}

void ScreenColors::SetTextColor(int color)
{
	SetConsoleTextAttribute(h, color);
}

void ScreenColors::SetBackgroundColor(int color)
{
	color = color + 15;
	SetConsoleTextAttribute(h, color);
}

void ScreenColors::RemoveColor()
{
	SetConsoleTextAttribute(h, defaultWhite);
}

ScreenColors::~ScreenColors()
{
}
