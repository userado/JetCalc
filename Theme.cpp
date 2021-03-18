#include "Theme.h"
#include <iostream>
using namespace std;
Theme thm;

//used * between lines
void Theme::tabdesign()
{
	int i;
	for (i = 0; i < 60; i++)
	{
		cout << "*";
	}
	cout << endl;
}

//uded for main menu design
void Theme::makespace()
{
	int space;
	for (space = 0; space < 10; space++) {
		cout << " ";
	}
}
