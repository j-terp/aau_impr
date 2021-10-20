#include <stdio.h>
#include <stdlib.h>

// Konstanter for konvertering
# define SECONDS_PER_MINUTE 60
# define SECONDS_PER_HOUR 3600

void hours_minutes_seconds(int, int *, int *, int *);

int main(void) {
  int input_seconds, hours, minutes, seconds;

  printf("Enter amount of seconds: ");
  scanf("%d", &input_seconds);

  printf("%d sekunder svarer til ", input_seconds);

  // Kontrollerer negativt tal
  if (input_seconds < 0) {
      input_seconds = -input_seconds;
      printf("negativ ");
  }

  // Printer ud 0 hvis tiden er 0
  if (seconds == 0) {
      printf("%d sekunder", seconds);
  }
  else {
    hours_minutes_seconds(input_seconds, &hours, &minutes, &seconds);

    // Printer ud timer hvis det er større end 0, plural om større end 1
    if (hours > 0) {
      printf("%d time", hours);
      if (hours > 1) {
        printf("r");
      }
      // Hvis de følgende variable ikke er 0, så printes modsvarende bindeord
      if (minutes != 0 && seconds != 0)
        printf(", ");
      else if ((minutes == 0 && seconds != 0) || (minutes != 0 && seconds == 0))
        printf(" og ");
    }

    // Printer ud minuter hvis det er større end 0, plural om større end 1
    if (minutes > 0) {
      printf("%d minut", minutes);
      if (minutes > 1)
        printf("ter");
      // Hvis de følgende variable ikke er 0, så printes modsvarende bindeord
      if (seconds != 0)
        printf(" og ");
    }

    // Printer ud sekunder hvis det er større end 0, plural om større end 1
    if (seconds > 0) {
      printf("%d sekund", seconds);
      if (seconds > 1)
        printf("er");
    }
  }

  return EXIT_SUCCESS;
}

// Konverterer antalet sekunder til variablerne timer, minuter og sekunder gennem pointers
void hours_minutes_seconds(int input_seconds, int *hours, int *minutes, int *seconds) {
  *hours = input_seconds / SECONDS_PER_HOUR;
  input_seconds = input_seconds % SECONDS_PER_HOUR;

  *minutes = input_seconds / SECONDS_PER_MINUTE;
  *seconds = input_seconds % SECONDS_PER_MINUTE;
}