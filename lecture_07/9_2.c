#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void get_polynomium(double coeff[], int *);
double eval_polynomium(const double coeff[], int, double);

int main(void) {
  int polynomial_size = 8;
  double x, result;
  double *coefficients;
  coefficients = (double *)malloc(polynomial_size * sizeof(double));
  get_polynomium(coefficients, &polynomial_size);
  printf("x = ");
  scanf("%lf", &x);
  result = eval_polynomium(coefficients, polynomial_size, x);
  
  printf("f(%.2lf) = %f\n", x, result);
}

void get_polynomium(double coeff[], int* degreep) {
  printf("f(x) = ");
  for (size_t i = 0; i <= *degreep; i++) {
    coeff[i] = rand() % 10;
    if (i < *degreep){
      printf("%fx^%d + ", coeff[i], (*degreep - i));
    }
    else
      printf("%f\n", coeff[i]);
  }
}

double eval_polynomium(const double coeff[], int degree, double x) {
  double sum = 0;
  double a;
  for (int i = 0; i <= degree; i++) {
    if (i < degree) {
      a = (coeff[i] * pow(x, (degree - i)));
      printf("%f + ", a);
    }
    else {
      a = coeff[i];
      printf("%f\n", a);
    }
    sum += a;
  }
  return sum;
}