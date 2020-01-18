/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
A program to display the contents of pointers using an array of pointers.
**********************************************************************/

#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	char *ptr[5];
	ptr[0] = "BIIT";
	ptr[1] = "Computer";
	ptr[2] = "Education";
	cout << "\n " << ptr[0] << " "
		<< ptr[1] << " " << ptr[2];
	getch();
}
/*********************************************************************
Output :
 BIIT Computer Education
*********************************************************************/