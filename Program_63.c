#include <stdio.h>
#define MAX 3

int main() {
    int a[MAX], b[MAX], c[MAX], max, min;
    printf("Enter the matrix (3x3):\n");
    for(int i = 0; i < MAX; i++) 
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < MAX; i++) 
    {
        scanf("%d", &b[i]);
    }
    for(int i = 0; i < MAX; i++) 
    {
        scanf("%d", &c[i]);
    }
    max = a[0];
    min = a[0];
    for (int i = 0; i < MAX; i++) 
    {
        if (max < a[i]) 
        {
            max = a[i];
        }
        if (min > a[i]) 
        {
            min = a[i];
        }
        if (max < b[i]) 
        {
            max = b[i];
        }
        if (min > b[i]) 
        {
            min = b[i];
        }
        if (max < c[i]) 
        {
            max = c[i];
        }
        if (min > c[i]) 
        {
            min = c[i];
        }
    }
    printf("\nMatrix:\n");
    for (int i = 0; i < MAX; i++) 
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    for (int i = 0; i < MAX; i++) 
    {
        printf("%d\t", b[i]);
    }
    printf("\n");
    for (int i = 0; i < MAX; i++) 
    {
        printf("%d\t", c[i]);
    }
    printf("\n");
    printf("\nMaximum number from this matrix is %d", max);
    printf("\nMinimum number from this matrix is %d\n", min);
    return 0;
} 
