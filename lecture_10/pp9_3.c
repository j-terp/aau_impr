#include <stdio.h>
#include <stdlib.h>

int recurringFunction(int);

int main(void) {
  int min, max, i;
  printf("> ");
  scanf("%d %d", &min, &max);
  for ( i = min; i <= max; i++)
    printf("f(%d) = %d\n", i, recurringFunction(i));

  return EXIT_SUCCESS;
}

int recurringFunction(int x) {
  return ((x <= 0) ? (0) : (recurringFunction(x - 1) + 2));
}
