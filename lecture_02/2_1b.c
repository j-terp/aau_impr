// Kør dernæst programmet

#include <stdio.h>

int main(void) {

  int x, y, z, sum;

  printf("Enter three integers: ");
  scanf("%d %d %d", &x, &y, &z);

  sum =    x + y + z;

  printf("sum =  %d\n", sum);

  return 0;
}

// og indlæs tallene 010, 011, og 012. Indlæs også 10, 11 og 12. Forklar resultaterne.

// Svar: scanf er specificeret til at tage decimal input når den bruger %d, vilket gør at den ignorerer de foranstående 0'er, og summerer i base10.
// Den printer det ud i base10.