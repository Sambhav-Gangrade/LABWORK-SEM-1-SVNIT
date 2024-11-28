#include <stdio.h>

int main(){
    int arr[10],sum=0;
    printf("Enter the array\n");
    for(int i=1;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Entered array is\n");
    for(int i=1;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for(int i=1;i<10;i++)
    {
        sum=sum+arr[i];
    }
    printf("Sum is %d",sum);
    return 0;
}