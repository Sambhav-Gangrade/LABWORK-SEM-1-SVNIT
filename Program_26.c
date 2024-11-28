#include <stdio.h>

int main(){
    int i=1,n,sum_even=0,sum_odd=0;
    printf("Enter the number of your choice\n");
    scanf("%d",&n);
    while(i<n)
    {
        if (i%2==0)
        {
            sum_even=sum_even+i;
            i=i+1;
        }
        else 
        {
            sum_odd=sum_odd+i;
            i=i+1;
        }
    }
    printf("Uptil 1 to %d\n",n);
    printf("Sum of even numbers is %d\n",sum_even);
    printf("Sum of odd numbers is %d",sum_odd);

    
    return 0;
}