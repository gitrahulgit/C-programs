/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to Check the Case of Character.
*********************************************************************/

#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	char ch;
	cout << "\n Enter a character : ";
	cin >> ch;
	if((ch >= 65) && (ch <= 90))
		cout << "\n You have entered an uppercase character.";
	else
		cout << "\n You have entered a lowercase character.";
	getch();
}
/*********************************************************************
Output :
Enter a character : C
You have entered an uppercase character.
*********************************************************************/

