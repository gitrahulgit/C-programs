/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to Calculate the Average Marks of Students [using Array].
*********************************************************************/

#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	const int size = 3;
	float cs[size], sum = 0, avg;
	for(int i=0 ; i<size ; i++)
	{
		cout << "\n Enter marks of " << (i + 1) << " students : ";
		cin >> cs[i];
	}

	for(int j=0 ; j<size ; j++)
	{
		sum = sum + cs[j];
	}

	avg = sum/size;
	cout << "\n Average marks of students : " << avg;
	getch();
}
/*********************************************************************
Output :
Enter marks of 1 students : 20
Enter marks of 2 students : 30
Enter marks of 3 students : 45
Average marks of students : 31.666666
*********************************************************************/