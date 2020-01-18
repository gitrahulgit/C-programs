/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 001	   Mob.: 9893038337
**********************************************************************
Project No.-
Program for the following Output ( using do-while loop.) :
     1
    12
   123
  1234
*********************************************************************/

#include<iostream.h>
#include<conio.h>

void main()
{
	 clrscr();
	 int i, j, n;
	 cout << " Enter a Value : ";
	 cin >> n;
	 i = 1;
	 do
	 {
		cout << "\n";
		j = n;
		do
		{
			cout << " ";
			j--;
		}while(j >= i);

		int k = 1;
		do
		{
			cout << k;
			k++;
		}while(k <= i);
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