// Write a statement that asks the user to type three integers and another statement that stores the three user respones into `first`, `second` and `third`.
#include <stdio.h>

int main(void) {
    int first, second, third;
    printf("Type out three integers:\n");
    scanf("%d\n%d\n%d", &first, &second, &third);
    printf("First: %d, Second: %d, Third: %d", first, second, third);
    return 0;
}