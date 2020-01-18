/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to read words as input and find the frequency of each
character in it.
*********************************************************************/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

void main()
{
	clrscr();
	int len, i, j;
	char ch[100];
	cout << "\n Enter words (Capital Letter) : ";
	gets(ch);
	len = strlen(ch);
	for(i=65 ; i<=90 ; i++)
	{
		int c = 0;
		for(j=0 ; j<=len ; j++)
		{
			if(ch[j] == i)
			{
				c++;
			}
		}
		if(c != 0)
			cout << (char)i << "\t No.of times : " << c << "\n";
	}
	getch();
}
/*********************************************************************
Output :
Enter words (Capital Letter) : RAAJ
A	No.of times : 2
J	No.of times : 1
R	No.of times : 1
*********************************************************************/