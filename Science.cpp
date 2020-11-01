#include "Science.h"
#include <fstream> //file operations
ofstream science; //file operations

void Science::Exp2() {
	resExp2 = exp2(valExp2);
	cout << defpar << "Exp2 (Пр. 4.50): "; cin >> valExp2;
	cout << "Експонентната стойност от" << valExp2 << " е " << resExp2 << endl;

	//saving data to new file
	science.open("JetCalc_App_Data/Exp2_Data/Data.txt");//open file
	science << "Това са вашите данни от JetCalc операция Exp2!" << endl << endl;
	science << defpar << "Exp2: " << valExp << endl;
	science << "Експонентната стойност от" << valExp2 << " е " << resExp2 << endl;
	science.close();//close file
}

void Science::Exp() {
	resExp = exp(valExp);
	cout << defpar << "Exp (Пр. 2.00): "; cin >> valExp;
	cout << "Експонентната стойност от " << valExp << " е " << resExp << endl;

	//saving data to new file
	science.open("JetCalc_App_Data/Exp_Data/Data.txt");//open file
	science << "Това са вашите данни от JetCalc операция Exp!" << endl << endl;
	science << defpar << "Exp: " << valExp << endl;
	science << "Експонентната стойност от " << valExp << " е " << resExp << endl;
	science.close();//close file
}

void Science::Log() {
	resLog = log(valLog);
	cout << defpar << "Log (Пр. 5.00): "; cin >> valLog;
	cout << "Логаритъм от " << valLog << " е " << resLog << endl;

	//saving data to new file
	science.open("JetCalc_App_Data/Logarithm_Data/Data.txt");//open file
	science << "Това са вашите данни от JetCalc операция изчисление на логаритъм!" << endl << endl;
	science << defpar << "Log: " << valLog << endl;
	science << "Логаритъм от " << valLog << " е " << resLog << endl;
	science.close();//close file
}

void Science::Cureent() {
	cout << defpar << "U (double): "; cin >> U; cout << endl;
	cout << defpar << "R (double): "; cin >> R; cout << endl;
	I = U / R;
	cout << "Резултат: I = " << I << " Amp" << endl << endl;

	//saving data to new file
	science.open("JetCalc_App_Data/Current_Data/Data.txt");//open file
	science << "Това са вашите данни от JetCalc операция изчисление на електричество!" << endl << endl;
	science << defpar << "U (double): " << U << endl;
	science << defpar << "R (double): " << R << endl;
	science << "Резултат: I = " << I << " Amp";
	science.close();//close file
}

void Science::Resistance() {
	cout << defpar << "U (double): "; cin >> U; cout << endl;
	cout << defpar << "I (double): "; cin >> I; cout << endl;
	R = U / I;
	cout << "Резултат: R = " << R << " Ohms" << endl << endl;
}

void Science::Voltage() {
	cout << defpar << "I (double): "; cin >> I; cout << endl;
	cout << defpar << "R (double): "; cin >> R; cout << endl;
	U = I * R;
	cout << "Резултат: U = " << U << " Volts" << endl << endl;
}
