#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of items in list");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int *p;
    p=&a;
    int max=*p;
    for (int i=1;i<n;i++){
        if(*p>max){
            max=*p;
        }
        p++;
    }
    printf("Biggest number in the list is %d", max);


    return 0;
}