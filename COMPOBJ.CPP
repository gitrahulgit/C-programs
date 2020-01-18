/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to explain the concept of Operator Overloading ("<" Operator).
*********************************************************************/

#include <iostream.h>
#include <conio.h>

enum boolean { false, true };

class distance
{
    private:
	int feet;
	float inches;
    public:
	distance()
	{
		feet = 0;
		inches = 0.0;
	}
	void getdist()
	{
		cout << " Enter feet : ";
		cin >> feet;
		cout << " Enter inches: ";
		cin >> inches;
	}
	void showdist()
	{
		cout << feet << "\'-" << inches << '\"';
	}
	boolean operator < (distance);
};

boolean distance :: operator < (distance d2)
{
	boolean b;
	float b1 = feet + inches/12;
	float b2 = d2.feet + d2.inches/12;
	b = ((b1<b2) ? true : false);
	return b;
}
void main()
{
	clrscr();
	distance dist1, dist2;
	cout << " Enter Distance 1 : \n";
	dist1.getdist();
	cout << " Enter Distance 2 : \n";
	dist2.getdist();
	cout << "\n Dist1 = ";
	dist1.showdist();
	cout << "\n Dist2 = ";
	dist2.showdist();
	if(dist1 < dist2)
		cout << "\n Dist1 is less than Dist2.";
	else
		cout << "\n Dist1 is greater than dist2.";
	getch();
}
/*********************************************************************
Output :
 Enter Distance 1 :
 Enter feet : 5
 Enter inches : 5
 Enter Distance 2 :
 Enter feet : 3
 Enter inches : 3
 Dist1 = 5'-5"
 Dist2 = 3'-3"
 Dist1 is greater than dist2.
*********************************************************************/
