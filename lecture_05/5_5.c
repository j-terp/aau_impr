#include <stdio.h>

// Vi har tidligere i denne lektion mødt skudårsfunktionen

int isLeapYear(int year){
  int res;
  if (year % 400 == 0)
    res = 1;
  else if (year % 100 == 0)
    res = 0;
  else if (year % 4 == 0)
    res = 1;
  else res = 0;
  return res;
}

// Programmer en ny skudårsfunktion med brug af && og ||, og uden brug af if-else og uden brug af betingede udtryk.

// Kald begge skudårsfunktioner for alle årstal mellem år 1900 og år 2100. Giver de to funktioner samme resultat på alle årstal?

int leapYear(int year) {
  return !(year % 4) && (year % 100) || !(year % 400);
}

/*
int main(void) {
  int n;
  // Only takes positive integers
  do {
  printf("Input positive integer> ");
  scanf("%d", &n);
  } while (n < 1);
  printf("1: "), isLeapYear(n) ? printf("true\n"): printf("false\n");
  printf("2: "), leapYear(n) ? printf("true\n"): printf("false\n");
}
*/
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