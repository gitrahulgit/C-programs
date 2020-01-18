/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to find the Number of Employees getting salary Rs. 1 Lakh per
annum from their given monthly salary.
*********************************************************************/

#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	const int SZ = 5;
	float sal[SZ], an_sal;
	int count = 0;
	for(int i=0 ; i<SZ ; i++)
	{
		cout << " Enter Monthly Salary of Employee " << i+1 << " : ";
		cin >> sal[i];
	}
	for(i=0 ; i<SZ ; i++)
	{
		an_sal = sal[i] * 12;
		if(an_sal >= 100000)
			count++;
	}
	cout << count << " Employees out of " << size 
		<< " Employees are Earning more than Rs. 1 lakh per Annum.";
	
	getch();
}

/*********************************************************************
Output :

*********************************************************************/

