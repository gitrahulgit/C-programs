/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to Create a Command-line Program to find Maximum of the Given
Number Parameters.
*********************************************************************/

#include <iostream.h>
#include <stdlib.h>

void main(int c, char *a[])
{
 	//clrscr();
	int i;
 	int max = atoi(a[1]);

 	for(i=1;i<c;i++)
  	{
	  	if(max < atoi(a[i]))
	 		max = atoi(a[i]);
	}
 	cout << "\n Maximum = " << max;
	//getch();
}

/*********************************************************************
Output :

*********************************************************************/

