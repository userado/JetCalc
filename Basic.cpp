#include "Basic.h"
#include <fstream> //file operations
ofstream file; //file operations

void Basic::Kalkulaciq() {
	unsigned int Value[14];
	double R[14];
	double SUM;

	cout << " ===== Enter valute parameters (BGN): ===== ";
	cout << endl << endl;

	cout << "Value for 0,01 lv.: "; cin >> Value[1];
	cout << "Value for 0,02 lv.: "; cin >> Value[2];
	cout << "Value for 0,05 lv.: "; cin >> Value[3];
	cout << "Value for 0,10 lv.: "; cin >> Value[4];
	cout << "Value for 0,20 lv.: "; cin >> Value[5];
	cout << "Value for 0,50 lv.: "; cin >> Value[6];
	cout << "Value for 1,00 lv.: "; cin >> Value[7];
	cout << "Value for 2,00 lv.: "; cin >> Value[8];
	cout << "Value for 5,00 lv.: "; cin >> Value[9];
	cout << "Value for 10,00 lv.: "; cin >> Value[10];
	cout << "Value for 20,00 lv.: "; cin >> Value[11];
	cout << "Value for 50,00 lv.: "; cin >> Value[12];
	cout << "Value for 100,00 lv.: "; cin >> Value[13];

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
	cout << " === RESULT: ===== ";
	cout << endl << endl;

	cout << "Total for 0,01 lv.: " << fixed << setprecision(2) << R[1];
	cout << endl;
	cout << "Total for 0,02 lv.: " << fixed << setprecision(2) << R[2];
	cout << endl;
	cout << "Total for 0,05 lv.: " << fixed << setprecision(2) << R[3];
	cout << endl;
	cout << "Total for 0,10 lv.: " << fixed << setprecision(2) << R[4];
	cout << endl;
	cout << "Total for 0,20 lv.: " << fixed << setprecision(2) << R[5];
	cout << endl;
	cout << "Total for 0,50 lv.: " << fixed << setprecision(2) << R[6];
	cout << endl;
	cout << "Total for 1,00 lv.: " << fixed << setprecision(2) << R[7];
	cout << endl;
	cout << "Total for 2,00 lv.: " << fixed << setprecision(2) << R[8];
	cout << endl;
	cout << "Total for 5,00 lv.: " << fixed << setprecision(2) << R[9];
	cout << endl;
	cout << "Total for 10,00 lv.: " << fixed << setprecision(2) << R[10];
	cout << endl;
	cout << "Total for 20,00 lv.: " << fixed << setprecision(2) << R[11];
	cout << endl;
	cout << "Total for 50,00 lv.: " << fixed << setprecision(2) << R[12];
	cout << endl;
	cout << "Total for 100,00 lv.: " << fixed << setprecision(2) << R[13];

	cout << endl << endl;
	cout << " === TOTAL: === " << SUM;
	cout << endl << endl;

	char BasicSave;
	cout << "Do you want to save this operation?(y/n): "; cin >> BasicSave;

	if (BasicSave == 'y' || BasicSave == 'Y')
	{
		//saving data to output file
		file.open("JetCalc_App_Data/Basic_Data/Data.txt");//write info to file
		file << "This is your data from JetCalc BGN calculation!" << endl << endl;
		file << "Value for 0,01 lv.: " << Value[1] << endl;
		file << "Value for 0,02 lv.: " << Value[2] << endl;
		file << "Value for 0,05 lv.: " << Value[3] << endl;
		file << "Value for 0,10 lv.: " << Value[4] << endl;
		file << "Value for 0,20 lv.: " << Value[5] << endl;
		file << "Value for 0,50 lv.: " << Value[6] << endl;
		file << "Value for 1,00 lv.: " << Value[7] << endl;
		file << "Value for 2,00 lv.: " << Value[8] << endl;
		file << "Value for 5,00 lv.: " << Value[9] << endl;
		file << "Value for 10,00 lv.: " << Value[10] << endl;
		file << "Value for 20,00 lv.: " << Value[11] << endl;
		file << "Value for 50,00 lv.: " << Value[12] << endl;
		file << "Value for 100,00 lv.: " << Value[13] << endl;
		file << endl << endl << "RESULT:" << endl;
		file << "Total for 0,01 lv.:" << fixed << setprecision(2) << R[1] << endl;
		file << "Total for 0,02 lv.:" << fixed << setprecision(2) << R[2] << endl;
		file << "Total for 0,05 lv.:" << fixed << setprecision(2) << R[3] << endl;
		file << "Total for 0,10 lv.:" << fixed << setprecision(2) << R[4] << endl;
		file << "Total for 0,20 lv.:" << fixed << setprecision(2) << R[5] << endl;
		file << "Total for 0,50 lv.:" << fixed << setprecision(2) << R[6] << endl;
		file << "Total for 1,00 lv.:" << fixed << setprecision(2) << R[7] << endl;
		file << "Total for 2,00 lv.:" << fixed << setprecision(2) << R[8] << endl;
		file << "Total for 5,00 lv.:" << fixed << setprecision(2) << R[9] << endl;
		file << "Total for 10,00 lv.:" << fixed << setprecision(2) << R[10] << endl;
		file << "Total for 20,00 lv.:" << fixed << setprecision(2) << R[11] << endl;
		file << "Total for 50,00 lv.:" << fixed << setprecision(2) << R[12] << endl;
		file << "Total for 100,00 lv.:" << fixed << setprecision(2) << R[13] << endl;
		file << endl;
		file << "TOTAL: " << SUM;
		file.close();//close file
		cout << "Save status: OK!" << endl;
	}//if
	else
	{
		cout << "Save status: NO!" << endl;
	}//else
}

