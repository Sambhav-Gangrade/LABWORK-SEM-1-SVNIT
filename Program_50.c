#include <stdio.h>

int main(){
    int row,j;
    for(row=0;row<5;row++)
    {
        for(j=0;j<=row;j++)
        {
            printf("%c",row+65);
        }
    
    printf("\n");
    }
    
    return 0;
}

