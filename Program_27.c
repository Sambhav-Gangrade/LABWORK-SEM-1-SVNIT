#include <stdio.h>

int main(){
    int b,num,flag=1;
    printf("Enter a number to check if prime\n");
    scanf("%d",&num);
    for(b=2;b<=num/2&&flag!=0;b++)
    {
        if(num%b==0)
        {
            flag=0;
        }
    }
    if(flag==1)
    printf("Number is prime");
    else
    printf("Number is not prime");
    return 0;
}