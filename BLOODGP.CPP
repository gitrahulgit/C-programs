/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Blood Donar Program ( using class ).
*********************************************************************/

#include<iostream.h>
#include<conio.h>

class DONOR
{
    private :
	int donorno;
	char name[20];
	char bloodgp[2];
    public :
	void input();
	void output();
	int checkgp();
};

void DONOR :: input()
{
	cout << "\n Enter Donor Number : ";
	cin >> donorno;
	cout << "\n Enter Name : ";
	cin.getline(name, 20);
	cout << "\n Enter Blood Group : ";
	cin.getline(bloodgp, 2);
}

void DONOR :: output()
{
	cout << " \n Donor Number is = ";
	cout << " \n Name is = ";
	cout << " \n Blood Group is = ";
}

int DONOR :: checkgp()
{
	int bloodgp, flag = 0;
	for(int i=0 ; i<=2 ; i++)
	{
		if(checkgp.bloodgp[i] == bloodgp)
		{
			output();
			flag = 1;
			break;
		}
	}
	if(!flag)
	{
		cout << "\n No such Blood Group exists.";
	}
	return i;
}

void main()
{
	clrscr();
	DONOR d1;
	d1.input();
	d1.checkgp();
	d1.output();
	getch();
}
/*********************************************************************
Output :

********************************************************************/
