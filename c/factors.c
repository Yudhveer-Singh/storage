#include <stdio.h>
void factor(int);
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    factor(n);
    printf("\n[END]\n");
    return 0;
}
void factor(int n){
    printf("Factors of %d are: 1",n);
    for(int i=2;i<=n;i++){
        while(1){
            if(n%i==0){
                n/=i;
                printf("*%d",i);
            }else{
                break;
            }
        }
    }
}