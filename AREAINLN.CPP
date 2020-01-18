/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to Calculate Area of Circle using "INLINE" Function.
*********************************************************************/

#include <iostream.h>
#include <conio.h>

const float Pi = 3.1415926;

inline float area(const float r) 
{
	return Pi * r * r;
}

main()
{
   	clrscr();
	float radius;

   	cout << "\n Enter the radius of a circle : ";
   	cin >> radius;
   	cout << "\n The area of circle is " << area(radius) << "\n";
   	getch();
	return 0;
}

/*********************************************************************
Output :

*********************************************************************/

