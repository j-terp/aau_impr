#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Fraction {
  unsigned int numerator, denumerator;
} Fraction;

void shortFraction(Fraction, Fraction*);
int gcd_euclid(int, int);
void multiplyFraction(Fraction, int, Fraction*);
void multiplyFractions(Fraction, Fraction, Fraction*);
void sumFractions(Fraction, Fraction, Fraction*);
void printFraction(Fraction);
void printElement(int, int, int);
void printLine(int);

int main(void) {
  unsigned int num, denum;
  Fraction frac, resFrac;

  scanf("%u %u", &num, &denum);
  frac.numerator = num;
  frac.denumerator = denum;
  printFraction(frac);
  shortFraction(frac, &resFrac);
  printFraction(resFrac);
  multiplyFraction(resFrac, 3, &resFrac);
  printFraction(resFrac);
  multiplyFractions(resFrac, frac, &resFrac);
  printFraction(resFrac);
  sumFractions(frac, resFrac, &resFrac);
  printFraction(resFrac);
  
  return EXIT_SUCCESS;
}

void shortFraction(Fraction frac, Fraction *shortFrac) {
  int gcd;
  gcd = gcd_euclid(frac.numerator, frac.denumerator);
  shortFrac->numerator = frac.numerator / gcd;
  shortFrac->denumerator = frac.denumerator / gcd;
}

// Euclidian algorithm to get the gcd of two numbers
int gcd_euclid(int i, int j) {
  return ((j > 0) ? (gcd_euclid(j, i % j)) : (i));
}

void multiplyFraction(Fraction frac, int x, Fraction *res) {
  int gcd, a, b;
  a = frac.numerator * x;
  b = frac.denumerator;
  gcd = gcd_euclid(a, b);
  res->numerator = a / gcd;
  res->denumerator = b / gcd;
}

void multiplyFractions(Fraction frac1, Fraction frac2, Fraction *res) {
  int gcd, a, b;
  a = frac1.numerator * frac2.denumerator + frac1.denumerator * frac2.numerator;
  b = frac1.denumerator * frac2.denumerator;
  gcd = gcd_euclid(a, b);
  res->numerator = a / gcd;
  res->denumerator = b / gcd;
}

void sumFractions(Fraction frac1, Fraction frac2, Fraction *res) {
  int gcd, a, b;
  a = frac1.numerator * frac2.numerator;
  b = frac1.denumerator * frac2.denumerator;
  gcd = gcd_euclid(a, b);
  res->numerator = a / gcd;
  res->denumerator = b / gcd;
}

void printFraction(Fraction frac) {
  int num_len, denum_len, frac_len;
  num_len = log10(frac.numerator) + 1;
  denum_len = log10(frac.denumerator) + 1;
  frac_len = fmax(num_len, denum_len);
  printElement(frac_len, num_len, frac.numerator);
  printf("\n");
  printLine(frac_len);
  printf("\n");
  printElement(frac_len, denum_len, frac.denumerator);
  printf("\n");
}

void printElement(int a, int b, int number) {
  int i;
  for (i = 0; i < (a - b + 1) / 2; i++)
    printf(" ");
  printf("%d", number);
}

void printLine(int len) {
  int i;
  for (i = 0; i < len; i++)
    printf("-");
}
