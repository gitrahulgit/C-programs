/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-

*********************************************************************/

#include <iostream.h>
#include <conio.h>

const int max = 5;

class distance
{
    private:
	int feet;
	float inches;
    public:
	void getdis()
	{
		cout << "\n Enter Feet : ";
		cin >> feet;
		cout << "\n Enter Inches : ";
		cin >> inches;
	}
	void showdis()
	{
		cout << feet << "\'-" << inches << '\"';
	}
};

void main()
{
	clrscr();
	distance dis[max];
	int n = 0;
	char ch;
	cout << "\n";
	do
	{
		cout << "\n Enter Distance " << n+1 << " : ";
		dis[n++].getdis();
		cout << "\n Enter Another (y / n)? : ";
		cin >> ch;
	}while(ch != 'n');

	for(int j=0 ; j<n ; j++)
	{
		cout << "\n Distance Number " << j+1 << " is ";
		dis[j].showdis();
	}
	getch();
}
/*********************************************************************
Output :
 Enter Distance 1 :
 Enter Feet : 5
 Enter Inches : 5
 Enter Another (y / n)? : y
 Enter Distance 2 :
 Enter Feet : 8
 Enter Inches : 8
 Enter Another (y / n)? : n
 Distance Number 1 is 5'-5"
 Distance Number 2 is 8'-8"
*********************************************************************/
