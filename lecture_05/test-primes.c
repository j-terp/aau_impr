#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include "primes.h"

int is_prime(int i);

int main(void) {
  int place = 1, count = 1;
  while (place <= 100) {
    if (is_prime(count)) {
      printf("prime %d: %d\n", place, count);
      place++;
    }
    count++;
  }
  return EXIT_SUCCESS;
}