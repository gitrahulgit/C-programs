/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program for the following Output ( using while loop.) :
  S
  SS
  SSI
  SSIE
*********************************************************************/

#include <iostream.h>
#include <conio.h>
#include <string.h>

void main()
{
	clrscr();
	char str[20];
	int i, j, n;
	cout << " Enter a String : ";
	cin >> str;
	n = strlen(str);
	i = 0;
	while(i < n)
	{
		cout << "\n  ";
		j = 0;
		while(j <= i)
		{
			cout << str[j];
			j++;
		}
		i++;
	}
	getch();
}
/*********************************************************************
Output :
Enter a String : SSIE
  S
  SS
  SSI
  SSIE
*********************************************************************/