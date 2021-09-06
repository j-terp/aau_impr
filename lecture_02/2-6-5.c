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