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