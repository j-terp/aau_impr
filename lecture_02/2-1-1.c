// Denne opgave er lavet for at du skal undre dig over hvad du oplever i de givne programmer. Dernæst skal du forsøge at forstå det. Detaljerne fremgår ikke nødvendigvis af lærebogen. Når der bliver åbnet for løsningen til opgaven, vil du få mine korte forklaringer.

// Se på følgende program, som adderer tre heltal:
#include <stdio.h>

int main(void) {

  int sum1 =    10  +   11  +  12,
      sum2  =  010 +   011 +  012,
      sum3  = 0x10 +  0x11 + 0x12;

  printf("sum1 =  %d\n", sum1);
  printf("sum2 =  %d\n", sum2);
  printf("sum3 =  %d\n", sum3);

  return 0;
}

// Oversæt og kør programmet. Forklar programmets opførsel.