#include <stdio.h>

// Konstanter for konvertering
# define SECONDS_PER_MINUTE 60
# define SECONDS_PER_HOUR 3600
# define SECONDS_PER_DAY 86400
# define SECONDS_PER_WEEK 604800
int main(void){
    int weeks, days, hours, minutes, seconds;

    printf("Enter amount of seconds: ");
    scanf("%d", &seconds);

    weeks = seconds / SECONDS_PER_WEEK;
    seconds = seconds % SECONDS_PER_WEEK;
    days = seconds / SECONDS_PER_DAY;
    seconds = seconds % SECONDS_PER_DAY;
    hours = seconds / SECONDS_PER_HOUR;
    seconds = seconds % SECONDS_PER_HOUR;
    minutes = seconds / SECONDS_PER_MINUTE;
    seconds = seconds % SECONDS_PER_MINUTE;

    printf("%d uger, %d dage, %d timer, %d minuter, %d sekunder.", weeks, days, hours, minutes, seconds);
    return 0;
}