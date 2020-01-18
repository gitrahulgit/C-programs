/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to explain the concept of "Array of Pointers".
*********************************************************************/

#include <iostream.h>
#include <conio.h>

const int DAYS =7;

void main()
{
 	clrscr();
 	char *arrptrs[DAYS] = { 
				 "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
				 "THRUSDAY", "FRIDAY", "SATURDAY"
			      };
  	
	for(int j=0 ; j<DAYS ; j++)
		cout << arrptrs[j] <<  endl;
   	
	getch();
}

/*********************************************************************
Output :

*********************************************************************/

