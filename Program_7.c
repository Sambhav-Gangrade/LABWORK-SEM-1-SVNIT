#include <stdio.h>
// program to find area of a triangle
int main(){
    int b,h;
    printf("Enter the breadth of the triangle \n");
    scanf("%d", &b);
    printf("Enter the height of the triangle \n");
    scanf("%d", &h);
    printf("The area of the given triangle is %f",0.5*b*h);
    
    return 0;
}