// Evaluate each of the following expressions if a is 6, b is 9, c is 14 and flag is 1. Which Parts of these expressions are not evaluated due to short-circuit evaluation?
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a = 6, b = 9, c = 14, flag = 1;


    c == a + b || !flag;
    // (c == a + b) == 0
    // (0 || !flag) == 0
    // Result: False

    a != 7 && flag || c >= 6;
    // (a != 7) == 1
    // (1 && flag) == 1
    // 1 || c >= 6 is not evaluated, short-circuit evaluation to true
    // Result: True

    !(b <= 12) && a % 2 == 0;
    // (b <= 12) == 1
    // !1 == 0
    // 0 && a % 2 == 0 is not evaluated, short-circuit evaluation to false
    // Result: False

    !(a > 5 || c < a + b);
    // (a > 5) == 1
    // 1 || c < a + b is not evaluated, short-circuit evaluation to true
    // !1 == 0
    // Result: False

    return EXIT_SUCCESS;
}