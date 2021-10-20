#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a = 6, b = 9, c = 14, flag = 1;

    c == a + b || !flag;
    a != 7 && flag || c >= 6;
    !(b <= 12) && a % 2 == 0;
    !(a > 5 || c < a + b);

    return EXIT_SUCCESS;
}