#include <stdio.h>

struct Node
{
  int data;
  Node *link;
};

void traverse (Node * t)
{
  printf ("List=");
  t=t->link;
  while (t != NULL)
    {
      printf ("%d ", t->data);
      t = t->link;
    }
}

void insertAtEnd (Node * t, int k)
{
  Node *n;
  n = new Node ();
  n->link = NULL;
  n->data = k;
  while (t->link != NULL)
    t = t->link;

  t->link = n;

}

void insertAtStart (Node * t, int k)
{
  Node *n;
  n = new Node ();
  n->data = k;
  n->link = t->link;
  t->link = n;

}

void insertAtMid (Node * t, int k, int m)
{
  Node *n;
  n = new Node ();
  n->data = k;
  n->link = NULL;
  while (t->data != m)
    t = t->link;
  n->link = t->link;
  t->link = n;

}

void deleteAtEnd (Node * t)
{
  while (t->link->link != NULL)
    t = t->link;
  t->link = NULL;
}

void deleteAnyNode (Node * t, int n)
{
  while (t->link->data != n)
    t = t->link;
  t->link = t->link->link;
}

void deleteAtStart (Node * t)
{
  t->link = t->link->link;
}



int main ()
{
  Node *start = NULL;
  int c, n, m, x;
  start = new Node ();
  start->data = NULL;
  start->link = NULL;
  while (1)
  {
      printf("\n1 for Insert at End\n2 for  Print\n3 for Insert at Start\n4 for Insrt at mid\n5 for delete at End\n6 for delete at start\n7 for delete any node\nEnter your Chooice::");
      scanf ("%d", &c);
      switch (c)
	{
	case 1:
	  printf ("Enter element you want to Insert at End:");
	  scanf ("%d", &n);
	  insertAtEnd (start, n);
	  break;
	case 2:
	  traverse (start);
	  break;
	case 3:
	  printf ("Enter element you want to Insert at Start:");
	  scanf ("%d", &n);
	  insertAtStart (start, n);
	  break;
	case 4:
	  printf ("Enter element after which you want to Insert:");
	  scanf ("%d", &m);
	  printf ("Enter element you want to Insert at Start:");
	  scanf ("%d", &n);
	  insertAtMid (start, n, m);
	  break;
	case 5:
	  deleteAtEnd (start);
	  printf ("Deleted ");
	  break;
	case 6:
	  deleteAtStart (start);
	  printf ("Deleted ");
	  break;
	case 7:
	  printf ("Enter element you want to delete:");
	  scanf ("%d", &n);
	  deleteAnyNode (start, n);
	  break;
	case 8:
	  return 0;
	}
  }

  return 0;
}
