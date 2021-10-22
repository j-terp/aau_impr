#include <stdio.h>
#include <math.h>

void solveQuadraticEquation(double, double, double);
double calc_disc(double, double, double), calc_root(int, double, double, double);

int main(void) {
  double a, b, c; 

  /* Coefficents are entered by user outside solveQuadraticEquation */
  do {
  printf("Enter coeficients a, b, and c: ");
  scanf("%lf %lf %lf", &a, &b, &c);
  solveQuadraticEquation(a, b, c);
  } while (a == 0 && b == 0 && c == 0);

  return 0;
}

/* Prints roots of the quadratic equation a * x*x + b * x + c = 0 */
void solveQuadraticEquation(double a, double b, double c){
  double discriminant = calc_disc(a, b, c);
  
  if (discriminant < 0) 
    printf("No roots\n");
  else if (discriminant == 0)
    printf("One root: %f\n", calc_root(0, a, b, discriminant));
  else
    printf("Two roots: %f and %f\n", calc_root(1, a, b, discriminant), calc_root(-1, a, b, discriminant));
}

double calc_disc(double a, double b, double c) {
  return b * b - 4 * a * c;
}

double calc_root(int x, double a, double b, double d) {
  if (x == 1)
    return (-b + sqrt(d))/(2*a);
  else if (x == -1)
    return (-b - sqrt(d))/(2*a);
  else
    return -b/(2*a);
}
