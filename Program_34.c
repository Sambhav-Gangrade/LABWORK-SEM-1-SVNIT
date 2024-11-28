#include <stdio.h>

int main(){
    int a=0,b=1,c,num;
    printf("Enter the number of terms required in the fibonacci series\n");
    scanf("%d",&num);
    printf("%d\t",a);
    printf("%d\t",b);
    for(int n=0;n<=num;n++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;

    }


    return 0;
}