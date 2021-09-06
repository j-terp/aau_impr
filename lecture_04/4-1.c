// Forklar hvad der udskrives af følgende program. Hvor mange gange udføres kroppen af while-løkken? Og hvilken række af tal udskriver programmet (helt præcist)? Forudsig først resultatet, og kør dernæst programmet.

#include <stdio.h>
int main(void){
   int i = 0, power = 1;

   while (++i <= 10)
      printf("%5d", power *= 2);
   printf("\n");

   return 0;
}

// ++i tæller i en op og power *= 2 fordobler power. Men vær sikker på at du forstår værdierne af de to udtryk ++i og power *= 2.

// Hvad sker der hvis ++i erstattes af i++?

// Det viste program er skrevet i typisk, koncis C-stil, og er på denne måde en typisk repræsentant for den programmeringsstil, som dyrkes af mange C programmører.

// Omskriv programmet (stadig med brug af en while-løkke) således at assignments (ala *=) og increments (++) kun har en effekt på variable, men uden direkte at anvende værdierne af disse udtryk, som det er gjort i ovenstående program.

// Det er også interessant at omskrive programmet, så det bruger en for-løkke i stedet for en while-løkke. Prøv dette!

// Vurder selv hvilken udgave af programmet du foretrækker.