/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to explain the concept of "POINTER VARIABLE" AND "ADDRESS OF
OPERATOR".
*********************************************************************/

#include <iostream.h>
#include <conio.h>

int main()
{
	clrscr();
	int intvar = 10;
	int *intptr;
	intptr = &intvar;

	cout << "\n Location of intvar : " << &intvar;
	cout << "\n Contents of intvar : " << intvar;
	cout << "\n Location of intptr : " << &intptr;
	cout << "\n Contents of intptr : " << intptr;
	cout << "\n The value that intptr points to : " << *intptr;
	
	getch();
	return 0;
}

/*********************************************************************
Output :

*********************************************************************/
