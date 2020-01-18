/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-

*********************************************************************/

#include <iostream.h>
#include <conio.h>

struct node
{
	int data;
	node *link;
};

void main()
{
	clrscr();
	node *create(node *, node *, node *);
	void display(node *, node *);
	node *split(node *, node *, node *, int, int );
	node *p, *s;
	p = new node;
	s = create(p, p, p);
	cout << "\n     " << p;
	display(p, p);
	cout << "\n Enter position to split the list : ";
	int a;
	cin >> a;
	node *q;
	q = split(p, s, p, 0, a);
	cout << "\n First Circular List : ";
	cout << "\n     " << p;
	display(p, p);
	cout << "\n Second Circular List : ";
	cout << "\n     " << q;
	display(q, q);
	getche();
}

node *create(node *p1, node *p2, node *p3)
{
	int n;
	cout << "\n Enter Number (0 to END): ";
	cin >> n;
	node *r;
	if(n != 0)
	{
		r = new node;
		p1->data = n;
		p1->link = r;
		create(p1->link, p1, p3);
	}
	else
	{
		p2->link = p3;
		return p2;
	}
}

void display(node *p1, node *p2)
{
	if(p1->link != p2)
	{
		cout << "\n" << p1->data << "    " << p1->link;
		display(p1->link, p2);
	}
	else
		cout << "\n" << p1->data << "    " << p1->link;
}

node *split(node *p1, node *p2, node *p, int a, int b)
{
	a++;
	node *r;
	if(a == b-1)
	{
		r = p1->link;
		p1->link = p;
		p2->link = r;
		return r;
	}
	else
		split(p1->link, p2, p, a, b);
}
/*********************************************************************
Output :

*********************************************************************/

