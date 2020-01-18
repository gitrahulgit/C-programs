/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to Concatenate Strings using Overloaded Operator "+".
*********************************************************************/

#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>

const int sz = 80;

class string
{
    private:
	char str[sz];
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
	void enterstr()
	{
		cout << "\n Enter string : ";
		gets(str);
	}
	string operator +(string s)
	{
		if(strlen(str) + strlen(s.str) < sz)
		{
			string t;
			strcpy(t.str, str);
			strcat(t.str, s.str);
			return t;
		}
		else
			cout << "\n String overflow.";
	}
};

void main()
{
	clrscr();
	string s1, s3;
	s1.enterstr();
	string s2 = " BIIT Computer Education. ";
	s3 = s1 + s2;
	cout << "\n";
	s1.display();
	cout << "\n";
	s2.display();
	cout << "\n";
	s3.display();
	getch();
}
/*********************************************************************
Output :
 Enter string : BIIT
 BIIT
 BIIT Computer Education.
 BIIT BIIT Computer Education.
*********************************************************************/
