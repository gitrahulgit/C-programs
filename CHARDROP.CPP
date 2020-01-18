/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-

*********************************************************************/

#include <iostream.h>
#include <conio.h>
#include <dos.h>
#include <stdio.h>

void main()
{
	clrscr();
	int n, i, j, k;
	long x;
	char ch[25];
	cout << "\n Enter any String : ";
	gets(ch);
	i = 25;
	k = 0;
	while(ch[k] != '\0')
	{
		i = i + 1;
		j = 3;
		for(n=1 ; n<=20 ; n++)
		{
			gotoxy(i, j);
			cout << ch[k];
			gotoxy(i, j);
			delay(200);
			if(n != 20)
				cout << "  ";
			j++;
		}
		k++;
	}
	getch();
}
/*********************************************************************
Output :

*********************************************************************/
