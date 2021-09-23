// Write a program segment that computes 1 + 2 + 3 + ... + (n - 1) + n, where n is a data value. Follow the loop body with an if statement that compares this value to (n * (n + 1)) / 2 and displays a message that indicates whether the values are the same or different. What message do you think will be displayed?

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