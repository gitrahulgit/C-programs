/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to exchange the positions of strings stored in
array using array of pointers.
*********************************************************************/

#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
	clrscr();
	char *names[] = { "Sachin",
			  "Kapil",
			  "Ajay",
			  "Sunil",
			  "Anil"};
	int len = 0;
	len = strlen(names[1]);
	cout << " Originally string 2 is = ";
	cout.write(names[1], len).put('\n');
	cout << " and string 4 is = ";
	cout.write(names[3], len).put('\n');
	char *t;
	t = names[1];
	names[1] = names[3];
	names[3] = t;
	len = strlen(names[1]);
	cout << " Exchanged string 2 is = ";
	cout.write(names[1], len).put('\n');
	cout << " and string 4 is = ";
	cout.write(names[3], len);
	cout << "\n";
	getch();
}
/*********************************************************************
Output :

*********************************************************************/

