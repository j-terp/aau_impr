// Write a nested if statement for the decision diagrammed in the accompanying flowchart. Use a multiple-alternative if for intermediate decisions where possible.
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int pH;
    printf("Insert a pH value> ");
    scanf(" %d", &pH);
    if (pH > 7) {
        if (pH < 12) {
            printf("Alkaline");
        }
        else {
            printf("Very Alkaline");
        }
    }
    else {
        if (pH == 7) {
            printf("Neutral");
        }
        else if (pH > 2) {
            printf("Acidic");
        }
        else {
            printf("Very Accidic");
        }
    }
}