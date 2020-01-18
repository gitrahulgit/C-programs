/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to Show the BANKING TRANSACTIONS (using CLASS).
*********************************************************************/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>

class Account
{
	char name[31];
	int acc_no;
	char act;
	float balance;
    public:
	void initial()
	{
		cout << " Enter Name : ";
		gets(name);
		cout << " Enter A/c.No. : ";
		cin >> acc_no;
		int cc = 1;
		while(cc)
		{
			cout << " Account type saving/current(S/C) : ";
			cin >> act;
			if((toupper(act) == 'S') || (toupper(act) == 'C'))
				break;
			else
				cout << " Enter 'S' or 'C' only !\n";
		}
		act = toupper(act);
		cout << " Balance : ";
		cin >> balance;
		cout << endl;
		getch();
	}
	void deposit(float amt);
	void withdraw(float amt);
	void display();
	int getacno()
	{
		return acc_no;
	}
};

void Account :: deposit(float amt)
{
	balance += amt;
	cout << "\n Amount Deposited.\n";
	getch();
}

void Account :: withdraw(float amt)
{
	if((balance - amt) >= 1000)
	{
		balance -= amt;
		cout << "\n Amount withdrawn.\n";
		getch();
	}
	else
	{
		cout << " Minimum balance has to be Rs.1000/-." << endl;
		cout << " You can withdraw only " << (balance - 1000)
		     << " Rupees." << endl;
		cout << "\n Press a key to continue...\n";
		getch();
	}
}

void Account :: display()
{
	cout << " Account Number : " << acc_no << endl;
	cout << " Account Holder : ";
	puts(name);
	cout << " Account type : " << act << endl;
	cout << " Balance(Rs.) : " << balance << endl;
	getch();
}

void main()
{
	clrscr();
	Account a1;
	a1.initial();
	a1.display();
	a1.deposit(5000);
	a1.display();
	a1.withdraw(10000);
	a1.display();
	getch();
}
