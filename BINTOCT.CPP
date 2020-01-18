/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to Convert a BINARY Number into an OCTAL Number.
*********************************************************************/

#include <iostream.h>
#include <conio.h>
#include <math.h>

long bintooct(long i);
long revdigit(long n);

void main()
{
	clrscr();
	long oct, bin;
	cout << " Enter an Binary Number : ";
	cin >> bin;

	oct = bintooct(bin);

	cout<< "\n The Octal Equivalent is = " << oct;
	getch();
}

long bintooct(long i)
{
	long oct = 0;
	int c = 0, n = 0;
	while(i != 0)
	{
		int r = i % 10;
		n = n + (r * pow(2, c));
		i = i / 10;
		c++;
		if(c == 3 || (i==0 && c<3))
		{
			oct = (oct * 10) + float(n);
			c = 0;
			n = 0;
		}
	}
	oct = revdigit(oct);
	return oct;
}

long revdigit(long n)
{
	long num = 0;
	int r;
	while(n != 0)
	{
		r = n % 10;
		num = (num * 10) + r;
		n = n / 10;
	}
	return num;
}

/*********************************************************************
Output :
 Enter an Binary Number : 111011
 The Octal Equivalent is = 73
*********************************************************************/

