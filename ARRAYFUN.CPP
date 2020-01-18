/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to explain Passing Array to Function.
*********************************************************************/

#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

const int SZ = 10;

void display(int a[SZ]);

int main()
{
	clrscr();
	int age[SZ], i;
	cout << " Enter Age of 10 persons : \n";
	for(i=0 ; i<SZ ; i++)
	{
		cin >> age[i];
	}
	display(age);
	getch();
	return 0;
}

void display(int a[SZ])
{
	for (int i=0 ; i<SZ ; i++)
	{
		cout << "\n" << setw(3) << a[i];
	}
}
/*********************************************************************
Output :

*********************************************************************/

