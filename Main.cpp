#include "Science.h"
#include "Basic.h"
#include "Welcome.h"
#include "Theme.h"
#include "Multiplaying.h"

#include <iostream>
#include <locale>
#include <cstdlib>
using namespace std;

int main(void) //главна функция, не пиптай тук
{
//creates folder for store calculcations data
// -p is for hide the errors
system("mkdir -p JetCalc_App_Data");
system("mkdir -p JetCalc_App_Data/Basic_Data");
system("mkdir -p JetCalc_App_Data/Percent_Data");
system("mkdir -p JetCalc_App_Data/Multiply_Data");
system("mkdir -p JetCalc_App_Data/Addition_Data");
system("mkdir -p JetCalc_App_Data/Subtraction_Data");
system("mkdir -p JetCalc_App_Data/Exp2_Data");
system("mkdir -p JetCalc_App_Data/Exp_Data");//not same func like exp2
system("mkdir -p JetCalc_App_Data/Logarithm_Data");
system("mkdir -p JetCalc_App_Data/Current_Data");

	//SetConsoleOutputCP(CP_UTF8); за кирилицата, не пипай
	Theme thmout;
	Science OutComplex;
	Basic option;
	Multiplaying MLTP;

	//след тази точка стартира видимата част в програмата
	thmout.tabdesign(); //не премествай, НЛО
	Welcome msg;
	msg.VersionInfo();

	cout << "Днес е:" << endl;
	system("date");
	cout << "Весел и усмихнат ден!" << endl;

	int n;
	do
	{
		thmout.tabdesign();
		thmout.makespace(); cout << " МЕНЮ: \n\n";
		thmout.tabdesign();
	  thmout.makespace(); cout << " 99 - Ръководство.\n";
		thmout.makespace(); cout << " 0 - Не прави нищо (изход).\n";
		thmout.makespace(); cout << " 1 - Обикновена финансова калкулация.\n";
		thmout.makespace(); cout << " 2 - Пресмятане на процент.\n";
		thmout.makespace(); cout << " 3 - Умножение.\n";
		thmout.makespace(); cout << " 4 - Деление.\n";
		thmout.makespace(); cout << " 5 - Събиране.\n";
		thmout.makespace(); cout << " 6 - Изваждане\n";
		thmout.makespace(); cout << " 7 - Пресмятане стойност на електричество.\n";
		thmout.makespace(); cout << " 8 - Пресметни съпротивление.\n";
		thmout.makespace(); cout << " 9 - Пресметни волтаж.\n";
		thmout.makespace(); cout << " 10 - Пресметни логаритъм.\n";
		thmout.makespace(); cout << " 11 - Пресметни експонента.\n";
		thmout.makespace(); cout << " 12 - Пресметни експонента Exp2. \n";
		thmout.makespace(); cout << " 13 - Покажи таблицата за умножение от 1-10 \n\n";
		thmout.tabdesign();
		cout << "Моля, избери опция: "; cin >> n;
		cout << "\n";

		switch (n)
		{
		case 1: option.Kalkulaciq(); break;
		case 2: option.Procent(); break;
		case 3: option.Multiply(); break;
		case 4: option.Division(); break;
		case 5: option.Addition(); break;
		case 6: option.Subtraction(); break;
		case 7: OutComplex.Cureent(); break;
		case 8: OutComplex.Resistance(); break;
		case 9: OutComplex.Voltage(); break;
		case 10: OutComplex.Log(); break;
		case 11: OutComplex.Exp(); break;
		case 12: OutComplex.Exp2(); break;
		case 13: MLTP.ShowTable(); break;
		case 99: msg.Manual(); break;
		}//switch
	}//do
	while (n != 0);
	thmout.tabdesign();
	msg.Credits();
	thmout.tabdesign();
	return(0);
}
