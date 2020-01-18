/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to Calculate Area or Perimeter of a Circle of given radius.
*********************************************************************/

#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	float p, a, r;
	int n;
	cout << "\n Radius of circle : ";
	cin >> r;
	cout << "\n 1.  For Area of Circle.";
	cout << "\n 2.  For Perimeter of Circle.";
	cout << "\n Enter choice(1 or 2) : ";
	cin >> n;
	switch(n)
	{
		case 1:
			a = (3.14 * r * r);
			cout << "\n Area of circle is : " << a;
			break;
		case 2:
			p = (2 * 3.14 * r);
			cout << "\n Perimeter of circle is : " << p;
			break;
		default:
			cout << "\n Wrong choice.";
			break;
	}
	getch();
}
/*********************************************************************
Output :
 Radius of circle : 5
 1.  For Area of Circle.
 2.  For Perimeter of Circle.
 Enter choice(1 or 2) : 2
 Perimeter of circle is : 31.4
*********************************************************************/