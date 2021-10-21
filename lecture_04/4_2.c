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