void Basic::Procent() {
	int X, Y;
	unsigned int PER;
	const int PERCENT = 100;
	int PERres;

	cout << "Enter main value (Ex. 1500):  \n"; cin >> X;
	cout << "Enter percent (Ex. 20%):  \n"; cin >> Y;
	PER = X * Y;
	PERres = PER / PERCENT;
	cout << "Result: " << PERres;
	cout << endl;
	cout << endl;

	char ProcentSave;
	cout << "Do you want to save this operation(y/n): "; cin >> ProcentSave;

	if (ProcentSave == 'y' || ProcentSave == 'Y')
	{
		file.open("JetCalc_App_Data/Percent_Data/Data.txt");//write info to file
		file << "This is your percent calculation data!" << endl << endl;
		file << "Enter main value (Пр. 1500): " << X << endl;//save x to file
		file << "Enter percent (Пр. 20%): " << Y << endl;//save y to file
		file << "Result: " << PERres << endl;//save result to file
		file.close();//close the file
		cout << "Save status: OK!" << endl;
	}//if
	else
	{
		cout << "Save status: NO!" << endl;
	}//else
}

void Basic::Multiply() {
	int i, Mnum = 20, Num[20];
	int Mres = 1; // mutliplay elements x1 time
	cout << "For exit press 0 and hit Enter!" << endl;
	for (i = 0; i < Mnum; i++) {
		cout << "Enter value: "; cin >> Num[i];
		if (Num[i] == 0) { break; }//if
		Mres *= Num[i];
	}
	cout << "Total: " << Mres;
	cout << endl << endl;

	char MultiplaySave;
	cout << "Do you want to save this operation(y/n): "; cin >> MultiplaySave;

	if (MultiplaySave == 'y' || MultiplaySave == 'Y')
	{
		file.open("JetCalc_App_Data/Multiply_Data/Data.txt");//write info to file
		file << "This is your JetCalc multiplication data!" << endl << endl;
		file << "Total: " << Mres;//save result to file
		file.close();//close the file
		cout << "Save status: OK!" << endl;
	}//if
	else
	{
		cout << "Save status: NO!" << endl;
	}//else
}

void Basic::Division() {
	int D1, D2;
	double Dres;
	cout << "Enter value: \n"; cin >> D1;
	cout << "Enter value: \n"; cin >> D2;
	Dres = D1 / D2;
	cout << "Result: " << Dres;
	cout << "\n";
	cout << "\n";
}

void Basic::Addition() {
	int i, Anum = 100, A[100];
	int Ares = 0;
	cout << "For exit press 0 and hit Enter!" << endl;
	for (i = 0; i < Anum; i++) {
		cout << "Enter value: "; cin >> A[i];
		Ares += A[i];
		if (A[i] == 0) { break; }//if
	}//for
	cout << "Result: " << Ares;
	cout << endl << endl;

	char AdditionSave;
	cout << "Do you want to save this operation?(y/n): "; cin >> AdditionSave;

	if (AdditionSave == 'y' || AdditionSave == 'Y')
	{
		//saving data to output file
		file.open("JetCalc_App_Data/Addition_Data/Data.txt");//write info to file
		file << "This is your JetCalc addition data!" << endl << endl;
		file << "Result: " << Ares;//save result to file
		file.close();//close the file
		cout << "Save status: OK!" << endl;
	}//if
	else
	{
		cout << "Save status: NO!" << endl;
	}//else
}

void Basic::Subtraction() {
	int i, Snum = 100, ST, Temp, Sres = 0, S[100];
	cout << "For exit press 0 and hit Enter!" << endl;
	cout << "Enter the bigest value (Ex. 100): "; cin >> Temp;
	for (i = 0; i < Snum - 1; i++) {
		cout << "Enter substractor: "; cin >> S[i];
		Sres -= S[i];
		ST = Temp + Sres;
		if (S[i] == 0) { break; }//if
	}//for
	cout << "Result: " << ST;
	cout << endl << endl;

	char SubtractionSave;
	cout << "Do you want to save this operation(y/n): "; cin >> SubtractionSave;

	if (SubtractionSave == 'y' || SubtractionSave == 'Y')
	{
		//saving data to output file
		file.open("JetCalc_App_Data/Subtraction_Data/Data.txt");//write info to file
		file << "This is your JetCalc substraction data!" << endl << endl;
		file << "Result: " << ST;//save result to file
		file.close();//close the file
		cout << "Save status: OK!" << endl;
	}//if
	else
	{
		cout << "Save status: NO!" << endl;
	}//else
}
