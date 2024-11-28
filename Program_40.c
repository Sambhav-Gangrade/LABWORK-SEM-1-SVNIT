#include <stdio.h>

int main(){
    int num,sum=0,tempnum;
    printf("Enter the numbers whose sum to find\n");
    tempnum=num;
    do{
        scanf("%d",&num);
        if(num>=0)
        {
            sum=sum+num;
        }
    }while(num>0);
    printf("%d is the sum",sum);
    return 0;
}