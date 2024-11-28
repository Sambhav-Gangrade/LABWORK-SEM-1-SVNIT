#include <stdio.h>

int main(){
    int a,b,c,max;
    printf("Enter values of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    // program to find max using logical operator &&
    if (a>b&&a>c)
    {
        max=a;
    }
    else if (b>a && b>c)
    {
        max=b;
    }
    else
    {
        max=c;
    }
    printf("Maximum value out of the given 3 numbers is %d",max);

     return 0;
}