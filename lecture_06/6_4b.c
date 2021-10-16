#include <stdio.h>
#include <stdlib.h>

double multi_apply(double (*) (double), int, double), half(double);

int main(void) {
  int n, s;
  double (*f) (double);
  f = &half; 

  double res = multi_apply(f, 4, 16.0);
  printf("%f", res);
}

double multi_apply(double (*f) (double), int n, double s) {
  for (n; n > 0; n--) {
    s = (*f) (s);
  }
}

double half(double x) {
    return x/2;
}