#include <stdio.h>
#define MAX 10
struct Stack
{
    int S[MAX];
    int top=0;
    bool full;
    bool empty;
};
void push(Stack *st,int n)
{
    if (st->full==false)
    {
        st->S[st->top]=n;
        st->top++;
        st->empty=false;
    }
    else
    {
        printf("Overflow");
    }
    if (st->top==MAX)
        st->full=true;
}

int pop(Stack *st)
{
    int n=-1;
    if(st->empty==true)
    {
        printf("Underflow");
    }
    else
    {
        st->top--;
        n=st->S[st->top];
    }
    if(st->top==0)
    st->empty=true;
    return n;
}

int main()
{
    Stack *St=new Stack;
    St->top=0;
    St->full=false;
    St->empty=true;
    int n=0,c;
    char f;
    while (1)
   {
      printf("\n1 for Push\n2 for  Pop\n3 for Exit\nEnter your Chooice:");
      scanf ("%d", &c);
      switch (c)
	{
	case 1:
	  printf ("Enter element you want Push into Stack :");
	  scanf ("%d", &n);
	  push(St, n);
	  break;
	case 2:
	  n=pop(St);
	  printf("\nelement poped=%d",n);
	  break;
	case 3:
	  return 0;
	}
	getchar();
  }
  
    return 0;
}
