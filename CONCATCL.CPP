/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to Copy a String, Reverse a String and Concatenate two String.
*********************************************************************/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class s_tring
{
    private:
	char str[100];
    public:
	void read();
	void reverse(s_tring);
	void copy(s_tring);
	void concate(s_tring,s_tring);
	void display();
};

void s_tring::read()
{
	cout << "\n Enter a String : ";
	gets(str);
}

void s_tring :: reverse(s_tring s1)
{
	int i, j, k;
	i = strlen(s1.str);
	for(j=0,k=i-1 ; k>=0 ; j++,k--)
	{
		str[j] = s1.str[k];
	}
	str[j] = '\0';
}

void s_tring :: copy(s_tring s1)
{
	int i, j, k;
	i = strlen(s1.str);
	for(j=0 ; j<i ; j++)
	{
		str[j] = s1.str[j];
	}
	str[j] = '\0';
}

void s_tring :: concate(s_tring s1, s_tring s2)
{
	int i, j, k;
	i = strlen(s1.str);
	j = strlen(s2.str);
	for(k=0 ; k<j ; k++)
	{
		s1.str[i+k] = s2.str[k];
	}
	s1.str[i+k] = '\0';
}

void s_tring :: display()
{
	cout << " The String is = ";
	puts(str);
}

void main()
{
	clrscr();
	s_tring s1, s2, s3, s4;
	s1.read();
	s1.display();
	s2.reverse(s1);
	s2.display();
	s3.copy(s1);
	s3.display();
	s4.concate(s1, s2);
	s1.display();
	getch();
}
/*********************************************************************
Output :
 Enter a String : BIIT
 The String is = BIIT
 The String is = TIIB
 The String is = BIIT
 The String is = BIIT
********************************************************************/



