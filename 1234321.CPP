/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program for the Output :
	   1
	  121
	 12321
	1234321
	 12321
	  121
	   1
*********************************************************************/

#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int i, j, k, n,l;
	cout << " Enter a Value : ";
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
	for(i=n-1 ; i>=1 ; i--)
	{
		cout << "\n";
		for(j=i ; j<=n-1 ; j++)
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
Enter a Value : 4
	   1
	  121
	 12321
	1234321
	 12321
	  121
	   1
*********************************************************************/