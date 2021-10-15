// Skriv et C program som konverterer valuta i dollars til euro, kroner, rubler og yen. I kan antage en én dollar er 0.89 euros, 6.66 kroner, 66.43 rubler og 119.9 yen.

// I denne opgave skal der indgå en funktion med én input parameter (dollar-beløbet), og fire output parametre (svarende til de fire andre valutaer).

// Brug funktionen til at udskrive en omregningstabel til omregning af 1, 2, 3, ... 100 dollars til de fire andre valutaer.

// (Denne opgave svarer til programmeringsprojekt 1, side 384 i 7. udgave af lærebogen).

#include <stdio.h>
#include <stdlib.h>

void dollarConvert(double, double *, double *, double *, double *);

int main(void) {
  int limit = 100;
  double dollar, euro, kroner, rubler, yen;

  printf("Dollar |   Euro    |  Kroner   |  Rubler   |    Yen    \n");
  printf("-------+-----------+-----------+-----------+-----------\n");
  for (dollar = 1; dollar <= limit; dollar++) {
    dollarConvert(dollar, &euro, &kroner, &rubler, &yen);
    printf("%6.lf | %9.2f | %9.2f | %9.2f | %9.2f\n", dollar, euro, kroner, rubler, yen);
  }
}

void dollarConvert(double usd, double *eur, double *dkk, double *rub, double *jpy) {
  *eur = usd * 0.89;
  *dkk = usd * 6.66;
  *rub = usd * 66.43;
  *jpy = usd * 119.9;
}