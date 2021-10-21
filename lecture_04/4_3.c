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