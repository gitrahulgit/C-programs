/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program for the following Output :
     A
    ABA
   ABCBA
  ABCDCBA
*********************************************************************/

#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int i, j, k;
	char c;
	cout << " Enter a Capital Letter : ";
	cin >> c;
	for(i=65 ; i<=int(c) ; i++)
	{
		for(j=int(c) ; j>i ; j--)
			cout << " ";
		for(k=65 ; k<=i ; k++)
			cout << (char)k;
		for(int l=i-1 ; l>=65 ; l--)
			cout << (char)l;
		cout << "\n";
	}
	getch();
}
/*********************************************************************
Output :
 Enter a Capital Letter : D
     A
    ABA
   ABCBA
  ABCDCBA
*********************************************************************/