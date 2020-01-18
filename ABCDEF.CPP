/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to Print the Following :
	A
	BC
	DEF
	GHIJ
*********************************************************************/

#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int n, j, i;
	char ch = 'A';
	cout << "\n Enter the Number of Lines : ";
	cin >> n;
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<=i ; j++)
		{
			cout << ch;
			ch++;
		}
		cout << "\n";
	}
	getch();
}
/*********************************************************************
Output :
Enter the Number of Lines : 4
	A
	BC
	DEF
	GHIJ
*********************************************************************/