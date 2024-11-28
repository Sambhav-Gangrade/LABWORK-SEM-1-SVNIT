#include <stdio.h>
// program to calculate percentage of student
int main(){
    int s1,s2,s3,s4,s5,total;
    float percent;
    printf("Enter marks of student in subject 1 \n");
    scanf("%d",&s1);
    printf("Enter marks of student in subject 2 \n");
    scanf("%d",&s2);
    printf("Enter marks of student in subject 3 \n");
    scanf("%d",&s3);
    printf("Enter marks of student in subject 4 \n");
    scanf("%d",&s4);
    printf("Enter marks of student in subject 5 \n");
    scanf("%d",&s5);
    total=(s1+s2+s3+s4+s5);
    percent=(total*100)/500.0;
    printf("Total marks obtained by student are %d \n", total);
    printf("Percentage of student is %f ", percent);

    return 0;
}