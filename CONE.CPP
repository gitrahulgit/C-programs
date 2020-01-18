/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to Find the Curved Surface Area(CSA), Total Surface Area(TSA)
and Volume of CONE.
*********************************************************************/

#include <iostream.h>
#include <conio.h>
#include <math.h>
#define pi 3.14159

void main()
{
	clrscr();
	float r, h, l, csa, tsa, vol, barea;
	cout << "\n Enter Radius and Height of CONE : ";
	cin >> r >> h;
	l = sqrt((r*r) + (h*h));
	csa = pi * r * l;
	barea = pi * r * r;
	tsa = pi * r * (r + l);
	vol = (1.0/3.0) * pi * r * r * h;
	cout << "\n CSA = " << csa;
	cout << "\n TSA = " << tsa;
	cout << "\n Volume = " << vol;
	cout << "\n Area of Base = " << barea;
	getch();
}
/*********************************************************************
Output :
 Enter Radius and Height of CONE : 3 4
 CSA = 47.123852
 TSA = 75.398163
 Volume = 37.699081
 Area of Base = 28.274309
*********************************************************************/
