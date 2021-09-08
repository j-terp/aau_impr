// Write a program that takes the length and width of a rectangular yard and the length and width of a rectangular house in the yard. Your program should compute the time required to cut the grass at the rate of two square feet a second.
#include <stdio.h>

int main(void) {
    double yard_length,
           yard_width,
           house_length,
           house_width,
           grass_area,
           cut_speed = 2.0; // 2 square feet / second
    
    // Fetching input to variables
    printf("Please input the length and width of your yard, in feet: "); scanf(" %lf %lf", &yard_length, &yard_width);
    printf("Please input the length and width of your house, in feet: "); scanf(" %lf %lf", &house_length, &house_width);

    // Calculating the area of grass
    grass_area = (yard_length * yard_width) - (house_length * house_width);

    // Printing out the time required
    printf("It takes %.2lf seconds to cut the grass", (grass_area / cut_speed));

    return 0;
}