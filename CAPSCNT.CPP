/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Write a program to read a string and print out the following :
(i)  No. of capital letters.
(ii) No. of small alphabets and
(ii) No. of non alphabets.
*********************************************************************/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

void main()
{
	clrscr();
	int i, j, n, c = 0, s = 0, o = 0;
	char ch[35];
	cout << "\n Enter a String : ";
	gets(ch);
	n = strlen(ch);
	for(i=0 ; i<n ; i++)
	{
		if(ch[i] >= 65 && ch[i] <= 90)
			c++;
		else if(ch[i] >= 97 && ch[i] <= 122)
			s++;
		else if(ch[i] != ' ' && ch[i] != '\0')
			o++;
	}
	cout << "\n Total no. of Capital Alphabets = " << c;
	cout << "\n Total no. of Small Alphabets = " << s;
	cout << "\n Total no. of Non-alphabets = " << o;
	getch();
}

/*********************************************************************
Output :
   Enter a sting => BIIT Computer Education ###
   Total no. of Capital Alphabets = 6
   Total no. of Small Alphabbets = 15
   Total no. of Non-alphabets = 3
*********************************************************************/