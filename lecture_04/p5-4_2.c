// Write a program to display a centimeter-to-inches conversion table. The smallest and largest number of centimeters in the table are input values. Your table should give conversions in 10-centimeter intervals. One centimeter equals 0.3937 inch.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double start_cm, end_cm, current_cm;
    printf("Input start and end values for the conversion table> ");
    scanf(" %lf %lf", &start_cm, &end_cm);
    for (current_cm = start_cm; current_cm <= end_cm; current_cm += 10) {
        printf("%.2lf cm = %.2lf inch\n", current_cm, (current_cm * 0.3937));
    }
}