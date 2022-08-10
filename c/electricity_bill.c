#include <stdio.h>
int main(){
    int bill=50, units;
    printf("Enter the number of units: ");
    scanf("%d",&units);
    if(units<=100){
        bill+=units*2;
    }else{
        bill+=100*2;
        units-=100;
        if(units<=100){
            bill+=units*3;
        }else{
            bill+=100*3;
            units-=100;
            if(units<=100){
                bill+=units*4;
            }else{
                bill+=100*4;
                units-=100;
                if(units>0){
                    bill+=units*5;
                }
            }
        }
    }
    printf("Your bill is %d rupees.\n",bill);
    printf("[Program Finished]\n");
    return 0;
}
/*
  0-100 2
*/