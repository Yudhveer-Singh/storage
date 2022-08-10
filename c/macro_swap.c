#include <stdio.h>
int t;
#define swap(a,b) t=a,a=b,b=t
int main(){
    int x=6,y=8;
    printf("Before swap:\n\tx=%d\n\ty=%d",x,y);
    swap(x,y);
    printf("\nAfter swap:\n\tx=%d\n\ty=%d\n",x,y);
    return 0;
}