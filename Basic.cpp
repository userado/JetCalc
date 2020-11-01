#include "Basic.h"
#include <fstream> //file operations
ofstream file; //file operations

void Basic::Kalkulaciq() {
	unsigned int Value[14];
	double R[14];
	double SUM;

	cout << " ===== Въведи параметри за изчисление: ===== ";
	cout << endl << endl;

	cout << "Въведи стойност за 0,01 лв.: "; cin >> Value[1];
	cout << "Въведи стойност за 0,02 лв.: "; cin >> Value[2];
	cout << "Въведи стойност за 0,05 лв.: "; cin >> Value[3];
	cout << "Въведи стойност за 0,10 лв.: "; cin >> Value[4];
	cout << "Въведи стойност за 0,20 лв.: "; cin >> Value[5];
	cout << "Въведи стойност за 0,50 лв.: "; cin >> Value[6];
	cout << "Въведи стойност за 1,00 лв.: "; cin >> Value[7];
	cout << "Въведи стойност за 2,00 лв.: "; cin >> Value[8];
	cout << "Въведи стойност за 5,00 лв.: "; cin >> Value[9];
	cout << "Въведи стойност за 10,00 лв.: "; cin >> Value[10];
	cout << "Въведи стойност за 20,00 лв.: "; cin >> Value[11];
	cout << "Въведи стойност за 50,00 лв.: "; cin >> Value[12];
	cout << "Въведи стойност за 100,00 лв.: "; cin >> Value[13];

	R[1] = Value[1] * 0.01;
	R[2] = Value[2] * 0.02;
	R[3] = Value[3] * 0.05;
	R[4] = Value[4] * 0.10;
	R[5] = Value[5] * 0.20;
	R[6] = Value[6] * 0.50;
	R[7] = Value[7] * 1.00;
	R[8] = Value[8] * 2.00;
	R[9] = Value[9] * 5.00;
	R[10] = Value[10] * 10.00;
	R[11] = Value[11] * 20.00;
	R[12] = Value[12] * 50.00;
	R[13] = Value[13] * 100.00;

	SUM = R[1] + R[2] + R[3] + R[4] + R[5] + R[6] + R[7] + R[8] + R[9] + R[10] + R[11] + R[12] + R[13];

	cout << endl;
	cout << " === РЕЗУЛТАТ ===== ";
	cout << endl << endl;

	cout << "Резултат за 0,01 лв.: " << fixed << setprecision(2) << R[1];
	cout << endl;
	cout << "Резултат за 0,02 лв.: " << fixed << setprecision(2) << R[2];
	cout << endl;
	cout << "Резултат за 0,05 лв.: " << fixed << setprecision(2) << R[3];
	cout << endl;
	cout << "Резултат за 0,10 лв.: " << fixed << setprecision(2) << R[4];
	cout << endl;
	cout << "Резултат за 0,20 лв.: " << fixed << setprecision(2) << R[5];
	cout << endl;
	cout << "Резултат за 0,50 лв.: " << fixed << setprecision(2) << R[6];
	cout << endl;
	cout << "Резултат за 1,00 лв.: " << fixed << setprecision(2) << R[7];
	cout << endl;
	cout << "Резултат за 2,00 лв.: " << fixed << setprecision(2) << R[8];
	cout << endl;
	cout << "Резултат за 5,00 лв.: " << fixed << setprecision(2) << R[9];
	cout << endl;
	cout << "Резултат за 10,00 лв.: " << fixed << setprecision(2) << R[10];
	cout << endl;
	cout << "Резултат за 20,00 лв.: " << fixed << setprecision(2) << R[11];
	cout << endl;
	cout << "Резултат за 50,00 лв.: " << fixed << setprecision(2) << R[12];
	cout << endl;
	cout << "Резултат за 100,00 лв.: " << fixed << setprecision(2) << R[13];

	cout << endl << endl;
	cout << " === ОБЩО: === " << SUM;
	cout << endl << endl;

	char BasicSave;
	cout << "Искате ли да запишете тази процедура?(y/n): "; cin >> BasicSave;

	if (BasicSave == 'y' || BasicSave == 'Y')
	{
		//saving data to output file
		file.open("JetCalc_App_Data/Basic_Data/Data.txt");//write info to file
		file << "Това са данните от изчислението с JetCalc опция обикновено изчисление!" << endl << endl;
		file << "Въведи стойност за 0,01 лв.: " << Value[1] << endl;
		file << "Въведи стойност за 0,02 лв.: " << Value[2] << endl;
		file << "Въведи стойност за 0,05 лв.: " << Value[3] << endl;
		file << "Въведи стойност за 0,10 лв.: " << Value[4] << endl;
		file << "Въведи стойност за 0,20 лв.: " << Value[5] << endl;
		file << "Въведи стойност за 0,50 лв.: " << Value[6] << endl;
		file << "Въведи стойност за 1,00 лв.: " << Value[7] << endl;
		file << "Въведи стойност за 2,00 лв.: " << Value[8] << endl;
		file << "Въведи стойност за 5,00 лв.: " << Value[9] << endl;
		file << "Въведи стойност за 10,00 лв.: " << Value[10] << endl;
		file << "Въведи стойност за 20,00 лв.: " << Value[11] << endl;
		file << "Въведи стойност за 50,00 лв.: " << Value[12] << endl;
		file << "Въведи стойност за 100,00 лв.: " << Value[13] << endl;
		file << endl << endl << "РЕЗУЛТАТ:" << endl;
		file << "Резултат за 0,01 лв.:" << fixed << setprecision(2) << R[1] << endl;
		file << "Резултат за 0,02 лв.:" << fixed << setprecision(2) << R[2] << endl;
		file << "Резултат за 0,05 лв.:" << fixed << setprecision(2) << R[3] << endl;
		file << "Резултат за 0,10 лв.:" << fixed << setprecision(2) << R[4] << endl;
		file << "Резултат за 0,20 лв.:" << fixed << setprecision(2) << R[5] << endl;
		file << "Резултат за 0,50 лв.:" << fixed << setprecision(2) << R[6] << endl;
		file << "Резултат за 1,00 лв.:" << fixed << setprecision(2) << R[7] << endl;
		file << "Резултат за 2,00 лв.:" << fixed << setprecision(2) << R[8] << endl;
		file << "Резултат за 5,00 лв.:" << fixed << setprecision(2) << R[9] << endl;
		file << "Резултат за 10,00 лв.:" << fixed << setprecision(2) << R[10] << endl;
		file << "Резултат за 20,00 лв.:" << fixed << setprecision(2) << R[11] << endl;
		file << "Резултат за 50,00 лв.:" << fixed << setprecision(2) << R[12] << endl;
		file << "Резултат за 100,00 лв.:" << fixed << setprecision(2) << R[13] << endl;
		file << endl;
		file << "ОБЩО: " << SUM;
		file.close();//close file
		cout << "Записът е извършен!" << endl;
	}//if
	else
	{
		cout << "Записът е отказан!" << endl;
	}//else
}

