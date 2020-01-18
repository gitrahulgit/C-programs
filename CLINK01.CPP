/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to explain the concept of Circular Linked list.
*********************************************************************/

#include<stdio.h>
#include<conio.h>

struct link
{
	int a;
	struct link *b;
};

typedef struct link node;

void main()
{
	clrscr();
	int a = 1;
	node *p, *e, *q;

	void add(node *, node *, node *, node *);
	node *create(node *, int, node *);
	void display(node *, node *);
	node *dtt(node *, node *);

	p = new node;
	e = create(p, 1, p);
	printf("\n The first list is : ");
	display(p, p);
	printf("\n The second list is : ");
	display(e, e);
	printf("\n The added list is: ");
	add(p, p, e, e);
	display(p, p);
	getch();

}

void add(node *i, node *j, node *y, node *z, int t)
{
	if(i->a != 0)
	{
		if(t == 1)
		{
			t = t + 1;
			add(i->b, j, y, z, t);
		}
		add(i->b, j, y, z, t);
	}
	else if(i->a == 0)
	{
		i->b = y;
		if(t == 2)
		{
			t = t + 1;
			add(i->b, y, j, z);
		}
	}
	if(y->b != z)
	{
		add(i->b, z, y->b, z);
	}
	else if(y->b == z)
	{
		y->b = j;
	}
}
  /*
void add(node1 *i,node1 *j,node1 *y,node1 *z,int t)
{
	if(i->b!=j)
	{
		if(t==1)
		{
		t=t+1;
		add(i->b,j,y,z,t);
		}
	add(i->b,j,y,z,t);
	}
	else if(i->b==j)
	{
	i->b=y;
		if(y==2)
		{
		y=y+1;
		add(i->b,y,j,z);
		}
	}
	if(y->b!=z)
	{
	add(i->b,z,y->b,z);
	}
	else if(y->b==z)
	{
	y->b=j;
	}
}*/

void display(node *i, node *j)
{
	if(i->b != j)
	{
		printf(" %d", i->a);
		if(i->b->b == j)
		{
			printf(" %d", i->b->a);
		}
		display(i->b, j);
	}
}

node *create(node *i, int y, node *j)
{
	int a;
	node *u;
	printf("\n Enter the no (type 0 to end) : ");
	scanf("%d", &a);
	if(a == 0)
	{
		if(y == 1)
		{
			u = new node;
			printf("\n The first list ends and second starts : ");
			i->a = a;
			i->b = j;
			y = y + 1;
			create(u, y, u);
		}
		else if(y == 2)
		{
			printf("\n The second list ends here : ");
			i->a = a;
			i->b = j;
			return j;
		}
	}
	else
	{
		u = new node;
		i->a = a;
		i->b = u;
		create(u, y, j);
	}
}
