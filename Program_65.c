#include <stdio.h>
#define MAX 3

int main(){
    int a[MAX],b[MAX],c[MAX];
    printf("Enter the matrix below\n");
    for(int i=0;i<MAX;i++)
    {
        for(int j=0;j<MAX;j++)
        {
            if(i==0)
            {
                scanf("%d",&a[j]);
            }
            else if(i==1)
            {
                scanf("%d",&b[j]);
            }
            else
            {
                scanf("%d",&c[j]);
            }
        }
    }
    printf("\nMATRIX\n");
    for(int i=0;i<MAX;i++)
    {
        for(int j=0;j<MAX;j++)
        {
            if(i==0)
            {
                printf("%d\t",a[j]);
            }
            else if(i==1)
            {
                printf("%d\t",b[j]);
            }
            else
            {
                printf("%d\t",c[j]);
            }
        }
        printf("\n");
    }
    printf("\nTRANPOSE MATRIX\n");
    for(int j=0;j<MAX;j++)
    {
        for(int i=0;i<MAX;i++)
        {
            if(i==0)
            {
                printf("%d\t",a[j]);
            }
            else if(i==1)
            {
                printf("%d\t",b[j]);
            }
            else
            {
                printf("%d\t",c[j]);
            }
        }
        printf("\n");
    }
    return 0;
}