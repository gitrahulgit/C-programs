/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to compare to string using Operator '==' Overloading.
*********************************************************************/

#include <iostream.h>
#include <conio.h>
#include <string.h>

const int SZ = 80;

enum boolean { false, true };

class string
{
    private:
	char str[SZ];
    public:
	string()
	{
		strcpy(str, "");
	}
	string(char s[])
	{
		strcpy(str, s);
	}
	void display()
	{
		cout << str;
	}
	void getstr()
	{
		cin.get(str,' ');
	}
	boolean operator == (string ss)
	{
		return ((strcmp(str, ss.str) == 0) ? true : false);
	}
};

void main()
{
	clrscr();
	string s1 = "Yes";
	string s2 = "No";
	string s3;
	cout << "\n Enter \'Yes\' or \'No\': ";
	s3.getstr();
	if(s3 == s1)
		cout << " You typed Yes.";
	else if(s3 == s2)
		cout << " You typed No.";
	else
		cout << " You didn't follow instruction.";
	getch();
}
/*********************************************************************
Output :
 Enter 'Yes' or 'No' : Yes
 You typed Yes.
*********************************************************************/

