/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to Display the Following :
	1
	3 2 1
	5 4 3 2 1
*********************************************************************/

#include <iostream.h>
#include <conio.h>

void main()
{
	int i, j, n;
	clrscr();
	
	cout << "\n Enter any Number : ";
	cin >> n;
	for(i=1 ; i<2*n ; i+=2)
	{
	  	for(j=i ; j>=1 ; j--)
	  	{
			cout << " " << j;
		}
		cout << endl;
	}
	getch();
}

/*********************************************************************
Output :
 Enter any Number : 3
	1
	3 2 1
	5 4 3 2 1
*********************************************************************/
