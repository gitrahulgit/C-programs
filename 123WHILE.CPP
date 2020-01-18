/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program for the following Output ( using while loop.) :
  1
  12
  123
  1234
*********************************************************************/


#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int i, j, n;
	cout << " Enter a Value : ";
	cin >> n;
	i = 1;
	while(i <= n)
	{
		j = 1;
		while(j <= i)
		{
			cout << j;
			j++;
		}
		cout << "\n";
		i++;
	}
	getch();
}
/*********************************************************************
Output :
Enter a Value : 4
  1
  12
  123
  1234
*********************************************************************/