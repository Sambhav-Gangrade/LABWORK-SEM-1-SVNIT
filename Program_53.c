#include <stdio.h>

int main() {
    int rows;
    printf("Enter the desired number of rows\n");
    scanf("%d",&rows);

    
    for (int i = 1; i <= rows; i++) 
    {
        for (int j = rows; j > i; j--) 
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    
    for (int i = rows - 1; i >= 1; i--) 
    {
        for (int j = rows; j > i; j--) 
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}