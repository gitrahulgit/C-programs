/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to calculate average marks in Computer Science (cs)
of 50 students in a class.
*********************************************************************/

#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	const int size = 50;
	float cs[size];
	for(int i=0 ; i<size ; i++)
	{
		cout << "\n Enter marks of " << i+1 << " students : ";
		cin >> cs[i];
	}
	int sum = 0;
	for(int j=0 ; j<size ; j++)
	{
		sum = sum + cs[i];
	}
	int avg = sum / 50;
	cout << "\n Average marks of 50 students : "<<avg;
	getch();
}
/*********************************************************************
Output :

*********************************************************************/