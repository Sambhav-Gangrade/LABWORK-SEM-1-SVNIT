#include <stdio.h>

int main(){
    int a,b;
    printf("Enter a number\n");
    scanf("%d",&a);
    printf("Enter a second number\n");
    scanf("%d",&b);
    a=a-b;
    b=b+a;
    a=b-a;
    printf("The swapped value of a is %d \n",a);
    printf("The swapped value of b is %d", b);
    
    return 0;
}