#include <stdio.h>

int main(){
    printf("Given that 31558150 seconds is the time taken by Earth to complete one revolution \n");
    int second_in_min=60;
    int min_in_hour=60;
    int hour_in_day=24;
    int x=31558150;
    long total_mins=x/second_in_min;
    long total_hours=total_mins/min_in_hour;
    long total_days=total_hours/hour_in_day;
    printf("%ld days\n",total_days);
    printf("%ld hours\n",total_hours%hour_in_day);
    printf("%ld minutes\n",total_mins%min_in_hour);
    
    return 0;
}