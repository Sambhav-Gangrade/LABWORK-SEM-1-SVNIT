#include <stdio.h>

int main(){
    int num,n=1,j=1,sq;
    printf("Enter the series n\n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {   
        sq=n*n;
        printf("%d\t",sq);
        n=n+1;
        

    }
    return 0;
}