/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to check whether the given Number is ARMSTRONG Number or NOT.
*********************************************************************/

#include <iostream.h>
#include <conio.h>

int armstrong(int); 

void main()
{
     	clrscr();
     	int n, a = 0, i, c;
     	cout << "\n Enter any Number : ";
     	cin >> n;
     	a = n;
     	c = armstrong(n);

	if(c == a)
 	{
     		cout << "\n The number " << a << " is an Armstrong Number.";
 	}
     	else
 	{
     		cout << "\n The number " << a << " is not an Armstrong Number.";
 	}
     	getch();
}

int armstrong(int n)
{
 	int i, sum = 0;
    	while(n != 0)
	{
     		i = n % 10;
     		sum = sum + (i*i*i);
     		n = n / 10;
 	}
 	return sum;
}

/*********************************************************************
Output :

*********************************************************************/
