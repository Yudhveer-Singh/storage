/******************************************************************************

To print an simple array.

*******************************************************************************/
#include <stdio.h>
void Traverse(int [], int);
int Max(int [],int);
int Min(int [],int);
int SecondMax(int [],int);

int main()
{
    int  B[10]={24,53,35,22,88,101,66,11,99,83};
    
    int x=Max(B,10);
    int y=Min(B,10);
    int z=SecondMax(B,10);
    
    Traverse(B,10);
    printf("Maximum =%d\n",x);
    printf("Second Maximum =%d\n",z);
    printf("Minimum =%d\n",y);
    
    return 0;
}

void Traverse(int A[],int n){
    int i;
    for(i=0;i<=9;i++){
        A[i]=A[i];
        printf("%d\n",A[i]);
    }
}

int Max(int A[], int n){
    int i, x=A[0];
    for(i=1;i<n;i++){
        if(A[i]>x){
            x=A[i];
        }
    }
    return x;
}
int Min(int A[], int n){
    int i, min=A[0];
    for(i=1;i<n;i++){
        if(A[i]<min){
            min=A[i];
        }
    }
    return min;
}
int SecondMax(int A[], int n){
    int i;
    int max=A[0];       //maximum
    int s=A[0];         //second maximum
    
    for(i=1;i<n;i++)
    {
        if(A[i]>max)
        {
            s=max;
            max=A[i];
        }
    }
    
    if(max==s)
    {
        s=A[1];
        for(i=2;i<n;i++)
        {
            if(A[i]>s)
            {
                s=A[i];
            }
        }
    }
    
    return s;
}



