/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to Print the following Output :
  A
  AB
  ABC
  ABCD
*********************************************************************/

#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
	clrscr();
	int i, j;
	char ch[10];
	cout << "\n Enter a String : ";
	cin >> ch;
	for(i=0 ; i<strlen(ch) ; i++)
	{
		for(j=0 ; j<=i ; j++)
			cout << ch[j];
		cout<<"\n";
	}
	getch();
}
/*********************************************************************
Output :
 Enter a String : ABCD
  A
  AB
  ABC
  ABCD
*********************************************************************/
