/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to Explain the concept of "ARRAY" and "CONST" modifier.
*********************************************************************/

#include <iostream.h>
#include <conio.h>

const int SIZE = 6;

void main()
{
	clrscr();
	float sales[SIZE];
	cout << "\n Enter Sales for 6 days : \n";
	
	for(int j=0 ; j<SIZE ; j++)
		cin >> sales[j];
	
	float total = 0;
		
	for(j=0 ; j<SIZE ; j++)
		total += sales[j];
	
	float average = total / size;
	cout << "\n Average Sales is = " << average;
	getch();
}

/*********************************************************************
Output :

*********************************************************************/
