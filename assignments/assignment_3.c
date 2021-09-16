// Programmør: Jonas Nagstrup Terp    Dato: 7 September, 2021
// Instruktør: Kurt Nørmark           Klasse: IMPR AAL E21
// 
// Konverterer antal sekunder til en tydeligere form med korrekt numerus, med timer, minuter og sekunder.
//
#include <stdio.h>
#include <stdlib.h>

// Konstanter for konvertering
# define SECONDS_PER_MINUTE 60
# define SECONDS_PER_HOUR 3600
int main(void) {
    int hours, minutes, seconds;

    printf("Enter amount of seconds: ");
    scanf("%d", &seconds);
    printf("%d sekunder svarer til ", seconds);

    // Kontrollerer negativt tal
    if (seconds < 0) {
        seconds = -seconds;
        printf("negativ ");
    }

    // Printer ud 0 hvis tiden er 0
    if (seconds == 0) {
        printf("%d sekunder", seconds);
    }
    else {
        // Konverterer antalet sekunder til formatet "timer, minuter og sekunder"
        hours = seconds / SECONDS_PER_HOUR;
        seconds = seconds % SECONDS_PER_HOUR;

        minutes = seconds / SECONDS_PER_MINUTE;
        seconds = seconds % SECONDS_PER_MINUTE;

        // Printer ud timer hvis det er større end 0, plural om større end 1
        if (hours > 0) {
            printf("%d time", hours);
            if (hours > 1) {
                printf("r");
            }
            // Hvis de følgende variable ikke er 0, så printes modsvarende bindeord
            if (minutes != 0 && seconds != 0) {
                printf(", ");
            }
            else if ((minutes == 0 && seconds != 0) || (minutes != 0 && seconds == 0)) {
                printf(" og ");
            }
        }

        // Printer ud minuter hvis det er større end 0, plural om større end 1
        if (minutes > 0) {
            printf("%d minut", minutes);
            if (minutes > 1) {
                printf("ter");
            }
            // Hvis de følgende variable ikke er 0, så printes modsvarende bindeord
            if (seconds != 0) {
                printf(" og ");
            }
        }

        // Printer ud sekunder hvis det er større end 0, plural om større end 1
        if (seconds > 0) {
            printf("%d sekund", seconds);
            if (seconds > 1) {
                printf("er");
            }
        }
    }

    return EXIT_SUCCESS;
}