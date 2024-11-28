#include <stdio.h>

int main(){
    int i,num,sum=0,c,sum_2=0;
    printf("Enter the number to convert to single digit\n");
    scanf("%d",&num);
    do{
        i=num%10;
        sum=sum+i;
        num=num/10;
    }while(num!=0);
    do{
        c=sum%10;
        sum_2=sum_2+c;
        sum=sum/10;


    }while(sum>0);
    printf("%d",sum_2);
    
    return 0;
}