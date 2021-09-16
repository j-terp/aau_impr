// Det er ofte nyttigt at kunne afgøre, om et punkt i et koordinatsystem er placeret inden i eller udenfor en bestemt cirkel.

// Skriv et program med tre doubles r, x og y.   r fortolkes som radius af en cirkel omkring punktet (0,0). x og y er koordinaterne (x, y) af et punkt.

// Programmet skal afgøre om punktet (x, y) er placeret inden i cirklen, på cirkelperiferien, eller uden for cirklen. Der er altså tre tilfælde. I bedes have tre logiske udtryk, assignet til tre logiske variable, som afspejler de tre forskellige situationer.

// Kan I lave én printf med brug af betingede udtryk (?:), der udskriver 'inden i'/'uden for' og 'på' cirklen, baseret på de logiske udtryks værdi?

// Hint: Det kan være svært at ramme periferien eksakt, fordi vi regner med doubles. Derfor kan I antage at punktet er 'på periferien' hvis det er ganske tæt på periferien. Indfør en symbolsk konstant DELTA, der fortæller hvor meget vi ønsker at kunne afvige fra et "perfect hit".
#include <stdio.h>

#define DELTA 0.001
int main(void) {
    double r, x, y;
    double a, b;

    // Intastning af r, x og y
    printf("Tast in radien paa cirkeln og koordinaterne for punktet:\n");
    scanf(" %lf %lf %lf", &r, &x, &y);

    // Beregning
    a = (x * x) + (y * y);
    b = r * r;
    
    // Print
    printf("Punktet (%.2lf,%.2lf) findes ", x, y);
    (a - DELTA) < b && (a + DELTA) > b ? printf("paa "): (a > b ? printf("uden for ") : printf("inden i "));
    printf("cirkeln med radie %.2lf.", r);
}