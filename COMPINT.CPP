/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to find Compound Interest.
*********************************************************************/

#include <iostream.h>
#include <conio.h>
#include <math.h>

void main()
{
	clrscr();
	float ci, p, r, n;
	cout << "\n Enter Principal, Rate of Interest & Time : ";
	cin >> p >> r >> n;
	ci = p * pow((1+(r/100)), n) - p;
	cout << "\n CI = " << ci << " Rs.";
	getch();
}
/*********************************************************************
Output :
 Enter Principal, Rate of Interest & Time : 2000 10 2
 CI = 420 Rs.
*********************************************************************/
