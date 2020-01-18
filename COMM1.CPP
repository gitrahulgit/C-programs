/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to calculate commission for the salesman.( Using Nested ifs)
The commission  calculated is according to the following rates:
	    Sales              Commission rate
       5000 onwards                15%
       2000 - 5000                 10%
       1000 - 2000                  5%
	  0 - 1000                  0%
*********************************************************************/

#include<iostream.h>
#include<conio.h>

float discount(float n)
{
	float dis;
	if(n <= 1000)
		dis = 0;
	if((n <= 2000) && (n > 1000))
		dis = 0.05 * n;
	if((n <= 5000) && (n > 2000))
		dis = 0.1 * n;
	if(n > 5000)
		dis = 0.15 * n;
	return(dis);
}

void main()
{
	clrscr();
	float a, n, price, dis;
	cout << "Enter a Price (in Rs.) : ";
	cin >> n;
	a = discount(n);
	price = n - a;
	cout << " Discount is : " << a << " Rs.";
	cout << "\n Net Price is : " << price << " Rs.";
	getch();
}
/*********************************************************************
Output :
Enter a Price (in Rs.): 6000
Discount is : 900 Rs.
Net Price is : 5100 Rs.
*********************************************************************/