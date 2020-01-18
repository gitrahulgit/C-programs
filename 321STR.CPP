/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program for the following Output for input string "abcd" :
	dcba
	dcb
	dc
	d
*********************************************************************/

#include <iostream.h>
#include <conio.h>
#include <string.h>

void main()
{
	clrscr();
	int i, j, k;
	char ch[20];
	cout << "\n Enter a string : ";
	cin >> ch;
	k = strlen(ch);
	for(i=0 ; i<k ; i++)
	{
		for(j=k-1 ; j>=i ; j--)
			cout << ch[j];
		cout << "\n";
	}
	getch();
}
/*********************************************************************
Output :
Enter a String : abcd
	dcba
	dcb
	dc
	d
*********************************************************************/