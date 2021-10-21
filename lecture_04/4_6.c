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