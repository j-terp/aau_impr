#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void functionChoice(int);
double trap(double, double, int, double (*) (double));
double g(double),
       h(double);

int main(void) {
  int choice;
  printf("Type the list index of the function");
  
  do {
    printf("\nWhat function do you want to calculate the area for?\n1. x^2 sin(x)\n2. sqrt(4 - x^2)\n");
    scanf("%d", &choice);
    if (choice > 0) {
      functionChoice(choice);
    }
  } while (choice > 0);
  printf("Bye");
  
  return EXIT_SUCCESS;
}

void functionChoice(int choice) {
  double a, b, result;
  int n;
  double (*f) (double);
  
  // Assigns correct boundries to the respective functions
  switch (choice) {
  case 1:
    a = 0.0;
    b = 3.14159;
    f = g;
    break;
  case 2:
    a = -2.0;
    b = 2.0;
    f = h;
    break;
  default:
    choice = 0;
    break;
  }

  // Calculates if 
  if (choice != 0) {
    do {
      // Input
      printf("\nEnter integer for the degree of approximation> ");
      scanf("%d", &n);
      if (n > 1) {
        result = trap(a, b, n, f);
        printf("The area under the curve is approximated to %f with %d sections\n", result, n);
      }
    } while (n > 0);
  }
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