/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to find the Average Marks of Five Subjects.
*********************************************************************/

#include <iostream.h>
#include <conio.h>

void main()
{ 
	clrscr();
  	int sum = 0, avg;
  	int marks[5];
  	cout << "\n Enter marks of five subject : ";
  	for(int i=0 ; i<5 ; i++)
  	{ 
		cin >> marks[i];
    		sum = sum + marks[i];
  	}
    	avg = sum / 5;
    	cout << "\n The average is " << avg;
	getch();
}

/*********************************************************************
Output :

*********************************************************************/
