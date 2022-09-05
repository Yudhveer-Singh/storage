#include<stdio.h>
struct Node{
    int data;
    struct Node *link;
};
int main()
{
    struct Node *L, *T;
    L=new Node();
    L->data=55;
    L->link=new Node();
    T=L->link;
    T->link=new Node();
    T=T->link;
    T->data=11;
    T->link=NULL;
    
    T=L;
    while(T!=NULL){
        printf("%d ",T->data);
        T=T->link;
    }
    return 0;
}
