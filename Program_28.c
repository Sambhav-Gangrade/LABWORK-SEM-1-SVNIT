#include <stdio.h>

int main(){
    int q,i,num,sum=0,num_temp;
    printf("Enter a number to check if armstrong\n");
    scanf("%d",&num);
    num_temp=num;
    while(num!=0)
    {
        q=num%10;
        i=q*q*q;
        sum=sum+i;
        num=num/10;
    }
    if(sum==num_temp)
    {
        printf("Given number is armstrong");
    }
    else
    {
        printf("Given number is not armstrong");
    }

    
    return 0;
}