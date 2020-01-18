/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to explain the concept of Class and its functions.
*********************************************************************/

#include <iostream.h>
#include <conio.h>

class counter
{
    private:
	unsigned int count;
    public:
	counter()
	{
		count = 0;
	}
	void inc_count()
	{
		count++;
	}
	int get_count()
	{
		return count;
	}
};

void main()
{
	clrscr();
	counter c1, c2;
	cout << "\n c1 = " << c1.get_count();
	cout << "\n c2 = " << c2.get_count();
	c1.inc_count();
	c2.inc_count();
	c2.inc_count();
	cout << "\n c1 = " << c1.get_count();
	cout << "\n c2 = " << c2.get_count();
	getch();
}
/*********************************************************************
Output :
 c1 = 0
 c2 = 0
 c1 = 1
 c2 = 2
*********************************************************************/
