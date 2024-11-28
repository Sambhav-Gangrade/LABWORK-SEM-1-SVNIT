#include <stdio.h>

int main(){
    int m,p,c,e;
    printf("Enter marks obtained in Maths (out of 200) \n");
    scanf("%d",&m);
    printf("Enter the marks obtained in Physics (out of 200) \n");
    scanf("%d",&p);
    printf("Enter the marks obtained in Chemistry (out of 200) \n");
    scanf("%d",&c);
    printf("Enter the marks obtained in Entrance Exam \n");
    scanf("%d",&e);
    printf("Cutoff mark is %d",m/2+p/2+c/2+e);
    return 0;
}