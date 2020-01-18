/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to Check whether the given Character is in UpperCase, LowerCase,
Digit or a Special Symbol using "ASCII" Value.
*********************************************************************/

#include <iostream.h>
#include <conio.h>

main()
{
	char c;
	clrscr();
	cout << " Enter a character : ";
	cin >> c;
	if(c >= 65 && c <= 90)
	{
		cout << "\n Character " << c << " is in Upper Case.";
	}
	else if(c >= 97 && c <= 122)
	{
		cout << "\n Character " << c << " is in Lower Case.";
	}
	else if(c >= 48 && c <= 57)
	{
		cout << "\n Character " << c << " is a Digit.";
	}
	else
	{
		cout << "\n Character " << c << " is a Special Symbol.";
	}
	getch();
	return 0;
}

/*********************************************************************
Output :
 Enter a character : B
 Character B is in Upper Case.
*********************************************************************/




