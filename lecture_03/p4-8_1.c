// Write a switch statement that assigns to the variable lumens the expected brightness of an incandescent light bulb whose wattage has been stored in watts. Use the table in the book.
// Assign -1 to lumens if the value of watts is not in the table

#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int lumens, watts;

    printf("Input an integer of watts> ");
    scanf(" %d", &watts);
    switch (watts) {
    case 15:
        lumens = 125;
        break;
    case 25:
        lumens = 215;
        break;
    case 40:
        lumens = 500;
        break;
    case 60:
        lumens = 880;
        break;
    case 75:
        lumens = 1000;
        break;
    case 100:
        lumens = 1675;
        break;
    default:
    lumens = -1;
        break;
    }
    printf("Lumens: %d", lumens);
}