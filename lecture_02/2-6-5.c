// I den sidste version indlæser vi doubles:

#include <stdio.h>

int main(void) {

  double d1, d2;
  int scanRes;

  printf("Enter input on the following line\n");

  scanRes = scanf("%lf %lf", &d1, &d2);

  printf("d1 = %10.5f, d2 = %8.4f\n", d1, d2);
  printf("scanRes = %d\n", scanRes);

  return 0;
}

// Afprøv programmet med følgende input (i et tilsvarende antal kørsler af programmet). Forklar dine observationer:

// 12.34 56.78
// 12.34   56.78
// 12.34.56.78
// 12.34 56 . 78
// 12 34
// 012 034
// 12,34
// .12e3 .4e-2
// 12a34
// 12-34
// 12 - 34

// Svar: Flere komma adskiller variable, e med siffret x ganger talet med 10 i x'ende, bokstaver gør ellers resterende sammenhængende input ubrugelig. Minus adskiller og gør næste negativ, hvor i minus for sig selv giver et 0, fordi negativ 0 er 0.
// scanRes giver 2 når variablerne er adskilt korrekt, ellers er den 1 og den anden variabel er 0.