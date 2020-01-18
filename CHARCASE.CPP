/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to Toggle the Case of the Given Character.
*********************************************************************/

#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void main()
{ 
	clrscr();
  	char ch;
  	do
    	{
		cout << "\n Enter a character (0 to terminate) : ";
     		cin >> ch;
    		
		if(ch>=65 && ch<=90)
     			ch = ch + 32;
     		else if(ch>=97 && ch<=122)
     			ch = ch - 32;
     		cout << "\n Character in Opposite Case = ";
		putchar(ch);
     	}while(ch != '0');
     	getch();
}

/*********************************************************************
Output :
 Enter a character (0 to terminate) : B
 Character in Opposite Case = b
*********************************************************************/


