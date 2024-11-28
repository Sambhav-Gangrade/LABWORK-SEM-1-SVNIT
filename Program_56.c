#include <stdio.h>

int main(){
    int arr[10],p_count=0,n_count=0,z_count=0;
    printf("Enter the array\n");
    for(int i=1;i<10;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>0)
        {
            p_count=p_count+1;
        }
        else if(arr[i]==0)
        {
            z_count=z_count+1; 
        }
        else if(arr[i]<0)
        {
            n_count=n_count+1;
        }
    }
    printf("Entered array is\n");
    for(int i=1;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nThere are %d positive numbers in this array",p_count);
    printf("\n%d times \"0\" has come in this array ",z_count);
    printf("\nThere are %d negative numbers in this array",n_count);
    return 0;
}