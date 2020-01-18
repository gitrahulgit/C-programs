/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-

*********************************************************************/

#include <iostream.h>
#include <conio.h>
#include <string.h>

void main()
{
	clrscr();
	int i, j, l;
	char str[25];
	cout << "\n Enter any String : ";
	cin >> str;
	l = strlen(str);
	for(i=0 ; i<l ; i++)
	{
		for(j=0 ; j<l ; j++)
		{
			if(j==l-1)
				cout << str[0];
			else
				cout << str[j+1];
		}
		cout << "\n";
	}
	getch();
}
/*********************************************************************
Output :

*********************************************************************/
