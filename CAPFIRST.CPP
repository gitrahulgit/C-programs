/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to convert first letter of each word into Capital Letter of 
the Given Sentence.
*********************************************************************/

#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
	
void main()
{
	int l, i, j;
	char a[50];
	clrscr();
	cout << "\n Enter any String : ";
	gets(a);
	cout << "\n Changed String is = " << toupper(a[0]);
	for(i=1 ; a[i]!='\0' ; i++)
	{
		if(a[i] == ' ')
		{
			cout << toupper(a[i+1]);
		}
	}
	
	l = strlen(a);
	for(j=l-1 ; a[j]!=' ' ; j--);
		cout << "\b";
	
	for(i=j+2 ; a[i]!='\0' ; i++)
	{
		cout << a[i];
	}
	getch();
}

/*********************************************************************
Output :

*********************************************************************/
