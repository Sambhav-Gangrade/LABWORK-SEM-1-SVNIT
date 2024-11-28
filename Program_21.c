#include <stdio.h>

int main(){
    int a,b;
    char val;
    printf("This is a simple calculator, it can add, subtract, multiply and divide\n");
    printf("Enter a number\n");
    scanf("%d",&a);
    printf("Enter a second number\n");
    scanf("%d",&b);
    printf("Press a to add\nPress s to subtract\nPress m to multiply\nPress d to divide\n");
    scanf(" %c",&val);
    switch(val)
    {
        case 'a' : printf("\n Sum is %d",a+b);
                break;
        case 's' : printf("\n Difference is %d",a-b);
                break;
        case 'm' : printf("\n Multplying %d with %d we get %d",a,b,a*b);
                break;
        case 'd' : printf("\n Dividing %d with %d we get %d",a,b,a/b);
                break;
        default : printf("\n Invalid input");
    }
    
    return 0;
}