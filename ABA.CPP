/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to Display the following :
	    A
       ABA
      ABCBA
*********************************************************************/

#include <iostream.h>
#include <conio.h>

void main()
{
	char i, k, l, j;
	clrscr();
	
	for(i=65 ; i<=66 ; i++)
	{
		for(k=66 ; k>=i ; k--)
		{
			cout << " ";
		}
		for(j=65 ; j<=i ; j++)
		{
			cout << j;
		}
		for(l=i ; l>=66 ; l--)
		{
			cout << "A";
		}
		cout << "\n";
	}
	cout << "ABCBA";
	getch();
}

/*********************************************************************
Output :
	A
       ABA
      ABCBA
*********************************************************************/
