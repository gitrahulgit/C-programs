/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to find Area of Circle.
*********************************************************************/

#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	float rad;
	const float pi = 3.14159;
	cout << " Enter radius of circle : ";
	cin >> rad;
	float area=pi*rad*rad;
	cout << "\n Area of Circle is = " << area << '\n';
	getch();
}
/*********************************************************************
Output :
 Enter radius of circle : 5
 Area of Circle is = 78.539749
*********************************************************************/
