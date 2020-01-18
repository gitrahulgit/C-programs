/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to Display the following :
	D
	D C
	D C B
	D C B A
*********************************************************************/

#include <iostream.h>
#include <conio.h>

void main()
{
	char i, j;
	int n;
	clrscr();
	
	cout << "\n Enter Number of Line : ";
	cin >> n;
	for(i=64+n ; i<=65 ; i--)
	{
		for(j=64+n ; j<=i ; j--)
		{
			cout << " " << char(j);
		}
		cout << "\n";
	}
	getch();
}

/*********************************************************************
Output :
 Enter Number of Line : 4
	D
	D C
	D C B
	D C B A
*********************************************************************/
