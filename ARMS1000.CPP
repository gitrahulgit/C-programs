/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to print armstrong numbers between 1 and 1000.
*********************************************************************/

#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int i, j, n, d, m;
	for(m=1 ; m<=1000 ; m++)
	{
		int sum = 0;
		j = i = m;
		while(i != 0)
		{
			d = i % 10;
			n = d * d * d;
			i = i / 10;
			sum = sum + n;
		}
		if(sum == j)
			cout << "\nArmstrong numbers is : " << sum;
	}
	getch();
}
/*********************************************************************
Output :
Armstrong numbers is : 1
Armstrong numbers is : 153
Armstrong numbers is : 370
Armstrong numbers is : 371
Armstrong numbers is : 407
*********************************************************************/