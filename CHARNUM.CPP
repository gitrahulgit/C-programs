/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to Enter Three Digits as Characters and Convert it into Three
Digit Number.
*********************************************************************/

#include <iostream.h>
#include <conio.h>

void main()
{ 
	clrscr();
  	char ch;
  	long int n1, n2, n3, num;
  	cout << "\n Enter three digits as character : ";
  	for(int i=0 ; i<3 ; i++)
  	{ 
		ch = cin.get();
  		if(i == 0)
    			n1 = (ch - '48');
  		else if(i == 1)
    			n2 = (ch - '48');
  		else if(i == 2)
    			n3 = (ch - '48');
   	}
   	num = n3*100 + n2*10 + n1;
   	cout << "\n The Number formed is = " << num;
	getch();
}

/*********************************************************************
Output :

*********************************************************************/
