#include <stdio.h>
//swap two variables using a third variable
int main(){
    int a,b,c;
    printf("Enter a number\n");
    scanf("%d",&a);
    printf("Enter a second number\n");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("Swapped value of a is %d\n",a);
    printf("Swapped value of b is %d\n",b);
    

    
    return 0;
}