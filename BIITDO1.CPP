/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program for the following Output ( using do-loop.) :
	A
	AP
	APT
	APTE
	APTEC
	APTECH
*********************************************************************/

#include <iostream.h>
#include <conio.h>
#include <string.h>

void main()
{
	clrscr();
	char str[20];
	int i, j, n;
	cout << "Enter a String : ";
	cin >> str;
	n = strlen(str);
	i = 0;
	do
	{
		j = 0;
		do
		{
			cout << str[j];
			j++;
		}while(j <= i);
		cout << "\n";
		i++;
	  }while(i < n);
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