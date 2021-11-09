#include <stdio.h>
#include <stdlib.h>

int quotient(int, int);
int modulus(int, int);

int main(void) {
  int a = 11, b = 5;
  printf("%d/%d = %d\n%d%%%d = %d", a, b, quotient(a, b), a, b, modulus(a, b));
  
  return EXIT_SUCCESS;
}

int quotient(int dividend, int divisor) {
  return (dividend - divisor < 0) ? (0) : (1 + quotient((dividend - divisor), divisor));
}

int modulus(int dividend, int divisor) {
  return (dividend - divisor < 0) ? (dividend) : (modulus(dividend - divisor, divisor));
}
