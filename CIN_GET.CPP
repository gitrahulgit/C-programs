/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to Read Multiple Line String Terminating at " $ " sign using
function "cin.get()".
*********************************************************************/

#include <iostream.h>
#include <conio.h>

const int MAX = 200;

void main()
{
	clrscr();
	char str[MAX];
	cout << "\n Enter a String : ";
	
	cin.get(str, MAX, '$');
	
	cout << "\n Entered String is : \n" << str;
	getch();
}

/*********************************************************************
Output :

*********************************************************************/
