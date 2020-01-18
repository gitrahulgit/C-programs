/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to find the age of a Person.
*********************************************************************/

#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int d1, d2, m1, m2, y1, y2, d, m, y;
	 cout << "\nEnter date of birth (dd mm yyyy) : ";
	 cin >> d1 >> m1 >> y1;
	 cout << "\nEnter present date:(dd mm yyyy) : ";
	 cin >> d2 >> m2 >> y2;
	 if(d2 >= d1)
		d = d2 - d1;
	 else
	 {
		d = (d2 + 30) - d1;
		m2--;
	 }
	 if(m2 >= m1)
		m = m2 - m1;
	 else
	 {
		m = (m2 + 12) - m1;
		y2--;
	 }
	 y = y2 - y1;
	 cout << "\nAge = " << y << " years & " << m << " months & "
		<< d << " days. \n";
	 getch();
}
/*********************************************************************
Output :
Enter date of birth (dd mm yyyy) : 10 10 1985
Enter present date:(dd mm yyyy) : 15 8 2005
Age = 19 years & 10 months & 5 days.
*********************************************************************/