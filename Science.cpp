#include "Science.h"
#include <fstream> //file operations
ofstream science; //file operations

void Science::Exp2() {
	resExp2 = exp2(valExp2);
	cout << defpar << "Exp2 (Ex. 4.50): "; cin >> valExp2;
	cout << "Exponential value of" << valExp2 << " is " << resExp2 << endl;

	//saving data to new file
	science.open("JetCalc_App_Data/Exp2_Data/Data.txt");//open file
	science << "This is your JetCalc Exp2 calculation data!" << endl << endl;
	science << defpar << "Exp2: " << valExp << endl;
	science << "Exponential value of" << valExp2 << " is " << resExp2 << endl;
	science.close();//close file
}

void Science::Exp() {
	resExp = exp(valExp);
	cout << defpar << "Exp (Ex. 2.00): "; cin >> valExp;
	cout << "Exponential valie of " << valExp << " is " << resExp << endl;

	//saving data to new file
	science.open("JetCalc_App_Data/Exp_Data/Data.txt");//open file
	science << "This is your JetCalc Exp calculation data!" << endl << endl;
	science << defpar << "Exp: " << valExp << endl;
	science << "Exponential valie of " << valExp << " is " << resExp << endl;
	science.close();//close file
}

void Science::Log() {
	resLog = log(valLog);
	cout << defpar << "Log (Ex. 5.00): "; cin >> valLog;
	cout << "Logarithm of " << valLog << " is " << resLog << endl;

	//saving data to new file
	science.open("JetCalc_App_Data/Logarithm_Data/Data.txt");//open file
	science << "This is your JetCalc Logarithm calculation data!" << endl << endl;
	science << defpar << "Log: " << valLog << endl;
	science << "Logarithm of " << valLog << " is " << resLog << endl;
	science.close();//close file
}

void Science::Cureent() {
	cout << defpar << "U (double): "; cin >> U; cout << endl;
	cout << defpar << "R (double): "; cin >> R; cout << endl;
	I = U / R;
	cout << "Result: I = " << I << " Amp" << endl << endl;

	//saving data to new file
	science.open("JetCalc_App_Data/Current_Data/Data.txt");//open file
	science << "This is your JetCalc current calculation data!" << endl << endl;
	science << defpar << "U (double): " << U << endl;
	science << defpar << "R (double): " << R << endl;
	science << "Result: I = " << I << " Amp";
	science.close();//close file
}

void Science::Resistance() {
	cout << defpar << "U (double): "; cin >> U; cout << endl;
	cout << defpar << "I (double): "; cin >> I; cout << endl;
	R = U / I;
	cout << "Result: R = " << R << " Ohms" << endl << endl;
}

void Science::Voltage() {
	cout << defpar << "I (double): "; cin >> I; cout << endl;
	cout << defpar << "R (double): "; cin >> R; cout << endl;
	U = I * R;
	cout << "Result: U = " << U << " Volts" << endl << endl;
}
