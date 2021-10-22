#include <stdio.h>
#include <stdlib.h>
#include "primes.h"

int main(void) {
  int start, limit, done = 0, exceptions = 0, i = 0, j, n;
  do {
  printf("Input two positive integer between 7 and 2 million for the lower and upper limit> ");
  scanf("%d %d", &start, &limit);
  } while (start < 7 || start > 2000000 || limit < 7 || limit > 2000000);
  
  // Makes the numbers even
  (start % 2 == 1) ? start++ : 0; 
  (limit % 2 == 1) ? limit++ : 0;
  n = start;

  // Checks for matches
  while (n <= limit && !done) {
    int count = 3, solved = 0;
    while (count <= (n / 2)) {
      if (is_prime(count) && is_prime(n - count) && solved == 0) {
        solved = 1;
      }
      count++;
    }
    if (solved == 0) {
      printf("\n[%d] ", n);
      exceptions++;
      done = 1;
    }
  }
  printf("Done\nExceptions: %d", exceptions);
}