// Write a program that takes the x-y coordinates of a point in the Cartesian plane and prints a message telling either an axis on which th epoint lies or the quadrant in which it is found.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float x = 1.0, y = 2.5;
    printf("Input the x and y coordinates of a point> ");
    scanf(" %f %f", &x, &y);
    
    printf("The point (%.1f;%.1f) lies ", x, y);
    
    if (x == 0.0 && y == 0.0) {
        printf("on the origo");
    }
    else if (x == 0.0 || y == 0.0) {
        (y == 0.0) ? printf("on the x-axis") : printf("on the y-axis");
    }
    else {
        if (y > 0.0) {
            if (x > 0.0) {
                printf("in QI");
            }
            else /* (x < 0) */ { 
                printf("in QII");
            }
        }
        else /* (y < 0) */ {
            if (x > 0.0) {
                printf("in QIII");
            }
            else /* (x < 0) */ {
                printf("in QIV");
            }
        }
    }
}