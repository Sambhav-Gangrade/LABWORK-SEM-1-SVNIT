#include <stdio.h>

int main(){
    int num;
    printf("Enter the number whose factors to find\n");
    scanf("%d",&num);
    printf("The factors are :- ");
    for (int i=1;i<=num;i++)
    {
        if (num%i==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}