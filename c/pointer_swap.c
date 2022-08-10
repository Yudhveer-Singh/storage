#include <stdio.h>
int main(){
    int a=5;
    int b=7;
    printf("Before swap:\n");
    printf("\ta=%d\n\tb=%d\n",a,b);
    int *pa=&a;
    int *pb=&b;
    int t=*pa;
    *pa=*pb;
    *pb=t;
    printf("After swap:\n");
    printf("\ta=%d\n\tb=%d\n",a,b);
    return 0;
}