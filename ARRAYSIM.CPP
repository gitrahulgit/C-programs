/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to explain the concept of Simple Array.
*********************************************************************/

#include <iostream.h>
#include <conio.h>

void main()
{
	int age[4];
      	cout << endl;
      	for(int j=0 ; j<4 ; j++)
	{
	   	cout << " Enter an age : ";
	   	cin >> age[j];
	}
      	for(j=0 ; j<4 ; j++)
	  	cout << "\n You entered = " << age[j];
      	getch();
}

/*********************************************************************
Output :
 Enter an age : 15
 Enter an age : 25
 Enter an age : 30
 Enter an age : 35
 You entered = 15
 You entered = 25
 You entered = 30
 You entered = 35
*********************************************************************/
