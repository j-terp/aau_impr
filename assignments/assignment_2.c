// Programmør: Jonas Nagstrup Terp    Dato: 7 September, 2021
// Instruktør: Kurt Nørmark           Klasse: IMPR AAL E21
// 
// Konvererer antal sekunder til en tydeligere form, med uger, fage, timer, minuter og sekunder.
//
// Filen kan findes på https://github.com/j-terp/impr/blob/main/assignments/assignment_2.c
#include <stdio.h>

// Konstanter for konvertering
# define SECONDS_PER_MINUTE 60
# define SECONDS_PER_HOUR 3600
# define SECONDS_PER_DAY 86400
# define SECONDS_PER_WEEK 604800
int main(void){
    int weeks, days, hours, minutes, seconds;

    printf("Enter amount of seconds: ");scanf("%d", &seconds);

    // Konverterer antalet sekunder til formatet "uger, dage, timer, minuter og sekunder"
    weeks = seconds / SECONDS_PER_WEEK;     seconds = seconds % SECONDS_PER_WEEK;
    days = seconds / SECONDS_PER_DAY;       seconds = seconds % SECONDS_PER_DAY;
    hours = seconds / SECONDS_PER_HOUR;     seconds = seconds % SECONDS_PER_HOUR;
    minutes = seconds / SECONDS_PER_MINUTE; seconds = seconds % SECONDS_PER_MINUTE;

    printf("%d uger, %d dage, %d timer, %d minuter, %d sekunder.", weeks, days, hours, minutes, seconds);
    return 0;
}
