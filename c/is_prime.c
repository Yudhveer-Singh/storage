#include <stdio.h>
int is_prime(int);
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d is %s\n",n,is_prime(n)?"prime":"not prime");
    printf("Prime numbers upto 100 are:\n");
    for(int i=1;i<100;i++){
        if(is_prime(i)){
            printf("%d\t",i);
        }
    }
    printf("\n[END]\n");
    return 0;
}
int is_prime(int n){
    if(n==1){
        return 0;
    }
    if(n<=0){
        return -1;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}