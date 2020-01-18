/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to check whether the given character is alphabet, digit or 
special character using "ASCII" value.
*********************************************************************/

#include <iostream.h>
#include <conio.h>

void main()
{ 
	clrscr();
  	char ch;
  	cout << " Enter any charcter : ";
  	cin >> ch;

  	if(((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
  		cout << "\n You have entered an alphabet = " << ch;
  	else if((ch >= '0') && (ch <= '9'))
  		cout << "\n You have entered a digit = " << ch;
  	else
  		cout << "\n You have entered special character = " << ch;
	getch();
}

/*********************************************************************
Output :
 Enter any charcter : B
 You have entered an alphabet = B
*********************************************************************/



