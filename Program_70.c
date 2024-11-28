#include <stdio.h>

int main(){
    int a[10],num,occ;
    printf("Enter the array\n");
    for(int i=0; i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number to find ---->  ");
    scanf("%d",&num);
    printf("Entered array is\n");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nYour requested element is present at the following indexes in the array\n");
    for(int i=0;i<10;i++)
    {
        if(a[i]==num)
        {
            occ=i;
            printf("%d\t",occ+1);
        }
        occ=0;

    }
    
    
    return 0;

}