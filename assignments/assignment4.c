#include <stdio.h>
#include <stdlib.h>

// Euclidian algorithm to get the gcd of two numbers
int gcd_euclid(int i, int j) {
  int remainder, done = (!j) ? 1 : 0;
  // Calculation
  while (!done) {
    remainder = i % j;
    i = j;
    j = remainder;
    done = (j <= 0) ? 1 : 0;
  }
  return i;
}

// Euclid's algorithm to get the gcd of two numbers
int gcd_subtract(int i, int j) {
  int done = (!j) ? 1 : 0;
  // Calculation
  while (!done) {
    while (i > j) {i -= j;}
    while (i < j) {j -= i;}
    (i == j) ? done = 1: 0;
  }
  return i;
}

// Checks if is prime or not, start number 'p' is 2
int prime(int n, int p) {
  if (n <= 2) {return (n == 2) ? 1 : 0;}
  if (n % p == 0) {return 0;}
  if (p * p > n) {return 1;}
  return prime(n, p + 1);
}

// Goes through all the numbers up to the lowest number, to get the gcd of two numbers
int gcd_up(int i, int j) {
  int count = 1, divisor = i;
  // Calculation
  while (count <= j) {!((i % count) && (j % count)) ? divisor = count : 0, ++count;}
  return divisor;
}

// Goes through all the prime numbers up to the lowest number, to get the gcd of two numbers
int gcd_up_prime(int i, int j) {
  int count = 2, divisor = 1, a = i;
  // Calculation
  if (j == 0) {divisor = a;}
  while ((i > 1 || j > 1) && (j > count)) {
    // Only uses primes
    if (prime(count, 2)) {
      while (!(i % count || j % count)) {divisor *= count, i /= count, j /= count;}
    }
    count++;
  }
  return divisor;
}

// Goes through all the numbers from the lowest number to 1, to get the gcd of two numbers
int gcd_down(int i, int j) {
  int count = j, divisor = i;
  // Calculation
  while (divisor == i && count != 0) {!((i % count) || (j % count)) ? divisor = count : 0, --count;}
  return divisor;
}

// Uses the lcm of two numbers to calculate their gcd
int gcd_lcm(int i, int j) {
  int count = 1, lcm = 1, a = i, b = j;
  if ( b != 0) {
    // Checks for factors 
    while (a > 1 || b > 1) {
      count++;
      while (!(a % count || b % count)) {a /= count, b /= count;}
      while (!(a % count)) {a /= count;}
      while (!(b % count)) {b /= count, lcm *= count;}
    }
  }
  else j = 1;
  // The equivalence for the gcd
  return j / lcm;
}

// Uses the lcm of two numbers to calculate their gcd while checking for prime factors and if they divide each other
int gcd_lcm_smart(int i, int j) {
  int count = 1, lcm = 1, a = i, b = j;
  if (!j) {return i;} // Special case: when one is 0 gives the other number as the gcd
  else {
    // while the numbers have unchecked factors
    while (a > 1 || b > 1) {
      // If one of the numbers have all factors checked, these checks are skippable
      if (a > 1 && b > 1) {
        if (a == b) {lcm = a, a = 1, b = 1;}
        else if (a % b == 0) {lcm *= b, a /= b, b = 1;}
        else if (b % a == 0) {lcm *= a, b /= a, a = 1;}
      }
      // Goes through all positive numbers if they're factors 
      count++;
      while(a % count == 0 && b % count == 0) {lcm *= a, a /= count, b /= count;}
      while(a % count == 0) {lcm *= a, a /= count;}
      while(b % count == 0) {lcm *= b, b /= count;}
      // If at least one of the numbers are prime, multiple the unique remaining factors on the lcm
      if (prime(a, 2) || prime(b, 2)) {lcm *= (a == b) ? a : a * b, a = 1, b = 1;}
    }
  }
  return i * j / lcm;
}

// Calculates their gcd while checking for prime factors and if they divide each other
int gcd_smart(int i, int j) {
  int count = 1, result = 1, a = i, b = j;
  if (!j) {return i;} // Special case: when one is 0 gives the other number as the gcd
  else {
    // while the numbers have unchecked factors
    while (a > 1 || b > 1) {
      // If one of the numbers have all factors checked, these checks are skippable
      if (a > 1 && b > 1) {
        if (a == b) {result = a, a = 1, b = 1;}
        else if (!(a % b)) {result *= b, a /= b, b = 1;}
        else if (!(b % a)) {result *= a, b /= a, a = 1;}
      }
      
      // Goes through all positive numbers if they're factors 
      count++;
      while(!(a % count || b % count)) {result *= a, a /= count, b /= count;}
      while(!(a % count)) {a /= count;}
      while(!(b % count)) {b /= count;}

      // If at least one of the numbers are prime, multiple the unique remaining factors on the lcm
      if (prime(a, 2) || prime(b, 2)) {result *= (a == b) ? a : 1, a = 1, b = 1;}
    }
  }
  return result;
}

int main(void) {
  // Input integers
  int a, b, large, small, done = 0, state;
  // If the input has negative values, the loop while stop without printing results
  do {
    printf("Input two positive integers> ");
    scanf(" %d %d", &a, &b);
    if (a >= 0 && b >= 0) {
      state = 1;
      // Sorts in term of size
      (a >= b) ? (large = a, small = b) : (large = b, small = a);
      // Print results
      if (!(a || b))
        printf("gcd(%d,%d) is not defined\n", a, b); // gcd(0,0) is undefined
      else
        printf("gcd(%d,%d) = %d\n", a, b, gcd_smart(large, small));
    }
    else {state = 0;}
  } while (state);
  return EXIT_SUCCESS;
}