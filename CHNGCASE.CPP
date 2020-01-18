/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to change the "CASE" of every character of the Given sentence
using class.
*********************************************************************/

#include <conio.h>
#include <stdio.h>
#include <iostream.h>

class ReverseCase
{
	char  buffer[80];
    public:
	void read()
	{
		cout << " Enter any string : ";
		gets(buffer); //cin >> buffer;
	}
	void convert();
	void print()
	{
			cout << "\n The string is : ";
			cout << buffer;
	}
};

void ReverseCase :: convert()
{
	int i = 0;
	while(buffer[i])
	{
		if((buffer[i] >= 'A' ) && (buffer[i] <= 'Z'))
			buffer[i] += ('a'-'A');
		else if((buffer[i] >= 'a') && ( buffer[i] <= 'z'))
			buffer[i] -= ('a'-'A');
		i++;
	}
}

void main()
{
	clrscr();
	ReverseCase str;
	str.read();
	cout << "\n String in the SameCase : \n";
	str.print();
	str.convert();
	cout << "\n String in ReverseCase : \n";
  	str.print();
	getch();
}
/*********************************************************************
Output :

*********************************************************************/
