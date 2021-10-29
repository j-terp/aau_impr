#include <stdio.h>
#include <stdlib.h>

void calcPi(double*,int);

int main(void) {
  double pi;
  int n;
  do {
    printf("\nInput precision for calculation of pi> ");
    scanf("%d", &n);
    if (n > 0) {
      calcPi(&pi, n);
      printf("%f", pi);
    }
  } while (n > 0);
  return EXIT_SUCCESS;
}

void calcPi(double *value, int n) {
  double iteration = 0;
  n = 2 * n + 1;
  for (size_t i = 1; i < n; i += 2) {
    iteration += (i % 4 == 1) ? 1.0 / ((double) i) : -(1.0 / ((double) i));
  }
  *value = 4 * iteration;
}
