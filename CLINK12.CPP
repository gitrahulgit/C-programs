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
	void concat(node *, node *);

	node *p, *q, *r, *s;
	p = new node;
	cout << "\n Create First Linked list : ";
	r = create(p, p, p);
	q = new node;
	cout << "\n Create Second Linked list : ";
	s = create(q, q, q);
	clrscr();
	cout << "\n First Circular Linked list : ";
	cout << "\n\t " << p;
	display(p, p);

	cout << "\n Second Circular Linked list : ";
	cout << "\n\t " << q;
	display(q, q);

	concat(r, s);
	cout << "\n Concatenated Circular Linked list :: ";
	cout << "\n\t " << p;
	display(p, p);

	getche();
}

node *create(node *p1, node *p2, node *p3)
{
	int a;
	node *r;
	cout << "\n Enter Number (0 for End.) : ";
	cin >> a;
	if(a == NULL)
	{
		//p1->data = a;
		p2->link = p3;
		return p2;
	}
	else
	{
		r = new node;
		p1->data = a;
		p1->link = r;
		create(p1->link, p1, p3);
	}
}

void display(node *p1, node *p2)
{
	if(p1->link == p2)
	{
		cout << "\n  " << p1->data << "    " << p1->link;
	}
	else
	{
		cout << "\n  " << p1->data << "    " << p1->link;
		//p1 = p1->link;
		display(p1->link, p2);
	}
}

void concat(node *p1, node *p2)
{
	node *r, *s;
	r = p1->link;
	s = p2->link;
	p1->link = s;
	p2->link = r;
}
/*********************************************************************
Output :

*********************************************************************/
