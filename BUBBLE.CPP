/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to Sort an Array of Five elements using "BUBBLE" Sort.
*********************************************************************/

#include <iostream.h>
#include <conio.h>
#include <process.h>

void main()
{
	clrscr();
	int i, j, flag;
	int n[] = { 15, 25, 30, 10, 20 };
	for(i=0 ; i<5 ; i++)
	{
		cout << "   " << n[i];
	}
	cout << endl;

	for(i=0 ; i<5 ; i++)
	{
		flag = 0;
		for(j=0 ; j<5-i-1 ; j++)
		{
			for(int l=0 ; l<5 ; l++)
			{
				cout << "   " << n[l];
			}
			cout << "\n";
			if(n[j] > n[j+1])
			{
				int t = n[j];
				n[j] = n[j+1];
				n[j+1] = t;
				for(int k=0 ; k <5-1 ; k++)
					if(n[k] > n[k+1])
						flag = 1;
			}
		}
		if(!flag)
		{
			getch();
			exit(0);
		}
		cout << "\n";
	}

	for(i=0 ; i<5 ; i++)
	{
		cout << "   " << n[i];
	}
	getch();
}

/*********************************************************************
Output :
15   25   30   10   20
10   15   20   25   30
*********************************************************************/
