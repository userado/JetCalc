#include "Science.h"
#include "Basic.h"
#include "Welcome.h"
#include "Theme.h"
#include "Multiplaying.h"

#include <iostream>
#include <locale>
#include <cstdlib>
using namespace std;

int main(void) //the main program function
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

	//SetConsoleOutputCP(CP_UTF8); for cyrilic keyboard input
	Theme thmout;
	Science OutComplex;
	Basic option;
	Multiplaying MLTP;
	
	thmout.tabdesign(); //table design function
	Welcome msg;
	msg.VersionInfo();//prints welcome msg

	cout << "Today is:" << endl;
	system("date");
	cout << "Have a nice day!" << endl;

	int n;
	do
	{
		thmout.tabdesign();
		thmout.makespace(); cout << " MENU: \n\n";
		thmout.tabdesign();
	  thmout.makespace(); cout << " 99 - Manual.\n";
		thmout.makespace(); cout << " 0 - Exit.\n";
		thmout.makespace(); cout << " 1 - Basic finance calculation.\n";
		thmout.makespace(); cout << " 2 - Percent calculation.\n";
		thmout.makespace(); cout << " 3 - Multiplying.\n";
		thmout.makespace(); cout << " 4 - Dividing.\n";
		thmout.makespace(); cout << " 5 - Addition.\n";
		thmout.makespace(); cout << " 6 - Substraction \n";
		thmout.makespace(); cout << " 7 - Current calculation.\n";
		thmout.makespace(); cout << " 8 - Resistance calculation.\n";
		thmout.makespace(); cout << " 9 - Voltage calculation.\n";
		thmout.makespace(); cout << " 10 - Logarithm calculation.\n";
		thmout.makespace(); cout << " 11 - Exponential calculation.\n";
		thmout.makespace(); cout << " 12 - Exp2. calculation \n";
		thmout.makespace(); cout << " 13 - Show multiplication table 1-10 \n\n";
		thmout.tabdesign();
		cout << "Please, select option: "; cin >> n;
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
