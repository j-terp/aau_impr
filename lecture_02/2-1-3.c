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

// Svar: scanf er specificeret til at tage octogonal input når den bruger %o, vilket gør at den ignorerer de foranstående 0'er, og summerer i base8.
// Den printer det ud i base10.