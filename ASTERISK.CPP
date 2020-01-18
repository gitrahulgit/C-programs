/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program for the following Output :
     *
    **
   ***
  ****
*********************************************************************/

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i, j, n;
	cout << "Enter a Value : ";
	cin >> n;
	for(i=1 ; i<=n ; i++)
	{
		cout << "\n";
		for(j=n ; j>=i ; j--)
			cout<<" ";
		for(int k=1 ; k<=i ; k++)
			cout << "*";
	}
	getch();
}
/*********************************************************************
Output :
Enter a Value : 4
     *
    **
   ***
  ****
*********************************************************************/