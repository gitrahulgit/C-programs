/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to explain the concept of '2D array'.
*********************************************************************/

#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

void main()
{
	clrscr();
	int price[3][4], i, j;
	for (i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<4 ; j++)
		{
			cout << " Enter price of books : ";
			cin >> price[i][j];
		}
	}
	cout << " Prices of books are : \n";
	for(i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<4 ; j++)
		{
			cout << "\n Book [" << i << "][" << j << "] = ";
			cout << setw(3) << price[i][j];
		}
		//cout << "\n";
       }
       getch();
}
/*********************************************************************
Output :

*********************************************************************/
