#include <stdio.h>
void swap(int*, int*);
int main(){
    int a=4, b=7;
    printf("Before swap:\n");
    printf("\ta=%d\n\tb=%d\n",a,b);
    swap(&a,&b);
    printf("After swap:\n");
    printf("\ta=%d\n\tb=%d\n",a,b);
    return 0;
}
void swap(int *p, int *q){
    int t=*p;
    *p=*q;
    *q=t;
}