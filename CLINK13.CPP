/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-

*********************************************************************/

#include<conio.h>
#include<iostream.h>

struct node
{
	int data;
	struct node *link;
};

void main()
{
	clrscr();
	int s, w, z;
	node *p;
	void create(node *, node *, node *);
	void display(node *, node *);
	p = new node;
	create(p, p, p);
	cout << p << endl;
	display(p, p);
	getche();
}

void create(node *m, node *n, node *i)
{
	node *q;
	int a;
	cout << "\n Enter Number ( 0 to End.) : ";
	cin >> a;
	if(a == 0)
	{
		m->data = a;
		m->link = NULL;
		i->link = n;
	}
	else
	{
		q = new node;
		m->data = a;
		m->link = q;
		create(q, n, m);
	}
}

void display(node *m, node *n)
{
	if(m->link != n)
	{
		cout << "  " << m->data << "  " << m->link << endl;
		if(m->link->link == n)
		{
			cout << "  " << m->link->data << "  " << m->link->link << endl;
		}
		m = m->link;
		display(m, n);
	}
}
