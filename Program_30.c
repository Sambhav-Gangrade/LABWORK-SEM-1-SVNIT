#include <stdio.h>

int main(){
    int num,q,i;
    printf("Enter your number to reverse\n");
    scanf("%d",&num);
    while(num!=0)
    {
        q=num%10;
        printf("%d",q);
        num=num/10;
    }
    return 0;
}