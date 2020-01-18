/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to explain the concept of 2-D Array And Passing it to function.
*********************************************************************/

#include <iostream.h>
#include <iomanip.h>
#include <conio.h>

const int M = 4;
const int N = 3;

void display(int[M][N]);

void main()
{
	clrscr();
	int sales[M][N]	= { {123, 234, 345},
			    {12 , 213, 576},
			    {456, 54 , 456},
			    {12 , 435, 566} };
	display(sales);
	getch();
}

void display(int funsales[M][N])
{
	int d, m;
	cout << "\n\n";
	cout << "                   Month\n" ;
	cout << "               1     2     3";
	for(d=0 ; d<M ; d++)
	{
		cout << "\n District " << d+1;
		for(m=0 ; m<N ; m++ )
		{
			cout << setw(6) << funsales[d][m];
		}
	}
}
/*********************************************************************
Output :

*********************************************************************/
