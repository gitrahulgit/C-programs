/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to calculate Commission of a Salesman [using nested if-else].
*********************************************************************/

#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	float sales, comm;
	cout << "\n Enter sales made by  the salesmen : ";
	cin >> sales;
	if(sales > 5000)
		if(sales > 12000)
			if(sales > 22000)
				if(sales > 30000)
					comm = sales * 0.15;
				else
					comm = 0.10 * sales;
			else
				comm = sales * 0.07;
		else
			comm = sales * 0.03;
	else
		comm = sales * 0;
	cout << "\nThe commission is : " << comm << "\n";
	getch();
}
/*********************************************************************
Output :
Enter sales made by  the salesmen : 6000
The commission is : 180
*********************************************************************/