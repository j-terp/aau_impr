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