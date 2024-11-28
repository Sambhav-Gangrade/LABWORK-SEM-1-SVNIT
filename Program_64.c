#include <stdio.h>
#define MAX 3

int main(){
    int a[MAX],b[MAX],c[MAX],sum1=0,sum2=0,sum3=0;
    for(int i=0;i<MAX;i++)
    {
        for(int j=0;j<MAX;j++)
        {
            if(i==0)
            {
                printf("Enter the matrix (3x3): ");
                scanf("%d",&a[j]);
            }
            else if(i==1)
            {
                printf("Enter the matrix (3x3): ");
                scanf("%d",&b[j]);
            }
            else
            {
                printf("Enter the matrix (3x3): ");
                scanf("%d",&c[j]);
            }
        }
        printf("\n");
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
    for(int j=0;j<MAX;j++)
        {
            sum1=sum1+a[j];
            sum2=sum2+b[j];
            sum3=sum3+c[j];
        }
    printf("\nSum of row 1 is %d\n",sum1);
    printf("\nSum of row 2 is %d\n",sum2);
    printf("\nSum of row 3 is %d\n",sum3);
    return 0;
}