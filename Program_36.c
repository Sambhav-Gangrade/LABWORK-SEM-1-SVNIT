#include <stdio.h>

int main(){
    int num,n=1;
    printf("Enter the series n\n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        printf("%d\t",n);
        n=n+2;
    }
    return 0;
}