/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to check whether the given character is alphabet, digit or 
special character using isalpha() and isdigit() functions.
*********************************************************************/

#include <iostream.h>
#include <conio.h>
#include <ctype.h>

void main()
{ 
	clrscr();
  	char ch;
  	cout << " Enter any charcter : ";
  	cin >> ch;
	int n = isalpha(ch);
  	if(n != 0)
  		cout << "\n You have entered an alphabet = " << ch;
  	int m = isdigit(ch);
	if(m != 0)
  		cout << "\n You have entered a digit = " << ch;
  	if(n == 0 && m == 0)
  		cout << "\n You have entered special character = " << ch;
	getch();
}

/*********************************************************************
Output :
 Enter any charcter : B
 You have entered an alphabet = B
*********************************************************************/



