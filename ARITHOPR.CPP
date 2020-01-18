/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to explain the concept of "ARITHMETIC" Operator and else-if.
**********************************************************************/

#include <iostream.h>
#include <conio.h>

void main()
{
	char ch;
  	float a, b, result;
  	clrscr();
  	cout << " Enter two numbers : " ;
  	cin >> a >> b;
  	cout <<" Enter the operator (+,-,*,/) : ";
  	cin >> ch;
  	if(ch == '+')
  	{
  		result = a + b;
  	}
  	else if(ch == '-')
  	{
  		result = a - b;
  	}
  	else if(ch == '*')
  	{
  		result = a * b;
  	}
  	else if(ch == '/')
  	{
  		result = a / b;
  	}
  	else
  	{
  		cout << " Wrong operator";
  	}
  	cout << " The result is : " << result;
  	getch();
}
/*********************************************************************
Output :

*********************************************************************/

