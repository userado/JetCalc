#include "Welcome.h"
#include <fstream> //file operations
ofstream welcomeuser; //file operations

void Welcome::VersionInfo()
{
	cout << " Добре дошли в " << softname << endl;
	cout << " Версия: " << softversion << endl;
	cout << endl;
}

void Welcome::Credits() {
	cout << " Този продукт е създаден от " << owner << endl;
	cout << " Телефон: +359897228344" << endl;
	cout << " KEYBASE: " << keybase << endl;
	cout << " Ел. Поща: " << email << endl;
	cout << endl;
}
void Welcome::Manual() {
	system("xdg-open https://keybase.pub/neongreen/software/Linux/JetCalc/v_1_0_3/readme/");
}
