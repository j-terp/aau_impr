#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int m, n;
    printf("Enter two integers> ");
    scanf("%d%d", &m, &n);
    m = m + 5;
    n = 3 * n;
    printf("m = %d\nn = %d\n", m, n);
    // Outputs: m = 10, n = 21
}