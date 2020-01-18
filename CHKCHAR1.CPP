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
	cout << " Enter a Character : ";
	cin >> ch;
	if(((ch>='A') && (ch<='Z')) || ((ch>='a') && (ch<='z')))
		cout << " You entered an Alphabet" << "\n";
	else if(ch >= '0' && ch <= '9')
		cout << " You  entered a Digit." << endl;
	else
		cout << " You  entered Character other than"
			<< " Alphabets and Digits." << endl;
	getch();
}

/*********************************************************************
Output :

*********************************************************************/
