/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program for the Following Output :
	A
	AB
	ABC
	ABCD
*********************************************************************/

#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int i, j;
	char c;
	cout << " Enter a Capital Letter : ";
	cin >> c;
	for(i=65 ; i<=int(c) ; i++)
	{
		cout << "\n";
		for(j=65 ; j<=i ; j++)
			cout << (char)j;
	}
	getch();
}
/*********************************************************************
Output :
 Enter a Capital Letter : D
	A
	AB
	ABC
	ABCD
*********************************************************************/