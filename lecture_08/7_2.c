#include <stdio.h>
#include <stdlib.h>

// Konstanter for konvertering
# define SECONDS_PER_MINUTE 60
# define SECONDS_PER_HOUR 3600

int main(void) {
  int hours, minutes, seconds,
      negative;
  printf("Enter amount of seconds: ");
  scanf("%d", &seconds);

  // Kontrollerer negativt tal
  negative = (seconds < 0) ? 1 : 0;

  printf("%d hours, %d minutes and %d seconds", hours, minutes, seconds);

  return EXIT_SUCCESS;
}

void calc_time(int *h, int *m, int *s) {
  *s = (*s < 0) ? (*s * -1) : *s;
  *h = *s / SECONDS_PER_HOUR;
  *s = *s % SECONDS_PER_HOUR;
  *m = *s / SECONDS_PER_MINUTE;
  *s = *s % SECONDS_PER_MINUTE;
}