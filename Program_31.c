#include <stdio.h>

int main(){
    int num,q,sum=0;
    printf("Enter the number whose sum of digits you want to print\n");
    scanf("%d",&num);
    while(num!=0)
    {
        q=num%10;
        sum=sum+q;
        num=num/10;
    }
    printf("The sum of digits is %d",sum);
    return 0;
}