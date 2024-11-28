#include <stdio.h>
// program to calculate simple intrest
int main(){
    float p,r,t,intrest;
    printf("Enter the principle amount borrowed \n");
    scanf("%f",&p);
    printf("Enter the rate at which principle is borrowed \n");
    scanf("%f",&r);
    printf("Enter the time for which principle is borrowed \n");
    scanf("%f",&t);
    intrest=(p*r*t)/100.0;
    printf("The intrest is %f ",intrest );
    
    return 0;
}