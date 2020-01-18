/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to find Average Rainfall of given Six Day's Rainfall.
**********************************************************************/

#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int i;
	float rainfall[6];
	float sum = 0.0, avg;
	cout << " Enter the rainfall of six days (in cm.): ";
	for(i=0 ; i<=5 ; i++)
		cin >> rainfall[i];
	for(i=0 ; i<=5 ; i++)
	{
		sum = sum + rainfall[i];
	}
	avg = sum / 6.0;
	cout << "\n The average rainfall is = " << avg << " cm.";
	getch();
}
/*********************************************************************
Output :
 Enter the rainfall of six days (in cm.): 2.5 3.5 4.5 5.5 6.5 7.5
 The average rainfall is = 5 cm.
*********************************************************************/
