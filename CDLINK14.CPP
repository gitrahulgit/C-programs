/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Program to maintain a doubly linked list.
*********************************************************************/

#include <iostream.h>
#include <conio.h>

struct node
{
	struct node *pre;
	int data;
	struct node *next;
};

void d_append(node **, int);
void d_display(node *);
void d_addatbeg(node **, int);
void d_addafter(node *, int, int);
void d_addbefore(node *, int, int);
void d_delete(node **, int);
int count(node *);

void main()
{
	node *p;
	p = NULL;  // empty doubly linked list.
	d_append(&p, 11);
	d_append(&p, 11);
	clrscr();
	d_display(p);
	cout << "\n No. of elements in the DLL = " << count(p);

	d_addatbeg(&p, 33);
	d_addatbeg(&p, 55);
	d_display(p);
	cout << "\n No. of elements in the DLL = " << count(p);

	d_addafter(p, 1, 4000);
	d_addafter(p, 2, 9000);
	d_display(p);
	cout << "\n No. of elements in the DLL = " << count(p);

	d_addbefore(p, 3, 500);
	d_addbefore(p, 4, 200);
	d_display(p);
	cout << "\n No. of elements in the DLL = " << count(p);

	d_delete(&p, 55);
	d_delete(&p, 21);
	d_display(p);
	cout << "\n No. of elements in the DLL = " << count(p);
	getche();
}

//adds a new node at the end of the doubly linked list.
void d_append(node **s, int num)
{
	node *r, *q = *s;       // i.e.  q = *s;
	// if the linked list is empty.
	if(*s == NULL)
	{
		//create a new node.
		*s = new node;
		(*s)->pre = NULL;
		(*s)->data = num;
		(*s)->next = NULL;
	}
	else
	{
		//traverse the linked list till the last node is reached.
		while(q->next != NULL)
			q = q->next;
		// add a new node at the end,.
		r = new node;
		r->data = num;
		r->pre = q;
		r->next = NULL;
		q->next = r;
	}
}

//adds a new node at the begining of the linked list.
void d_addatbeg(node **s, int num)
{
	node *q;
	//create a new node.
	q = new node;
	//assign data and pointer to the new node.
	q->pre = NULL;
	q->data = num;
	q->next = *s;
	//make new node the head node.
	(*s)->pre = q;
	*s = q;
}

//adds a new node after the specified number of nodes.
void d_addafter(node *q, int loc, int num)
{
	node *temp;
	int i;
	//skip to desired portion.
	for(i=0 ; i<loc ; i++)
	{
		q = q->next;
		//if end of linked list is encountered.
		if(q == NULL)
		{
			cout << "\nThere are less than "
			     << loc << " elements.";
			//return;
		}
	}
	//insert new node.
	q = q->pre;
	temp = new node;
	temp->data = num;
	temp->pre = q;
	temp->next = q->next;
	temp->next->pre = temp;
	q->next = temp;
}
void d_addbefore(node *q, int loc, int num)
{
	node *temp;
	int i;
	//skip to desired portion.
	for(i=0 ; i<loc-1 ; i++)
	{
		q = q->next;
		//if end of linked list is encountered.
		if(q == NULL)
		{
			cout << "\nThere are less than "
			     << loc << " elements.";
			//return;
		}
	}
	//insert new node.
	q = q->pre;
	temp = new node;
	temp->data = num;
	temp->pre = q;
	temp->next = q->next;
	temp->next->pre = temp;
	q->next = temp;
}


//displays the contents of the linked list,.
void d_display(node *q)
{
	cout << "\n\n";
	//traverse the entire linked list.
	while(q != NULL)
	{
		cout << " <--> " << q->data;
		q = q->next;
	}
	cout << " --> NULL\n";
}

//counts the number of nodes present in the linked list.
int count(node *q)
{
	int c = 0;
	// traverse the entire linked list.
	while(q != NULL)
	{
		q = q->next;
		c++;
	}
	return c;
}

//deletes the specified node from the doubly llinked list.
void d_delete(node **s, int num)
{
	node *q = *s;
	//traverse the entire lilnked list.
	while(q != NULL)
	{
		// if node to be deleted is found.
		if(q->data == num)
		{
			//if node to be deleted is the first node.
			if(q == *s)
			{
				*s = (*s)->next;
				(*s)->pre = NULL;
			}
			else
			{
				//if node to be deleted is the last node.
				if(q->next == NULL)
					q->pre->next = NULL;
				else
					//if node to be deleted is
					//any intermediate node.
				{
					q->pre->next = q->next;
					q->next->pre = q->pre;
				}
				delete(q);
			}
			return;  //return back after deletion.
		}
		q = q->next;  //go to next node.
	}
	cout << "\n\n" << num << " not found.";
}
/*********************************************************************
Output :

*********************************************************************/
