// Assuming the `side` and `are` are type `double` variables containing the length of one side in cm and the area of a square in square cm, write a statement that will display this information in this form.
// The area of a square whose side length is ___ cm is ___ square cm.
#include <stdio.h>

int main(void) {
    double side, area;
    scanf("%lf", &side);
    area = side * side;
    printf("The area of a square whose side length is %f cm is %f square cm", side, area);
}