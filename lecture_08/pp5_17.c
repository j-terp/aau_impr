#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double trap(double, double, int, double (*) (double));
double g(double),
       h(double);

int main(void) {
  double a = -2.0,
         b = 2.0;
  int n;
  double (*f) (double) = h;

  do {
  // Input
    printf("\nEnter value of n> ");
    scanf("%d", &n);
    if (n > 0)
      printf("The area under the curve is approximated to %f\n", trap(a, b, n, f));
  } while (n > 0);
  
  return EXIT_SUCCESS;
}

double trap(double a, double b, int n, double (*f) (double)) {
  double x, h, sum = 0, T;
  x = a;
  h = (b - a) / n;
  for (size_t i = 1; i < n; i++) {
    sum += (*f) (x + (h * i));
  }
  T = h * (((*f) (a) + (*f) (b)) / 2 + sum);
  return T;
}

double g(double x) {
  double res;
  res = pow(x, 2) * sin(x);
  return res;
}

double h(double x) {
  double res;
  res = sqrt(4 - pow(x, 2));
  return res;
}