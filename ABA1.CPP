/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to Display the following :
      ABCBA
      AB BA
      A   A
*********************************************************************/

#include <iostream.h>
#include <conio.h>

void main()
{
	char i, m, l, j;
	int sp = 65, k;
	clrscr();
	cout << "ABCBA\n";
	for(i=66 ; i>=65 ; i--)
	{
		for(j=65 ; j<=i ; j++)
		{
			cout << j;
		}
		for(k=65 ; k<=sp ; k++)
		{
		 	cout << " ";
		}
		sp += 2;
		for(l=j-1 ; l>=65 ; l--)
		{
			cout << l;
		}
		cout << "\n";
	}
	getch();
}

/*********************************************************************
Output :
      ABCBA
      AB BA
      A   A
*********************************************************************/
