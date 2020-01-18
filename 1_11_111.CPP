/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to print and find the Sum of following series :
	1  11  111  1111 ... ... n Terms.
*********************************************************************/

#include <iostream.h>
#include <conio.h>
#include <math.h>

void main()
{
	clrscr();
	char ch;
	do
	{	
		long n, t = 0, sum = 0, i;
		cout << " Enter the number of terms : ";
		cin >> n;
		for(i=0 ; i<n ; i++)
		{
			t += pow(10,i);
			sum += t;
			cout << "   " << t;
		}
		cout << "\n Sum of the Series is = " << sum;
		cout << "\n Do you want to repeat the process ? (y/n) : ";
		cin >> ch;
	}while(ch == 'y');

  	getch();
}

/*********************************************************************
Output :

*********************************************************************/





