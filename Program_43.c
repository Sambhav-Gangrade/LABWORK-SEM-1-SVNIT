#include <stdio.h>

int main(){
    int sales;
    float commission;
    printf("Enter sales done by the employee\n");
    scanf("%d",&sales);
    if(sales<=500)
    {
        commission=(5.0/100)*sales;
    }
    else if(sales>500&&sales<=2000)
    {
        commission=35+((10.0/100)*sales);
    }
    else if(sales>2000&&sales<=5000)
    {
        commission=185+((12.0/100)*sales);
    }
    else if (sales>5000)
    {
        commission=(12.5/100)*sales;
    }
    printf("Commission is %f",commission);
    return 0;
}