void Basic::Procent() {
	int X, Y;
	unsigned int PER;
	const int PERCENT = 100;
	int PERres;

	cout << "Въведи основната стойност (Пр. 1500):  \n"; cin >> X;
	cout << "Въведи процент (Пр. 20%):  \n"; cin >> Y;
	PER = X * Y;
	PERres = PER / PERCENT;
	cout << "Резултат: " << PERres;
	cout << endl;
	cout << endl;

	char ProcentSave;
	cout << "Искате ли да запишете тази процедура??(y/n): "; cin >> ProcentSave;

	if (ProcentSave == 'y' || ProcentSave == 'Y')
	{
		file.open("JetCalc_App_Data/Percent_Data/Data.txt");//write info to file
		file << "Това са вашите данни от JetCalc пресмятане стойност на процент!" << endl << endl;
		file << "Въведи основната стойност (Пр. 1500): " << X << endl;//save x to file
		file << "Въведи процент (Пр. 20%): " << Y << endl;//save y to file
		file << "Резултат: " << PERres << endl;//save result to file
		file.close();//close the file
		cout << "Записът е извършен!" << endl;
	}//if
	else
	{
		cout << "Записът е отказан!" << endl;
	}//else
}

void Basic::Multiply() {
	int i, Mnum = 20, Num[20];
	int Mres = 1; // mutliplay elements x1 time
	cout << "За край въведете стойност 0 и натиснете Enter!" << endl;
	for (i = 0; i < Mnum; i++) {
		cout << "Въведи стойност: "; cin >> Num[i];
		if (Num[i] == 0) { break; }//if
		Mres *= Num[i];
	}
	cout << "Общо: " << Mres;
	cout << endl << endl;

	char MultiplaySave;
	cout << "Искате ли да запишете тази процедура?(y/n): "; cin >> MultiplaySave;

	if (MultiplaySave == 'y' || MultiplaySave == 'Y')
	{
		file.open("JetCalc_App_Data/Multiply_Data/Data.txt");//write info to file
		file << "Това са вашите данни от JetCalc операция умножение!" << endl << endl;
		file << "Total: " << Mres;//save result to file
		file.close();//close the file
		cout << "Записът е извършен!" << endl;
	}//if
	else
	{
		cout << "Записът е отказан!" << endl;
	}//else
}

