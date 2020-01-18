/********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to find the ASCII value of a Character.
*********************************************************************/

#include <iostream.h>
#include <conio.h>

int main()
{
	clrscr();
	char one_char;
	cout << "\nEnter a character : ";
	cin >> one_char;
	cout << "The character you entered was [ " << one_char << " ]" << '\n';
	cout << "Its ASCII value is " << (int) one_char << '\n';
	getch();
	return 0;
}
/*********************************************************************
Output :
Enter a character : A
The character you entered was [ A ]
Its ASCII value is 65
*********************************************************************/
