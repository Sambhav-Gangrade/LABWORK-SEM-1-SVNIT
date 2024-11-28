#include <stdio.h>

int main(){
    int arr[10],odd_count=0,even_count=0;
    printf("Enter the array\n");
    for(int i=1;i<10;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            even_count=even_count+1;
        }
        else
        {
            odd_count=odd_count+1;
        }
    }
    printf("Entered array is\n");
    for(int i=1;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    printf("There are %d even numbers in this array",even_count);
    printf("\nThere are %d odd numbers in this array",odd_count);
    return 0;
}