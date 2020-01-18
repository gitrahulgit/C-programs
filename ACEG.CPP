/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to Print following Output :
	  A
	 BCB
	CDEDC
       DEFGFED
*********************************************************************/

#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int i, j, k, l;
	char c;
	cout << "\n Enter a Capital Letter : ";
	cin >> c;
	for(i=65 ; i<=int(c) ; i++)
	{
		cout << "\n";
		for(j=int(c) ; j>=i ; j--)
			cout << " ";
		for(k=i,l=65 ; l<=i ; k++,l++)
			cout << (char)k;
		for(int m=k-2,l=i-1 ; l>=65 ; m--,l--)
			cout << (char)m;
	}
	getch();
}
/*********************************************************************
Output :
 Enter a Capital Letter : D
	  A
	 BCB
	CDEDC
       DEFGFED
*********************************************************************/