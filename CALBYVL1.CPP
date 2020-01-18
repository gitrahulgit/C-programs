/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
A program to display the contents of a variable before and after the
function is invoked using a call by value.
**********************************************************************/

#include<iostream.h>
#include<conio.h>

int func(int);

void main()
{
	clrscr();
	int n;
	n = 100;
	cout << " Value of n before function call = " << n << endl;
	func(n);
	cout << " Value of n after function call  = " << n << endl;
	getch();
}

int func(int x)
{
	int y;
	y = 10 * x;
	cout << " Value of n, Inside the function = " << y << endl;
	return (y);
}

/*********************************************************************
Output :
 Value of n before function call = 100
 Value of n before function call = 1000
 Value of n before function call = 100
*********************************************************************/