/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to check whether a given Number is ArmStrong Number or not.
*********************************************************************/

#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int i, j, n, k, sum = 0;
	cout << "\nEnter any Number : ";
	cin >> n;
	j = n;
	while(i != 0)
	{
		k = n % 10;
		i = k * k * k;
		n = n / 10;
		sum = sum + i;
	}
	if(sum == j)
		cout << "\nNumber " << j << " is a Amstrong Number.";
	else
		cout << "\nNumber " << j << " is not a Amstrong Number.";
	getch();
}
/*********************************************************************
Output :
Enter any Number : 153
Number 153 is a Armstrong Number.
*********************************************************************/