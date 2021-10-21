#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n, count = 1, sum1 = 0, sum2 = 0;

  printf("Input positive integer> ");
  scanf("%d", &n);

  while (count <= n) {
    sum1 += count;
    count++;
  }

  sum2 = (n * (n + 1)) / 2;

  printf("The sums %d and %d ", sum1, sum2);
  (sum1 == sum2) ? printf("are equal") : printf("are not equal");
}