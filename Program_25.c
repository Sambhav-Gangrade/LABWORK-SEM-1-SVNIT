#include <stdio.h>
//print table of any number
int main(){
    int num;
    printf("Enter the number whose table you want to see\n");
    scanf("%d",&num);
    int i = 1;
    while(i<11)
    {
        printf(" %d x %d is %d\n",num,i,num*i);
        i=i+1;
    }
    
    return 0;
}