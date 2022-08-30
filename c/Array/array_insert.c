#include <stdio.h>
void Insert(int [], int,int,int,int);
int main(){
    int A[5]={55,33,42};
    Insert(A,5,3,77,2);
    for(int i=0;i<5;i++){
        printf("%d,",A[i]);
    }
    printf("\n");
    return 0;
}
void Insert(int A[],int size, int c, int k, int loc){
    int t;
    if(c==size){
        printf("overflow");
    }
    else if(loc>c){
        A[c]=k;
        c++;
    }
    else{
        for(int i=loc; i<=c+1;i++){
            t=A[i-1];
            A[i-1]=k;
            k=t;
        }
        c++;
    }
}