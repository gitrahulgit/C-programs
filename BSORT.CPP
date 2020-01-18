/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to Explain the Concept of "BUBBLE SORT".
*********************************************************************/

#include <iostream.h>
#include <conio.h>

class bsort
{
    private:
	int a[25];
	int n;
    public:
	void input();
	void sort();
	void display();
};

void bsort :: input()
{
    	cout << "\n Enter the Number of Elements : ";
    	cin >> n;

    	cout << "\n Enter " << n << " Number : \n";
    	for(int i=0 ; i<n ; i++)
       	{
	 	cin >> a[i];
       	}
}

void bsort :: sort()
{
     	for(int l=0 ; l<n ; l++)
     	{
	  	for(int j=0 ; j<n-1 ; j++)
	     	{
		 	if(a[j] > a[j+1])
		    	{
				int temp;
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
		    	}
	   	}
     	}
}

void bsort :: display()
{
        for( int k=0 ; k<n ; k++ )
       	{
	  	cout << a[k] << '\t';
      	}
}

void main()
{
   	clrscr();
   	bsort b;
   	b.input();
   	b.sort();
	b.display();
   	getch();
}

/*********************************************************************
Output :

*********************************************************************/














