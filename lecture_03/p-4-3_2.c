// Write an assignment for the following:

// Assign a value of 0 to between if n is less than -k or greater than +k; otherwise, assign 1.
// Assign a value of 1 to divisor if digit is a divisor of num; otherwise, assign a value of 0.
// Assign a value of 1 to lowercase if ch is a lowercase letter; otherwise, assign a value of 0.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, k, digit, num;
    char ch;

    printf("Insert values for n and k> ");
    scanf(" %d %d", &n, &k);
    printf("n: %d\nk: %d\n", n, k);

    printf("Insert a number and a digit> ");
    scanf(" %d %d", &num, &digit);
    printf("num: %d\ndigit: %d\n", num, digit);

    printf("Insert a character> ");
    scanf(" %c", &ch);
    printf("ch: %d", ch);

    int between = !(n < -k && n > k);
    int divisor = !(num % digit);
    int lowercase = ('a' <= ch && ch <= 'z');

    printf("\nbetween: %d\ndivisor: %d\nlowercase: %d", between, divisor, lowercase);

    return EXIT_SUCCESS;
}