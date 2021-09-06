// Her er endnu en version af programmet, som indlæser heltal. I denne version er der foretaget en lille forandring af kontrolstrengen af scanf:

#include <stdio.h>

int main(void) {

  int i1, i2,
      scanRes;

  printf("Enter input on the following line\n");

  scanRes = scanf("%d;%d", &i1, &i2);

  printf("i1 = %d, i2 = %d\n", i1, i2);
  printf("scanRes = %d\n", scanRes);

  return 0;
}

// Afprøv programmet med følgende input (i et tilsvarende antal kørsler af programmet). Forklar dine observationer:

// 123;456
// 123; 456
// 123 ; 456
// 123:456
// 123.456;