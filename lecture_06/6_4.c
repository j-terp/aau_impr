#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double multi_apply(double (*) (double), int, double),
       multi_apply_2(double (*) (double), double (*) (double), int, double),
       half(double),
       twice(double),
       square_root(double),
       square(double);

int main(void) {
  int n;
  double s;
  double (*f) (double) = half;
  double (*g) (double) = twice;
  double (*h) (double) = square_root;
  double (*i) (double) = square;

  double res1 = multi_apply(f, 4, 16.0);
  printf("%f\n", res1);
  double res2 = multi_apply_2(g, h, 4, 16.0);
  printf("%f\n", res2);
}

double multi_apply(double (*f) (double), int n, double s) {
  while (n > 0) {
    s = (*f) (s);
    n--;
  }
  return s;
}

double multi_apply_2(double (*f) (double), double (*g) (double), int n, double s) {
  while (n > 0) {
    s = (*f) ((*g) (s));
    n--;
  }
  return s;
}

double half(double x) {
    return x/2;
}

double square_root(double x) {
  return sqrt(x);
}

double twice(double x) {
  return 2 * x;
}

double square(double x) {
  return x * x;
}