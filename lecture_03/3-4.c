// Denne opgave er en fortsættelse af en tidligere opgave, hvor vi konverterede hele sekunder til uger, dage, timer, minutter og sekunder efter sædvanlige principper. I denne opgave begrænser vi os til timer, minutter og sekunder (vi dropper altså interessen for uger og dage).

// Målet med opgaven er at træne dig i at bruge af if-else kæder, if'er i sekvens og betingede udtryk (med ?: operatoren). Målet er endvidere at opdele et lidt større program i mindre og markerede dele inden for main.

// Det er sjusket og utilfredsstillende når det oprindelige program giver output som dette:

//     75 sekunder svarer til 0 timer, 1 minutter og 15 sekunder
//     3700 sekunder svarer til 1 timer, 1 minutter og 40 sekunder
//     55 sekunder svarer til 0 timer, 0 minutter og 55 sekunder
//     3661 sekunder svarer til 1 timer, 1 minutter og 1 sekunder

// Vi ønsker at blive fri for '0 timer' og '0 minutter'. Endvidere ønsker vi korrekt angivelse af ental og flertal. Derfor foretrækker vi et program der giver følgende output:

//     75 sekunder svarer til 1 minut og 15 sekunder
//     3700 sekunder svarer til 1 time, 1 minut og 40 sekunder
//     55 sekunder svarer til 55 sekunder
//     3661 sekunder svarer til 1 time, 1 minut og 1 sekund

// Skriv en ny version af programmet, som opfylder disse krav.

// Overvej ombyggelig brugen af if-else kæder kontra sekvenser af if kontra betingede udtryk med brug af den ternære operator ?:
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
