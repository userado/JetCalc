#ifndef SCIENCE_H
#define SCIENCE_H

#pragma once
#include <iostream>
#include <math.h>
using namespace std;

class Science
{
public:
	void Cureent();
	void printCur();
	void Resistance();
	void printRes();
	void Voltage();
	void printVolt();
	void Log();
	void Exp();
	void Exp2();
private:
	double I, R, U, valLog, resLog, valExp, resExp, valExp2, resExp2;
	char defpar[51] = "Въведи параметър за ";
};
#endif
