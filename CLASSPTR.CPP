/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to illustrate the call-by-value mechanism when
objects are passed.
*********************************************************************/

#include<iostream.h>
#include<conio.h>

class Sample
{
	int x;
    public :
	Sample(int i)
	{
		x = i;
		cout << " Constructing object with " << i << "\n";
	}
	~Sample()
	{
		cout << " Destroying object having " << x << "\n";
	}
	void put_x(int i)
	{
		x = i;
	}
	int get_x(void)
	{
		return x;
	}
};

void afunc(Sample s1)
{
	s1.put_x(2);                 //change value of x in the object.
	cout << " This is 'x' local to afunc(). \n";
	cout << " x = " << s1.get_x() << "\n";
}

void main()
{
	clrscr();
	Sample s(1);
	cout << " This is x in the main(). \n";
	cout << " x = " << s.get_x() << "\n";
	afunc(s);
	cout << " Back in main(). \n";
	cout << " x = " << s.get_x() << "\n";
	getch();
}
/*********************************************************************
Output :
 Constructing object with 1
 This is x in the main().
 x = 1
 This is 'x' local to afunc().
 x = 2
 Destroying object having 2
 Back in main().
 x = 1
 Destroying object having 1
*********************************************************************/
