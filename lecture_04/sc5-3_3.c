#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int count = 0,
        next_num,
        sum = 0;
    while (count < 5) {
        count += 1;
        printf("Next number> ");
        scanf("%d", &next_num);
        sum += next_num;
    }
    printf("%d numbers were added; \n", count);
    printf("their sum is %d.\n", sum);
}