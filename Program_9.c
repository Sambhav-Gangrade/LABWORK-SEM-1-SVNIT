#include <stdio.h>

int main(){
    int hours,mins,secs;
    printf("Enter the hours \n");
    scanf("%d",&hours);
    printf("Enter the minutes \n");
    scanf("%d",&mins);
    printf("Enter the seconds \n");
    scanf("%d",&secs);
    int hrs_in_secs = hours*3600;
    int mins_in_secs = mins*60;
    printf("The total %d hours %d mins %d seconds add up to %d seconds",hours,mins,secs,hrs_in_secs+mins_in_secs+secs);
    return 0;
}