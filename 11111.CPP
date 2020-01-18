/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program for the Following Output :
	   1
	  1 1
	 1   1
	1     1
	 1   1
	  1 1
	   1
**********************************************************************/

#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int i, j, k, n;
	cout << " Enter Any Number : ";
	cin >> n;

	for(i=1 ; i<=n ; i++)
	{
		cout << "\n";
		for(j=n ; j>i ; j--)
		{
			cout << " ";
		}
		for(k=1 ; k<=i ; k++)
			if(k == 1)
				cout << k;
		     else
				cout << " ";
		for(int l=i-1 ; l>=1 ; l--)
			if(l == 1)
				cout << l;
			else
				cout << " ";
	}
	for(i=n-1 ; i>=1 ; i--)
	{
		cout << "\n";
		for(j=i ; j<=n-1 ; j++)
		{
			cout << " ";
		}
		for(k=1 ; k<=i ; k++)
			if(k == 1)
				cout << k;
			else
				cout << " ";
		for(int l=i-1 ; l>=1 ; l--)
			if(l == 1)
				cout << l;
			else
				cout << " ";
	}
	getch();
}
/*********************************************************************
Output :
 Enter Any Number : 4
	   1
	  1 1
	 1   1
	1     1
	 1   1
	  1 1
	   1
*********************************************************************/