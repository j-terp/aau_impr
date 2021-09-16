// Og endnu en version af programmet, som indlæser heltal. Igen er der i denne version foretaget en mindre forandring af kontrolstrengen af scanf:

#include <stdio.h>

int main(void) {

  int i1, i2,
      scanRes;

  printf("Enter input on the following line\n");

  scanRes = scanf("%d abe %d", &i1, &i2);

  printf("i1 = %d, i2 = %d\n", i1, i2);
  printf("scanRes = %d\n", scanRes);

  return 0;
}

// Afprøv programmet med følgende input (i et tilsvarende antal kørsler af programmet). Forklar dine observationer:

// 123 456
// 123abe456
// 123 abe 456
// 123 kat 456
// -123abe-456

// Svar: Når abe er imellem de to variable, så bliver begge godtaget. Andre input giver kun til den første variabel og den anden bliver mærkelig.
// scanRes er 2 når abe er med, ellers 1.