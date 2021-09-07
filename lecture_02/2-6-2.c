// Her er næste version af programmet, som indlæser heltal:

#include <stdio.h>

int main(void) {

  int i1, i2,
      scanRes;

  printf("Enter input on the following line\n");

  scanRes = scanf("%d%d", &i1, &i2);

  printf("i1 = %d, i2 = %d\n", i1, i2);
  printf("scanRes = %d\n", scanRes);

  return 0;
}

// Afprøv programmet med følgende input (i et tilsvarende antal kørsler af programmet). Forklar dine observationer:

// 123 456
// 123    456
// 123.456
// 123-456
// 123_456
// 123

// Svar: mængden af whitespace mellem tallene er ubetydeligt, men når det ikke er heltal så ignoreres det efter komma, detsamme med underscore. De to næste variabler bliver noget der allerede findes i hukommelsen, dvs. mærkelige tal. Bindestreg bliver tolket som minues, og bliver til et prefix for den næste variabel. Til sidst når der mangler den siste variabel mangler, så godtages verken white space eller nye rækker. Der bliver dermed nød til at skrives noget, indtil den godtager det.
// scanRes er to når den anden variabel er godtaglige, ellers er den 1.