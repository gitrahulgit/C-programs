/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to explain the Concept of "WORD AND CHAR" Counting.
**********************************************************************/

#include<iostream.h>
#include<conio.h>

enum boolean { false,true };

void main()
{
	clrscr();
	boolean isword = false;
	char ch[] = "BIIT    Computer      Education";
	int wordcount = 1, i = 0;
	do
	{
		cout << "\n\n\n CHARACTER = " << ch[i];
		if (ch[i] ==' ' || ch[i] == '\0')
		{
			cout << "\n====In IF Block====\n++++Before ISWORD++++";
			cout << "\n ISWORD     = " << isword;
			cout << "\n WORD COUNT = " << wordcount;
			getch();
			if(isword)
			{
				wordcount++;
				isword = false;
			}
			cout << "\n\n++++After ISWORD++++";
			cout << "\n ISWORD     = " << isword;
			cout << "\n WORD COUNT = " << wordcount;
			getch();
		}
		else
		{
			cout << "\n====In ELSE Block====\n++++Before ISWORD++++";
			cout << "\n isword     = " << isword;
			cout << "\n word count = " << wordcount;
			getch();
			if(  !isword )
			{
				isword = true;
			}
			cout << "\n\n++++After ISWORD++++";
			cout << "\n isword     = " << isword;
			cout << "\n word count = " << wordcount;
			getch();
		}
		i++;
	}while( ch[i] != '\0');
	cout<<"\n\n\n*********  Word Count is = " << wordcount <<"  **********\n";
	getch();
}
/*********************************************************************
Output :

*********************************************************************/
