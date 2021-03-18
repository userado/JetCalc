#include "Welcome.h"
#include <fstream> //file operations
ofstream welcomeuser; //file operations

void Welcome::VersionInfo()
{
	cout << " Welcome to " << softname << endl;
	cout << " Version: " << softversion << endl;
	cout << endl;
}

void Welcome::Credits() {
	cout << " This program is developed by " << owner << endl;
	cout << " Phone: +359897228344" << endl;
	cout << " Keybse: " << keybase << endl;
	cout << " E-mail: " << email << endl;
	cout << "Website: " << website << endl;
	cout << endl;
}
void Welcome::Manual() {
	system("xdg-open https://github.com/userado/JetCalc/blob/main/README.md");
}
