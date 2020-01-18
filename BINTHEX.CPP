/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to Convert a BINARY Number into a HEXADECIMAL Number.
*********************************************************************/

#include <iostream.h>
#include <conio.h>
#include <math.h>
#include <string.h>

void bintohex(long i, char[]);

void main()
{
	clrscr();
	long bin;
	char hex[10];
	cout << " Enter an Binary Number : ";
	cin >> bin;

	bintohex(bin, hex);

	cout<< "\n The Hexadecimal Equivalent is = " << hex;
	getch();
}

void bintohex(long i, char hex[10])
{
	char h[10];
	int c = 0, n = 0, j = 0;
	while(i != 0)
	{
		int r = i % 10;
		n = n + (r * pow(2, c));
		i = i / 10;
		c++;
		if(c == 4 || (i==0 && c<4))
		{
			if(n < 10)
				h[j] = n + 48;
			else
				h[j] = n + 55;
			c = 0;
			n = 0;
			j++;
		}
	}
	h[j] = '\0';
	int l;
	int len = strlen(h);
	for(i=0, l=len-1 ; h[i] != '\0' ; i++,l--)
	{
		hex[i] = h[l];
	}
	hex[i] = '\0';
}

/*********************************************************************
Output :
 Enter an Binary Number : 111111111
 The Hexadecimal Equivalent is = 1FF
*********************************************************************/



