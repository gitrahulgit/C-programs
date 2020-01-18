/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to check whether the entered character is a digit, Upper case,
lower case or special symbol.
*********************************************************************/

#include<iostream.h>
#include<conio.h>

int main()
{
	clrscr();
	char ch;
	cout << " Enter a character : ";
	cin >> ch;
	if(ch >= 48 && ch <= 57)
		cout << "\n You entered a digit.";
	else if(ch >= 65 && ch <= 90)
		cout << "\n You entered a Upper case character.";
	else if(ch >= 97 && ch <= 122)
		cout << "\n You entered a Lower case character.";
	else
		cout << "\n You entered a special charcater.";
	getch();
	return 0;
}
/*********************************************************************
Output :
 Enter a character : $
 You entered a special charcater.
*********************************************************************/
