// Forklar hvad der udskrives af følgende program. Hvor mange gange udføres kroppen af while-løkken? Og hvilken række af tal udskriver programmet (helt præcist)? Forudsig først resultatet, og kør dernæst programmet.

#include <stdio.h>
int main(void){
  int i, power = 1;

  /*
  while (i <= 10)
    ++i;
    power *= 2;
    printf("%5d", power);
  printf("\n");
  */

  for (i = 0; i <= 10; ++i)
  {
    printf("%5d", power *= 2);
  }
  
  return 0;
}

// ++i tæller i en op og power *= 2 fordobler power. Men vær sikker på at du forstår værdierne af de to udtryk ++i og power *= 2.

// Svar: Løkken bliver kørt 11 gange, da den første gang den kører er i = 0, og den 11:e gang er i = 10 og bliver rykket op med en, hvor løkken bagefter kør sidste gang. i ender med at være 12, fordi den sidste sammenligning hvor løkken brydes rykker i op endnu en gang. power er derfor 2^11 = 2048.

// Hvad sker der hvis ++i erstattes af i++?

// Svar: Så bliver programmet kun kørt 10 gange, fordi i rykkes op før sammenligningen der styrer løkken. Derfor starter den første løkke når i er 1, og efter den 10:e bliver i 11 og løkken stopper. power er derfor 2^10 = 1024.

// Det viste program er skrevet i typisk, koncis C-stil, og er på denne måde en typisk repræsentant for den programmeringsstil, som dyrkes af mange C programmører.

// Omskriv programmet (stadig med brug af en while-løkke) således at assignments (ala *=) og increments (++) kun har en effekt på variable, men uden direkte at anvende værdierne af disse udtryk, som det er gjort i ovenstående program.

// Det er også interessant at omskrive programmet, så det bruger en for-løkke i stedet for en while-løkke. Prøv dette!

// Vurder selv hvilken udgave af programmet du foretrækker.