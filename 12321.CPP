/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program for the following Output :
     1
    121
   12321
  1234321
*********************************************************************/

#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int i, j, k, n;
	cout << " Enter Value : ";
	cin >> n;
	for(i=1 ; i<=n ; i++)
	{
		cout << "\n";
		for(j=n ; j>i ; j--)
			cout << " ";
		for(k=1 ; k<=i ; k++)
			cout << k;
		for(int l=i-1 ; l>=1 ; l--)
			cout << l;
	}
	getch();
}
/*********************************************************************
Output :
Enter Value : 4
     1
    121
   12321
  1234321
*********************************************************************/