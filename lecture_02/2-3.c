// Se på følgende program, som indholder en række increments og decrements:

#include <stdio.h>

int main(void) {
  
  int i = 3, j = 4, k = 5;
  int res1, res2, res3;
  
  // i += 1 == 4, j -= 1 == 3, k += 1 == 6 
  i++; j--; ++k;

  // i: 4, j: 3, k: 6
  printf("i: %d, j: %d, k: %d\n", i,j,k);

  // res1 = (i -= 1) --> res1 = 3, i = 3
  res1 = --i;
  // res2 = j --> res2 = 3, j += 1 == 4
  res2 = j++;
  // res3 = (k -= 1) --> res3 = 5, k = 5
  res3 = --k;

  // res1: 3, res2: 3, res3: 5
  printf("res1: %d, res2: %d, res3: %d\n", res1, res2, res3);
  // i: 3, j: 4, k: 5
  printf("i: %d, j: %d, k: %d\n", i,j,k);
  
  return 0;
}

// Lav en skrivebordsudførelse af programmet, og forklar hvad der udskrives i de tre kald af printf. I en skrivebordsudførelse gennemgås programmets enkelte trin manuelt - med papir og blyant eller ved en tavle - uden først at køre programmet på en computer.

// Når du er færdig med skrivebordsudførelsen, anbefales at du sammenligner dine resultater med det resultat du får ved at køre programmet på din computer.

// Vær sikker på at diskutere dine resultater med dine medstuderende i gruppen.