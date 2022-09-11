#include<stdio.h>
struct Node{
    int data;
    struct Node *link;
};
void insertatend(struct Node *t, int K){
    Node *n=new Node();
    n->data=K;
    n->link=NULL;
    while(t->link!=NULL){
        t=t->link;
    }
    t->link=n;
}
void insertatstart(struct Node *t, int K){
    Node *n=new Node();
    n->data=K;
    n->link=t->link;
    t->link=n;
}
void Traverse(struct Node *t){
    t=t->link;
    while(t!=NULL){
        printf("%d ",t->data);
        t=t->link;
    }
 }
int main()
{
    struct Node *S, *T;
    S=new Node();
    S->data=NULL;
    S->link=NULL;
    insertatend(S,33);
    insertatend(S,11);
    insertatend(S,44);
    insertatstart(S,22);
    
    Traverse(S);
    printf("\n");
    return 0;
}
