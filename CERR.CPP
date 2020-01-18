/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to explain the "CERR".
*********************************************************************/

#include <fstream.h>
#include <conio.h>

int main()
{
	 clrscr();
	 char ch;
	 ifstream f1 ("OLDFILE.TXT");
	 ofstream f2 ("NEWFILE.TXT");

	 if (!f1)
		cerr << "\n Cannot open OLDFILE.TXT for input";
	 if (!f2)
		cerr << "\n Cannot open NEWFILE.TXT for output";

	 while (f2 && f1.get(ch))
		 f2.put(ch);
	 getch();
	 return 0;
}

/*********************************************************************
Output :

*********************************************************************/
