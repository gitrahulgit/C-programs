/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to Display the Following :
    A
    A B
    A B C
    A B C D
    A B C D E
*********************************************************************/

#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int i, j, n;
	cout << " Enter Number of Characters : ";
	cin >> n;
	for( i=1 ; i<=n ; i++)
	{
		for(j=1 ; j<=i ; j++)
		{
			cout << " " << (char)(64+j);
		}
		cout << "\n";
	}
	getch();
}
/*********************************************************************
Output :
 Enter Number of Characters : 5
    A
    A B
    A B C
    A B C D
    A B C D E
*********************************************************************/
