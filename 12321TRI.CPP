/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to Print following Output :
	  1
	 232
	34543
   4567654
*********************************************************************/

#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int i, j, k, n, l;
	cout << "\n Enter a value : ";
	cin >> n;
	for(i=1 ; i<=n ; i++)
	{
		cout << "\n";
		for(j=n ; j>=i ; j--)
			cout << " ";
		for(k=i,l=1 ; l<=i ; k++,l++)
			cout << k;
		for(int m=k-2,l=i-1 ; l>=1 ; m--,l--)
			cout << m;
	}
	getch();
}
/*********************************************************************
Output :
Enter a value : 4
	  1
	 232
	34543
       4567654
*********************************************************************/