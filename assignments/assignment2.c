// Konverterer antal sekunder til en tydeligere form, med uger, dage, timer, minuter og sekunder.
//
#include <stdio.h>

// Konstanter for konvertering
# define SECONDS_PER_MINUTE 60
# define SECONDS_PER_HOUR (60 * SECONDS_PER_MINUTE)
# define SECONDS_PER_DAY (24 * SECONDS_PER_HOUR)
# define SECONDS_PER_WEEK (7 * SECONDS_PER_DAY)
int main(void){
    int weeks, days, hours, minutes, seconds;

    // Input af antal sekunder
    printf("Enter amount of seconds: ")
    ;scanf("%d", &seconds);

    // Konverterer antalet sekunder til formatet "uger, dage, timer, minuter og sekunder"
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
