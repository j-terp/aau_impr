// I denne lektion har vi set at der findes fine, smarte, og effektive algoritmer til at finde den største fælles divisor af to positive heltal. Se her.

// Målet med denne opgave er at træne dig i programmering med løkker, herunder at vælge gode iterative kontrolstrukturer til opgaven. Som altid er det også målet at lave et velopstillet program med god indrykning, og med brug af gode variabelnavne.

// I denne opgave skal du skrive et ligefrem program, der på en simpel og intuitiv måde finder den største fælles divisor af to ikke-negative heltal a og b. Programmet skal på en systematisk måde - med brug af en løkke - afprøve om forskellig, nøje udvalgte tal er divisorer i både a og b. Overvej omhyggeligt hvordan løkken starter, og hvordan den slutter. Programmet skal finde den største sådanne divisor: altså største fælles divisor. Overvej også om der er nogle specialtilfælde vi skal tage os af, inden vi starter løkken?

// Programmet skal indlæse de to heltal a og b af hvilke vi ønsker at finde den største fælles divisor. Men for ikke at starte programmet forfra hver gang vi ønsker at finde den største fælles divisor af to tal (a og b) bedes du lave programmet således at den gentager beregningen af den største fælles divisor af to indlæste tal indtil et af tallene er negativ.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Input af to tal
    int a, b, small, large, remainder;
    printf("Two integers> ");
    scanf(" %d %d", &a, &b);

    // Assignment og kontrol før beregning
    (a < 0) ? (a = -a) : 0;
    (b < 0) ? (b = -b) : 0;
    (a >= b) ? (large = a, small = b) : (large = b, small = a);

    // Beregning
    while (small > 0) {
        remainder = large % small;
        large = small;
        small = remainder;
    }

    // Print resultat
    printf("GCD of %d and %d is %d", a, b, large);

    return EXIT_SUCCESS;
}