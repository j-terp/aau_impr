// Denne opgave giver dig blandt andet træning i programmering af et C program, der anvender en header file (.h fil) og en tilhørende .c fil. I denne opgaven kalder vi en funktion, som allerede er skrevet. I senere opgaver skal du selv i gang med at skrive dine funktioner.

// Du skal skrive et program med en main funktion der udskriver de første n primtal. Skriv dit program i en fil der hedder test-primes.c. Der ønskes følgende output hvis n er 100:
/*
  prime 1: 2
  prime 2: 3
  prime 3: 5
  prime 4: 7
  prime 5: 11
  prime 6: 13
  prime 7: 17
  prime 8: 19
  prime 9: 23
  prime 10: 29
  ...
  prime 99: 523
  prime 100: 541
*/

// I din main funktion skal du - ganske enkelt - gennemløbe så mange positive heltal, som det er nødvendigt, for at finde de første n primtal.

// For at få alt dette til at virke skal du lave følgende primes.h fil:

    /* Return if i is a prime number */
    int is_prime(int i);

// Endvidere skal du placere følgende programlinier i filen primes.c, og oversætte denne c fil separat.

#include "primes.h"
#include <math.h>
#include <assert.h>

/* Return if i is a prime number. 
   It is assumed as a precondition that the parameter i is non-negative */
int is_prime(int i){
   assert(i >= 0);

   if (i == 1) 
     return 0;
   else if (i == 2) 
     return 1;
   else if (i % 2 == 0)
     return 0;
   else{
     int k, limit;
     limit = (int)(ceil(sqrt(i)));
     for (k = 3; k <= limit; k += 2)
        if (i % k == 0)
           return 0;
     return 1;
   }
}

// Compilering af programmet: Følg mønstret fra vores gennemgang af oversættelse af tændstikpige programmet.

// Læs og forstå også funktionen is_prime.

// Inspirationen til denne opgave er fra bogen C by Dissection - anvendt med tilladelse fra forlaget.