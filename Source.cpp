#include "ScreenColors.h"

void main() {
	ScreenColors().SetTextColor(ScreenColors().blue);
	cout << "Hello";
	ScreenColors().RemoveColor();
}