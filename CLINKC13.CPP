/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-

*********************************************************************/

#include<stdio.h>
#include<conio.h>

struct node
{
	int a;
	struct node *b;
};

void main()
{
	clrscr();
	node *p, *e, *q;

	node *create(node *, node *);
	void display(node *, node *);
	node *split(node *,node *);
	p = new node;
	e = create(p, p);
	q = split(p, e);
	printf("%d\n", p);
	display(p, p);
	printf("\n");
	printf("%d\n", q);
	display(q, q);
	getch();
}

void display(node *i, node *j)
{
	if(i->b != j)
	{
		printf(" %d\t%d\n", i->a, i->b);
		if(i->b->b == j)
		{
			printf(" %d\t%d\n", i->b->a, i->b->b);
		}
		display(i->b, j);
	}
}

node *split(node *i, node *j)
{
	int a;
	node *n, *q;
	node *find(node *,int);
	printf(" Enter the the no. of split : ");
	scanf("%d", &a);
	n = find(i, a);
	q = n->b;
	n->b = i;
	j->b = q;
	return q;
}

node *find(node *i, int y)
{
	if(i->a == y)
	{
		return i;
	}
	else
	{
		find(i->b, y);
	}
}

node *create(node *i, node *r)
{
	int a;
	node *w;
	printf(" Enter Number ( 0 to End.) : ");
	scanf("%d", &a);
	if(a == 0)
	{
		i->a = a;
		i->b = r;
		return w;
	}
	else
	{
		w = new node;
		i->a = a;
		i->b = w;
		create(w, r);
	}
}
/*********************************************************************
Output :

*********************************************************************/
