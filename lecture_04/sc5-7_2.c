// SHow the output displayed by the nested loops:

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, j, k;
    for (i = 0; i < 3; ++i) {
        printf("Outer %4d\n", i);
        for (j = 0; j < 2; ++j) {
            printf("    Inner%3d%3d\n", i, j);
        }
        for (k = 2; k > 0; --k) {
            printf("    Inner%3d%3d\n", i, k);
        }
    }
}

// Forduseelse af output
/*
Outer    0
    Inner  0  0
    Inner  0  1
    Inner  0  2
    Inner  0  1
Outer    1
    Inner  1  0
    Inner  1  1
    Inner  1  2
    Inner  1  1
Outer    2
    Inner  2  0
    Inner  2  1
    Inner  2  2
    Inner  2  1
*/