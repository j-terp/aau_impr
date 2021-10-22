#include <stdio.h>

int main(void) {
  int n, exceptions = 0;
  for (n = 1900; n <= 2100; n++) {
    if (isLeapYear(n) != leapYear(n)) {
      printf("For year %d, isLeapYear gives %d while leapYear gives %d", n, isLeapYear(n), leapYear(n));
      exceptions = 1;
    }
  }
  if (exceptions == 0) {
    printf("There is no mismatch");
  }
}

// Svar: Der er ingen undtagelser, begge funktioner gives samme resultat.