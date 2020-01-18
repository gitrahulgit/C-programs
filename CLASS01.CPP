/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to explain the basic concept of class.
*********************************************************************/

#include<iostream.h>
#include<conio.h>

class smallobj
{
    private:
	int somedata;
    public:
	void setdata(int d)
	{
		somedata = d;
	}
	void showdata()
	{
		cout << "\n Data is = " << somedata;
	}
};

void main()
{
	clrscr();
	smallobj s1, s2;
	s1.setdata(1000);
	s2.setdata(1500);
	s1.showdata();
	s2.showdata();
	getch();
}
/*********************************************************************
Output :
 Data is = 1000
 Data is = 1500
********************************************************************/
