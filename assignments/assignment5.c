#include <stdio.h>
#include <math.h>

void solveQuadraticEquation(double, double, double),
     print_root1(double, double, double),
     print_root2(double, double, double);
double calc_disc(double, double, double);

int main(void) {
  double a, b, c;

  /* Coefficents are entered by user outside solveQuadraticEquation */
  do {
  printf("Enter coeficients a, b, and c: ");
  scanf("%lf %lf %lf", &a, &b, &c);
  solveQuadraticEquation(a, b, c);
  } while (a != 0 && b != 0 && c != 0);

  return 0;
}

/* Prints roots of the quadratic equation a * x*x + b * x + c = 0 */
void solveQuadraticEquation(double a, double b, double c){
  double discriminant = calc_disc(a, b, c),
         root1,
         root2;
  if (!(a == 0 && b == 0 && c == 0)) {
    if (discriminant < 0)
      printf("No roots");
    else if (discriminant == 0)
      printf("One root: ");
    else 
      printf("Two roots: ");

    print_root1(discriminant, a, b);
    print_root2(discriminant, a, b);
  }
}

// Calculates discriminant
double calc_disc(double a, double b, double c) {
  return b * b - 4 * a * c;
}

// Prints first root if there is one
void print_root1(double d, double a, double b) {
  if (d >= 0)
    printf("%f ", ((d == 0) ? -b/(2*a) : (-b + sqrt(d))/(2*a)));
}

// Prints second root if there is one
void print_root2(double d, double a, double b) {
  if (d > 0)
    printf(" and %f", (-b - sqrt(d))/(2*a));
  printf("\n");
}
