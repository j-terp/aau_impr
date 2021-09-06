// Kør så programmet

#include <stdio.h>

int main(void) {

  int x, y, z, sum;

  printf("Enter three integers: ");
  scanf("%o %o %o", &x, &y, &z);

  sum =    x + y + z;

  printf("sum =  %d\n", sum);

  return 0;
}

// med samme input som ovenfor. Forklar hvad placeholderen %o i scanf gør i forhold til %d.