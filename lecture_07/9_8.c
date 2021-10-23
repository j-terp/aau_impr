#include <stdio.h>
#include <stdlib.h>

#define DICE_MAX 6

void roll_multiple_dies(int, int *);
int roll_dice();

int main(void) {
  int *nArray;
  int a, times, n;
  for (a = 0; a < times; a++) {
    do {
      printf("Enter the amount of die> ");
      scanf("%d", &n);
    } while (n > 1);

    nArray = (int *)malloc(n * sizeof(int));
    roll_multiple_dies(n, nArray);

    for (int i = 0; i < n; i++)
      printf("%d,", nArray[i]);

    free(nArray);
  }
  
  
}

void roll_multiple_dies(int num, int *array) {
  for (int i = 0; i < num; i++)
    array[i] = roll_dice();  
}

int roll_dice() {
  return (rand() % DICE_MAX + 1);
}