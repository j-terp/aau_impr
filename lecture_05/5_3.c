// Goldbachs formodning udtrykker en påstand om at alle lige heltal større end to er summen af to primtal. Denne formodning er hverken bevist eller modbevist. I denne opgave vil vi beskæftige os med følgende variation af påstanden:
/*
    Ethvert lige heltal større end 6 kan udtrykkes som summen af to ulige primtal.
*/
// Skriv et program der beviser denne formodning for alle lige heltal mellem to givne grænser. Eksempelvis for alle lige heltal mellem 7 og 2.000.000. Hvis du er i stand til at finde et modeksempel, er berømmelsen måske lige om hjørnet...

// Det foreslås at funktionen is_prime fra en tidligere opgave bruges ved løsningen af denne opgave.

// Det er for stor en mundfuld at løse dette problem uden opdeling i mindre delproblemer. Det foreslås derfor at I skriver en funktion, som undersøger påstanden for et bestemt lige heltal, n. Denne funktion kan så kaldes for alle lige heltal n mellem f.eks. 7 og 2.000.000.

// Hint: Når I skal bevise påstanden for et tal, n, anbefales det at gennemløbe alle mulige summer (n-i) + i, og dermed undersøge om I kan finde et i så både n-i og i er ulige primtal.

// Hvis I bliver hurtigt færdige med denne opgave bedes I se på den variant, der på Wikipedia beskrives som Goldbach's weak conjecture.

// Som en anden udfordring, kan det være interessant at se alle mulige summer- ikke kun den første. Eller denne variant: Hvilket af de testede tal har det største antal opløsninger?

// Denne opgave stammer fra bogen C by Dissection - anvendt med tilladelse fra forlaget.

#include <stdio.h>
#include <stdlib.h>
#include "primes.h"

int main(void) {
  int start, limit, done = 0, exceptions = 0, i = 0, j, n;
  do {
  printf("Input two positive integer between 7 and 2 million for the lower and upper limit> ");
  scanf("%d %d", &start, &limit);
  } while (start < 7 || start > 2000000 || limit < 7 || limit > 2000000);
  
  // Makes the numbers even
  (start % 2 == 1) ? start++ : 0; 
  (limit % 2 == 1) ? limit++ : 0;
  n = start;

  // Checks for matches
  while (n <= limit && !done) {
    int count = 3, solved = 0;
    while (count <= (n / 2)) {
      if (is_prime(count) && is_prime(n - count) && solved == 0) {
        solved = 1;
      }
      count++;
    }
    if (solved == 0) {
      printf("\n[%d] ", n);
      exceptions++;
      done = 1;
    }
  }
  printf("Done\nExceptions: %d", exceptions);
}