void Basic::Division() {
	int D1, D2;
	double Dres;
	cout << "Въведете стойност: \n"; cin >> D1;
	cout << "Въведете стойност: \n"; cin >> D2;
	Dres = D1 / D2;
	cout << "Резултат: " << Dres;
	cout << "\n";
	cout << "\n";
}

void Basic::Addition() {
	int i, Anum = 100, A[100];
	int Ares = 0;
	cout << "За край въведете стойност 0 и натиснете Enter!" << endl;
	for (i = 0; i < Anum; i++) {
		cout << "Въведете стойност: "; cin >> A[i];
		Ares += A[i];
		if (A[i] == 0) { break; }//if
	}//for
	cout << "Общо: " << Ares;
	cout << endl << endl;

	char AdditionSave;
	cout << "Искате ли да запишете тази процедура?(y/n): "; cin >> AdditionSave;

	if (AdditionSave == 'y' || AdditionSave == 'Y')
	{
		//saving data to output file
		file.open("JetCalc_App_Data/Addition_Data/Data.txt");//write info to file
		file << "Това са вашите данни от JetCalc операция събиране!" << endl << endl;
		file << "Общо: " << Ares;//save result to file
		file.close();//close the file
		cout << "Записът е извършен!" << endl;
	}//if
	else
	{
		cout << "Записът е отказан!" << endl;
	}//else
}

void Basic::Subtraction() {
	int i, Snum = 100, ST, Temp, Sres = 0, S[100];
	cout << "За край въведете стойност 0 и натиснете Enter!" << endl;
	cout << "Въведете най-голямата стойност(Пр. 100): "; cin >> Temp;
	for (i = 0; i < Snum - 1; i++) {
		cout << "Въведете сума за изваждане: "; cin >> S[i];
		Sres -= S[i];
		ST = Temp + Sres;
		if (S[i] == 0) { break; }//if
	}//for
	cout << "Общо: " << ST;
	cout << endl << endl;

	char SubtractionSave;
	cout << "Искате ли да запишете тази процедура?(y/n): "; cin >> SubtractionSave;

	if (SubtractionSave == 'y' || SubtractionSave == 'Y')
	{
		//saving data to output file
		file.open("JetCalc_App_Data/Subtraction_Data/Data.txt");//write info to file
		file << "Това са вашите данни от JetCalc операция изваждане!" << endl << endl;
		file << "Общо: " << ST;//save result to file
		file.close();//close the file
		cout << "Записът е извършен!" << endl;
	}//if
	else
	{
		cout << "Записът е отказан!" << endl;
	}//else
}
