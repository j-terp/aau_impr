// What output values are displayed by the following while loop for a data value of 5? Of 6? Of 7?

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x, product, count;
    printf("Enter an integer> ");
    scanf("%d", &x);
    product = x;
    count = 0;
    while (count < 4) {
        printf("%d\n", product);
        product *= x;
        count += 1;
    }
}

// In general, for a data value of number n, what does this loop display?

// Svar: Loopen printer ud n, n^2, n^3 og n^4.