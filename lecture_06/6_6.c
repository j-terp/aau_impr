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