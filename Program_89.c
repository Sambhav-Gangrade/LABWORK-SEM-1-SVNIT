#include <stdio.h>

int main(){
    int a[]={91,12,43,24,15} , b[5];
    int n = sizeof(a) / sizeof(a[0]);
    int *p;
    int *q;

    p = a;
    q = b;

    for(int i=0;i<n;i++)
    {
      b[n-i-1]=*(p+i);
    }
    for(int i=0;i<n;i++)
    {
      printf("%d\t",b[i]);
    }

    return 0;
}