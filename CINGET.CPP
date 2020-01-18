/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to explain 'cin.get()' library function.
*********************************************************************/

#include <iostream.h>
#include <conio.h>

const int max = 50;

void main()
{
	clrscr();
	char str[max];
	cout << "\n Enter a String : ";
	cin.get(str, max);
	cout << "\n You entered = " << str;
	getch();
}
/*********************************************************************
Output :
 Enter a String : BIIT Computer Education.
 You entered = BIIT Computer Education.
*********************************************************************/
