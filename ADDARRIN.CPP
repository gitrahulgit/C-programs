/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Write a program to input 5 number and add 20 to each and print them.
**********************************************************************/

#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int i;
	int num[5];
	cout << " Enter Five Integers : ";
	for(i=0 ; i<=4 ; i++)
	{
		cin >> num[i];
	}
	cout << "\n\n Entered Numbers are : ";
	for(i=0 ; i<=4 ; i++)
	{
		cout << "   " << num[i];
	}
	cout << "\n\n Increased Numbers are : ";
	for(i=0 ; i<=4 ; i++)
	{
		num[i] = num[i]+20;
		cout << "   " << num[i];
	}
	getch();
}
/*********************************************************************
Output :
 Enter Five Integers : 10 15 20 25 30
 Entered Numbers are : 10 15 20 25 30
 Increased Numbers are : 10 15 20 25 30
*********************************************************************/