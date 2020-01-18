/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to Illustrate the Order of CONSTRUCTOR Invocation.
*********************************************************************/

#include<iostream.h>
#include<conio.h>

class Subject
{
	int days;
	int subjectno;
    public:
	Subject(int d = 123, int sn = 101);
	void printsub(void)
	{
		 cout << "\n Subject No. = " << subjectno;
		 cout << "\n Days = " << days << "\n";
	}
};

Subject :: Subject(int d, int sn)
{
	cout << " Constructing Subject.\n";
	days = d;
	subjectno = sn;
}

class Student
{
	int rollno;
	float marks;
    public:
	Student()
	{
		cout << " Constructing Student.\n";
		rollno = 0;
		marks = 0.0;
	}
	void getval(void)
	{
		cout << "\n Enter rollno & marks : ";
		cin >> rollno >> marks;
		cout << "\n";
	}
	void print(void)
	{
		cout << "\n Rollno. = " << rollno;
		cout << "\n Marks = " << marks << "\n";
	}
};

class Admission
{
	Subject sub;
	Student stud;
	float fees;
    public:
	Admission()
	{
		cout << " Constructing Admission.\n";
		fees = 0.0;
	}
	void print(void)
	{
		stud.print();
		sub.printsub();
		cout << "\n Fees = " << fees << "\n";
	}
};

int main()
{
	clrscr();
	Admission adm;
	cout << " Back in main()\n";
	getch();
}
/*********************************************************************
Output :
 Constructing Subject.
 Constructing Student.
 Constructing Admission.
 Back in main()
*********************************************************************/
