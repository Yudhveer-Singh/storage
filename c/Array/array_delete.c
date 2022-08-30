#include <stdio.h>
void Delete(int [], int,int,int);
int main(){
    int A[5]={55,33,42};
    Delete(A,5,3,2);
    for(int i=0;i<5;i++){
        printf("%d,",A[i]);
    }
    printf("\n");
    return 0;
}
void Delete(int A[],int size, int c, int loc){
    if(c==0){
        printf("underflow");
    }
    else{
        for(int i=loc-1; i<=c-1;i++){
            A[i]=A[i+1];
        }
        c--;
    }
}