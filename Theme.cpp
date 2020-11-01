#include "Theme.h"
#include <iostream>
using namespace std;
Theme thm;

//използва се за * между параграфите
void Theme::tabdesign()
{
	int i;
	for (i = 0; i < 60; i++)
	{
		cout << "*";
	}
	cout << endl;
}

//използван в дизайна на главното меню
void Theme::makespace()
{
	int space;
	for (space = 0; space < 10; space++) {
		cout << " ";
	}
}
