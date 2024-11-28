#include <stdio.h>

int main(){
    float far,centi;
    printf("Enter the temprature ins farhenheit \n");
    scanf("%f",&far);
    centi=(far-32)*5/9;

    printf("The temprature in centigrade is %f ",centi);

    return 0;
}