/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to display the sum of the Array elements.
**********************************************************************/
#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int sum = 0;
	int arr[5];
	cout << " Enter any five Integer Numbers : ";
	for(int i=0 ; i<=4 ; i++)
	{
		cin >> arr[i];
	}
	for(i=0 ; i<=4 ; i++)
	{
		sum = sum + arr[i];
	}
	cout << " The sum of the Array elements is " << sum;
	getch();
}
/*********************************************************************
Output :
 Enter any five Integer Numbers : 10 20 30 40 50
 The sum of the Array elements is 150
*********************************************************************/
