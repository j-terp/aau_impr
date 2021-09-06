// Og kør så sluttelig følgende program med 10, 11 og 12 som input

#include <stdio.h>

int main(void) {

  int x, y, z, sum;

  printf("Enter three integers: ");
  scanf("%o %o %o", &x, &y, &z);

  sum =    x + y + z;

  printf("sum =  %o\n", sum);

  return 0;
}

// Kør det også med følgende input: 12 13 14.

// Forklar hvad du oplever. Har du forstået reglerne? Leg gerne med variationer.