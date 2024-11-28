#include <stdio.h>

int main(){
    int a,b;
    int val;
    printf("This is a simple calculator, it can add, subtract, multiply and divide\n");
    printf("Enter a number\n");
    scanf("%d",&a);
    printf("Enter a second number\n");
    scanf("%d",&b);
    printf("Press 1 to add\nPress 2 to subtract\nPress 3 to multiply\nPress 4 to divide\n");
    scanf("%d",&val);
    switch(val)
    {
        case 1 : printf("\n Sum is %d",a+b);
                break;
        case 2 : printf("\n Difference is %d",a-b);
                break;
        case 3 : printf("\n Multplying %d with %d we get %d",a,b,a*b);
                break;
        case 4 : printf("\n Dividing %d with %d we get %d",a,b,a/b);
                break;
        default : printf("\n Invalid input");
    }

    
    return 0;
}