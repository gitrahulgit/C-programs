/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Binary search of an Element in an Sorted Array.
*********************************************************************/

#include<iostream.h>
#include<conio.h>

int Bsearch(int AR[], int size, int item);

void main()
{
	clrscr();
	int AR[50], item, n, index;
	cout << "\n Enter Desired Array Size(max. 50) : ";
	cin >> n;
	cout << "\n Enter Array Elements (ASCENDING) : ";
	for(int i=0 ; i<n ; i++)
	{
		cin >> AR[i];
	}
	cout << "\n Enter Element to be searched for : ";
	cin >> item;
	index = Bsearch(AR, n, item);
	if(index == -1)
		cout << "\n Sorry!! Given element could not be found. \n";
	else
		cout << "\n Element found at index : " << index
		     << " , Position : " << index+1 << endl;
	getch();
}

int Bsearch(int AR[], int size, int item)
{
	int beg, last, mid;
	beg = 0;
	last = size - 1;
	while(beg <= last)
	{
		mid = (beg + last) / 2;
		if(item == AR[mid])
			return mid;
		else if(item > AR[mid])
			beg = mid + 1;
		else
			last = mid - 1;
	}
	return -1;
}
/*********************************************************************
Output :
 Enter Desired Array Size(max.50) : 5
 Enter array elements : 10 20 30 40 50
 Enter element to be searched for : 30
 Element found at index : 2, Position : 3
*********************************************************************/
