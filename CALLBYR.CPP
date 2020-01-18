/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to explain the concept of "PASS-BY-REFERENCE" or "CALL-BY-
REFERENCE".
*********************************************************************/

#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
        int change(int&);
        int orig = 10;
        cout << "\n The original value = " << orig;
        cout << "\n Return value of functoin change() is " << change(orig) << "\n";
        cout << "\n The value after function change() is over " << orig << endl;
        getch();
}

int change(int& a)
{
     a = 20;
     return a;
}

/*********************************************************************
Output :

*********************************************************************/


