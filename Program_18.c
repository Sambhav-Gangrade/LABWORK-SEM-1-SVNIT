#include <stdio.h>

int main(){
    int a,b,c,max,z;
    printf("Enter values of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    z=(a>b) ? a : b;
    max= (z>c) ? z : c;
    printf("Biggest out of the following 3 numbers is %d",max);
    return 0;
}