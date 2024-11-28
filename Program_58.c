#include <stdio.h>

int main(){
    int a[10],b[10],c[10];
    printf("Enter the array\n");
    for(int i=1;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the second array\n");
    for(int j=1;j<10;j++)
    {
        scanf("%d",&b[j]);
    }
    printf("Entered array is\n");
    for(int i=1;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nEntered second array is\n");
    for(int j=1;j<10;j++)
    {
        printf("%d\t",b[j]);
    }
    printf("\nThe third array is\n");
    for(int k=1;k<10;k++)
    {
        printf("%d\t",a[k]+b[k]);
    }


}