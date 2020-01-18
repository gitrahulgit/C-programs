/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to find the Average Weekly Sales.
*********************************************************************/

#include <iostream.h>
#include <conio.h>

const int SZ = 6;

void main()
{
	clrscr();
	float sales[SZ];
	cout << "\n Enter Machine sales for 6 days : ";
	for (int j=0 ; j<SZ ; j++)
	{
		cin >> sales[j];
	}
	float total = 0;
	for(j=0 ; j<SZ ; j++)
	{
		total += sales[j];
	}
	float average = total / SZ;
	cout << " Average Sales = " << average;
	getch();
}
/*********************************************************************
Output :
 Enter Machine sales for 6 days : 2 3 4 5 6 7
 Average Sales = 4.5
*********************************************************************/
