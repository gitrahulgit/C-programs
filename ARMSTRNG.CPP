/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to check whether the given number is ARMSTRONG Number or NOT.
 ( like,  1*1*1 + 5*5*5 + 3*3*3 = 153 )
**********************************************************************/

#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int a, b, c, d, num, sum;
	cout << " Enter any three digit number : ";
	cin >> num;
	a = num / 100;
	b = num % 100;
	c = b / 10;
	d = b % 10;
	sum = (a*a*a + d*d*d + c*c*c);
	if(sum == num)
		cout << "\n The number " << num << " is an Armstrong Number.";
	else
		cout << "\n The number " << num << " is NOT an Armstrong Number.";
	getch();
}
/*********************************************************************
Output :
 Enter any three digit number : 371
 The number 371 is an Armstrong Number.
*********************************************************************/
