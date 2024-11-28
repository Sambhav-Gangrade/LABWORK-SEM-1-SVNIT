#include <stdio.h>

int main(){
   int num,flag=1;
   printf("Enter a number to check if prime or composite\n");
   scanf("%d",&num);
   for(int i=2;i<=num/2&&flag!=0;i++)
   {
    if(num%i==0)
    {
        flag=0;
    }
   }
   if(flag==1)
   printf("Following number is prime");
   else
   printf("Following number is composite");
   
   
   return 0;
}