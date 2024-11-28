#include <stdio.h>

int main(){
    int num;
    long int fact=1;
    printf("Enter the number to find factorial of\n");
    scanf("%d",&num);
    int i=1;
    while(i<=num)
    {
        fact=fact*i;
        i=i+1;
    }
    printf("Factorial of %d is %ld",num,fact);


    return 0;
}