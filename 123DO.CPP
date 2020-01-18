/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program for the following Output ( using do-loop.) :
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
	do
	{
		j = 1;
		do
		{
			cout << j;
			j++;
		}while(j <= i);
		cout << "\n";
		i++;
       }while(i <= n);
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