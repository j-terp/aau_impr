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