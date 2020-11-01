#include "Multiplaying.h"

void Multiplaying::ShowTable()
{
	int i, j;
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			cout.width(5);
			cout << i * j << "";
		}//j
		cout << endl;
	}//i
	cout << endl;
}
