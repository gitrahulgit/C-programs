/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to illustrate a function returning a pointer.
*********************************************************************/

#include<iostream.h>
#include<conio.h>

int *big(int&, int&);

void main()
{
	clrscr();
	int a, b, *c;
	cout << "\n Enter two integers : ";
	cin >> a >> b;
	c = big(a, b);
	cout << "\n The bigger value is = " << *c << "\n";
	getch();
}

int *big(int &x, int &y)
{
	if( x > y )
		return (&x);
	else
		return (&y);
}
/*********************************************************************
Output :
 Enter two integers : 20 10
 The Bigger value is = 20
*********************************************************************/
