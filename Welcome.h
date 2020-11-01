#ifndef WELCOME_H
#define WELCOME_H

#pragma once
#include <iostream>
#include <string>
using namespace std;

class Welcome
{
public:
	void VersionInfo();
	void Credits();
	void Manual();
private:
	string softname = "--= JETCALC =-- ";
	string softversion = "1.0.3 (Linux)";
	string owner = "Adnan Rasim. Студент по компютърни системи и технологии в РУ 'Ангел Кънчев'. ";
	string keybase = "neongreen";
	string email = "userado@pm.me";
};
#endif
