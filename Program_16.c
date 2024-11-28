#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter values of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if (a>c)
        {
            printf("Value of a=%d is the biggest",a);
        }
        else
        {
            printf("Value of c=%d is the biggest",c);
        }
    }
    else if (b>a)
    {
        if (b>c)
        {
            printf("Value of b=%d is the biggest",b);
        }
        else
        {
            printf("Value of c=%d is the biggest",c);
        }
    }
    return 0;
}