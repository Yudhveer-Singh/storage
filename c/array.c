#include <stdio.h>
int main(){
    int a[800],n;
    printf("Enter the number of array elements: ");
    scanf("%d",&n);
    printf("Enter the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Even-valued elements are:\n");
    for(int c=0;c<n;c++){
        if(a[c]%2==0){
            printf("%d\t",a[c]);
        }
    }
    printf("\nArray in reverse order is: \n");
    for(int ys=0;ys<n;ys++){
        printf("%d\t",a[n-ys-1]);
    }
    printf("\n[Program Finished]\n");
    return 0;
}