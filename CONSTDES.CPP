/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to Illustrate the Order of Constructor and Destructor
Invocation.
*********************************************************************/

#include<iostream.h>
#include<conio.h>

class A
{
    public:
	A()
	{
		cout << "\n Constructor A";
	}
	~A()
	{
		cout << "\n Destructor A";
	}
};

class B
{
    public:
	B()
	{
		cout << "\n Constructor B";
	}
	~B()
	{
		cout << "\n Destructor B";
	}
};

class C
{
    public:
	C()
	{
		cout << "\n Constructor C";
	}
	~C()
	{
		cout << "\n Destructor C";
	}
};

void main()
{
	clrscr();
	C oc;
	B ob;
	A oa;
	getch();
}
/*********************************************************************
Output :
 Constructor C
 Constructor B
 Constructor A
 Destructor A
 Destructor B
 Destructor C
*********************************************************************/
