/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to find the Average Sales of a Salesman in the given week.
*********************************************************************/

#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void main()
{
	clrscr();
	const int SZ = 7;
	float sales[SZ], avg = 0, total = 0;
	for(int i=0 ; i<SZ ; i++)
	{
		cout << " Enter Sales made on day-" << i+1 << " : ";
		cin >> sales[i];
		total += sales[i];
	}
	avg = total / size;
	cout << "\n Total Sales   = " << total << endl;
	cout << " Average sales = " << avg << endl;
	getch();
}

/*********************************************************************
Output :

*********************************************************************/

