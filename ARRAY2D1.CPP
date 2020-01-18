/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to explain the concept of "2D-ARRAY".
*********************************************************************/

#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int i, j, num[10][10];
	cout << '\n';
	
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			cout << " Enter Any Number : ";
			cin >> num[i][j];
		}
	}

	for(i=0 ; i<3 ; i++)
	{
		cout << "\n";
		for(j=0 ; j<3 ; j++)
		{
			cout << "      " << num[i][j];
		}
	}
	getch();
}

/*********************************************************************
Output :

*********************************************************************/
