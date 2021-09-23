// I denne opgave gives tre positive heltal m, n og k, hvor k er større end 1. Skriv et program der adderer alle heltal mellem m og n (begge inklusive) hvor i k går op.

// Eksempler:

//     Hvis m er 5, n er 13 og k er 3 er resultatet 6 + 9 + 12 = 27.
//     Hvis m er 5, n er 10 og k er 5 er resultatet 5 + 10 = 15.
//     Hvis m er 10, n er 5 og k er 3 ønsker vi at resultatet er 0, idet m er større end n.

// Denne opgave stammer fra bogen C by Dissection - anvendt med tilladelse fra forlaget.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i,
    m = 0,
    n = 0,
    k,
    sum = 0;
  
  // Input
  while (!(m && n)) {
    printf("Input two positive integers> ");
    scanf(" %d %d", &m, &n);
  }
  
  // Turns m to the smaller value if it's bigger, since the calculation assumes m is smaller, while using k as the placeholder
  (m >= n) ? (k = m, m = n, n = k) : 0, k = 0;
  
  while (k <= 1) {
    printf("Input a positive integer bigger than 1> ");
    scanf(" %d", &k);
  }
  
  // Calculation
  i = m;
  while (i <= n) {
    !(i % k) ? sum += i : 0;
    i++;
  }
  printf("Sum: %d", sum);
}