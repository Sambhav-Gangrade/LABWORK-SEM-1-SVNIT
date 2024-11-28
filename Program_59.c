#include <stdio.h>

int main(){
    int a[10],b[10],c[10],temp,temp2;
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
    printf("\nSwapped arrays are\n");
    for(int k=1;k<10;k++)
    {
        temp=a[k];
        a[k]=b[k];
        b[k]=temp;
        printf("%d\t",a[k]);
    }
    printf("\nSwapped second arrays are\n");
    for(int i=1;i<10;i++){
        printf("%d\t",b[i]);
    }
    return 0;
}