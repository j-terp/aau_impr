#include <stdio.h>
#include <stdlib.h>

int gcd_euclid(int i, int j);
int gcd_subtract(int i, int j);

int main(void) {
  // Input integers
  int a, b, large, small, done = 0;
  // If the input has negative values, the loop while stop without printing results
  do {
    printf("Input two positive integers> ");
    scanf(" %d %d", &a, &b);
    if (a >= 0 && b >= 0) {
      // Sorts in term of size
      (a >= b) ? (large = a, small = b) : (large = b, small = a);
      // Print results
      if (!(a || b))
        printf("gcd(%d,%d) is not defined\n", a, b); // gcd(0,0) is undefined
      else {
        printf("gcd %% (%d,%d) = %d\n", a, b, gcd_euclid(large, small));
        printf("gcd - (%d,%d) = %d\n", a, b, gcd_subtract(large, small));
      }
    }
    else
      done = 1;
  } while (!done);
  return EXIT_SUCCESS;
}

// Euclidian algorithm to get the gcd of two numbers
int gcd_euclid(int i, int j) {
  return ((j > 0) ? (gcd_euclid(j, i % j)) : (i));
}

// Euclid's algorithm to get the gcd of two numbers
int gcd_subtract(int i, int j) {
  return  ((i != j && j != 0) ? ((i > j) ? (gcd_subtract(i - j, j)) : (gcd_subtract(i, j - i))) : (i));
}