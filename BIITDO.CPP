/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program for the following Output ( using do-while loop.) :
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
	 char str[25];
	 int i, j, n;
	 cout << "Enter a String : ";
	 cin >> str;
	 n = strlen(str);
	 i = 0;
	 do
	 {
		cout << "\n";
		j = n-1;
		do
		{
			cout << " ";
			j--;
		}while(j>=i);

		int k = 0;
		do
		{
			cout << str[k];
			k++;
		}while(k<=i);
		i++;
	}while(i<n);
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