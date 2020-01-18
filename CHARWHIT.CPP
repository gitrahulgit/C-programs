/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to accept and print whether the given character is "Space" or
Not.
*********************************************************************/

#include <iostream.h>
#include <conio.h>

void main()
{ 
	clrscr();
  	char ch;
  	cout << "\N Enter any character : ";
  	cin.get(ch);
    	if(ch =='\t')
	 	cout << "\n White space '\TAB\' CHARACTER \n";
 	else if(ch == ' ')
	 	cout << "\n white space \SPACE\ character \n";
 	else
	 	cout << "\n Not a White space or new line, "
		     << "It is an other character.";
	getch();
}

/*********************************************************************
Output :

*********************************************************************/
