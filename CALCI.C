/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to Create a Command line "CALCULATOR". and also explain the 
command line argument and atoi(), strcmp() functions.
*********************************************************************/

#include <iostream.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main( int c, char * a[])
{
	char f[20];
	int i, b, d, g;

	b = atoi(a[1]);
	d = atoi(a[3]);

	strcpy(f, a[2]);
	
	g = strcmp(f, "+");
	if(g == 0)
	    	c = b + d;
	
	g = strcmp(f, "-");
	if(g == 0)
	    	c = b - d;

	g = strcmp(f, "*");
	if(g == 0)
	    	c = b * d;

	g = strcmp(f, "/");
	if(g == 0)
	    	c = b / d;

	g = strcmp(f, "%");
	if(g == 0)
	    	c = b % d;

	cout << "\n Output = " << c;
	getch();
}

/*********************************************************************
Output :

*********************************************************************/
