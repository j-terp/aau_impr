#include <stdio.h>
#include <stdlib.h>

#define FIB_MAX 100

long fib(long);

int main(void) {
  long i;
  for(i = 0; i < FIB_MAX; i++)
    printf("Fib(%li) = %li\n", i, fib(i));
  return EXIT_SUCCESS;
}

long fib(long n) {
  long result;
  static long fibNum[FIB_MAX - 2];
  if (n == 0)
    result = 0;
  else if (n == 1)
    result = 1;
  else if (fibNum[n-2] != 0)
    result = fibNum[n-2];
  else {
    result = fib(n - 1) + fib(n - 2);
    fibNum[n-2] = result;
  }
  return result;
}
