/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to explain the Concept of Menu Operated Program Using "SWITCH-CASE".
*********************************************************************/

#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	const float PI = 3.14159;
	float a, p, r;
	int n;
	
	cout << " ********** MAIN MENU ********** \n";
	cout << " 1. To calculate Area of Circle.\n";
	cout << " 2. To calculate Perimeter of Circle.\n";
	cout << " Enter choice (1or2) : ";
	cin >> n;
	cout << " Enter the radius : ";
	cin >> r;
	
	switch(n)
	{
	 	case 1 : 
			a = PI * r * r;
		 	cout << " Area of circle is = " << a;
		 	break;
		case 2 :
			p = 2 * PI * r;
		 	cout << " Perimeter of circle is = " << p;
		 	break;
		default :
			cout << " Wrong choice.";
 	}
	getch();
}

/*********************************************************************
Output :

*********************************************************************/
