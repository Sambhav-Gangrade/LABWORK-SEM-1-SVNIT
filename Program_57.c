#include <stdio.h>
int main() 
{
    int n, i;
    int max1, max2;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    if (arr[0] > arr[1]) 
    {
        max1 = arr[0];
        max2 = arr[1];
    } 
    else 
    {
        max1 = arr[1];
        max2 = arr[0];
    }
    for (i = 2; i < n; i++) 
    {
        if (arr[i] > max1) 
        {
            max2 = max1;
            max1 = arr[i];
        } 
        else if (arr[i] > max2 && arr[i] != max1) 
        {
            max2 = arr[i];
        }
    }
    printf("Maximum value: %d\n", max1);
    printf("Second maximum value: %d\n", max2);
    return 0;
}