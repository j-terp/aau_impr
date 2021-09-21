// Skriv et program som læser et heltal n. Programmet skal addere alle tal i intervallet fra n til 2 * n hvis n er ikke negativ. Hvis n er negativ, skal programmet addere tallene fra 2 * n til n.

// Skriv først en version med for-løkker. Dernæst en version med while løkker.

// Denne opgave stammer fra bogen C by Dissection - anvendt med tilladelse fra forlaget.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, i, sum = 0;
    printf("Integer> ");
    scanf("%d", &n);
    /* For-loops
    if (n > 0) {
        for (i = n; i <= 2*n; ++i) {
            sum += i;
        }
    }
    else if (n < 0) {
        for (i = 2*n; i <= n; ++i) {
            sum += i;
        }
    }
    */
    /* While-loops
    if (n > 0) {
        i = n;
        while (i <= 2*n) {
            sum += i;
            i += 1;
        }
    }
    else if (n < 0) {
        i = 2*n;
        while (i <= n) {
            sum += i;
            i += 1;
        }
    }
    */
    printf("Sum: %d", sum);

}