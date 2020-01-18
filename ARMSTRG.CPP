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

void main()
{ 
	clrscr();
  	int a, b, c, d, num, sum;
  	cout << "\n Enter any Three Digit Number : ";
  	cin >> num;
  	a = num / 100;
  	b = num % 100;
  	c = b / 10;
  	d = b % 10;
  	sum = (a*a*a + d*d*d + c*c*c);
  	cout << sum;
  	if(sum == num)
		cout << "\n The number " << num << " is an armgstrong number";
  	else
		cout << "\n The number " << num << " is not an armgstrong number";
	getch();
}

/*********************************************************************
Output :

*********************************************************************/
