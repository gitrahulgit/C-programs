/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to Convert Binary Number into Decimal Number.
*********************************************************************/

#include<iostream.h>
#include<conio.h>
#include<math.h>

void bintodec(long bin)
{
	long dec = 0;
	int c=0;
	long r,q=bin;
	do
	{
		 r = q % 10;
		 q = q / 10;
		 c++;
	}while(q != 0);
	q = bin;
	for(int i=0 ; i<=c ; i++)
	{
		r = q % 10;
		dec = dec + (r * pow(2,i));
		q = q / 10;
	}
	cout << "\n The DECIMAL Equivalent is = " << dec;
}

void main()
{
	clrscr();
	long n;
	cout << "\n Enter a BINARY number : ";
	cin >> n;
	cout << "\n The given BINARY no. is = " << n;
	bintodec(n);
	getch();
}
/*********************************************************************
Output :
 Enter a BINARY number : 1111101
 The given BINARY no. is = 1111101
 The DECIMAL Equivalent is = 125
*********************************************************************/
