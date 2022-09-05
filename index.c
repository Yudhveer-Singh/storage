#include <stdio.h>
int main(){
    /*int *x;
    int s=10;
    x=&s;
    x=new int(10);
    printf("x=%u\n",x);
    x=20;
    printf("x=%d\n",x);*/
    int A[5]={11,22,33,44,55};
    int *p;
    p=A;
    for(int i=0;i<5;i++){
        printf("%d ",*p);
        p++;
    }
    return 0;
}