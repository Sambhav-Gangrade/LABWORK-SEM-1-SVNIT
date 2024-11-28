#include <stdio.h>

int main(){
    int hours;
    float pay,gross;
    printf("Enter the hours worked \n");
    scanf("%d",&hours);
    printf("Enter pay per hour \n");
    scanf("%f",&pay);
    printf("Gross salary is %f ", hours*pay);
    return 0;
}