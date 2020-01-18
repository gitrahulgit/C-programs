/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to explain Concatenation of strings using 'strcat()' and class.
*********************************************************************/

#include <iostream.h>
#include <conio.h>
#include <string.h>

const int SZ = 40;

class string
{
    private:
	char str[SZ];
    public:
	string()
	{
		str[0] = '\0';
	}
	string(char s[])
	{
		strcpy(str, s);
	}
	void display()
	{
		cout << str;
	}
	void concat(string s2)
	{
		if(strlen(str) + strlen(s2.str) < SZ)
			strcat(str, s2.str);
		else
			cout << "\n String is too long.";
	}
};

void main()
{
	clrscr();
	string s1 = " Welcome !!! ";
	string s2(" BIIT Computer Education.");
	string s3;
	cout << "\n String1 = ";
	s1.display();
	cout << "\n String2 = ";
	s2.display();
	cout << "\n String3 = ";
	s3.display();
	s3 = s1;
	cout << "\n String3 = ";
	s3.display();
	s3.concat(s2);
	cout << "\n String3 = ";
	s3.display();
	getch();
}
/*********************************************************************
Output :
 String1 = Welcome !!!
 String2 = BIIT Computer Education.
 String3 =
 String3 = Welcome !!!
 String3 = Welcome !!! BIIT Computer Education.
*********************************************************************/
