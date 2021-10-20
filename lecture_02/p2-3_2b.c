#include <stdio.h>

int main(void) {
    double side, area;
    scanf("%lf", &side);
    area = side * side;
    printf("The area of a square whose side length is %f cm is %f square cm", side, area);
    return 0;
}