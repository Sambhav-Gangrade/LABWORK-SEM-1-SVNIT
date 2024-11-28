#include <stdio.h>

int main(){
    int base,power;
    printf("Enter the base \n");
    scanf("%d",&base);
    printf("Enter the power\n");
    scanf("%d",&power);
    int i=1,result=1;
    while(i <= power)
    {
        result*=base;
        i=i+1;
    }
    printf("Result is %d",result);
    return 0;
}