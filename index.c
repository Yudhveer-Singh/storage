#include <stdio.h>
int add_numbers(int a, int b){
    int c;
    c=a+b;
    return c;
}
int main(){
    int x,y,z;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    z=add_numbers(x,y);
    printf("Sum is %d\n",z);
}