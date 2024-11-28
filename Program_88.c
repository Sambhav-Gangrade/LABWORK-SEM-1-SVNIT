#include <stdio.h>

int main(){
    int a[5]={1,2,3,4,5},b[5];
    int* p= &a;
    int* q= &b;
    for (int i=0;i<5;i++)
    {
        *(q+i)=*(p+i);
    }
    for (int i=0;i<5;i++)
    {
        printf("%d\t",*(q+i));
    }



    return 0;
}