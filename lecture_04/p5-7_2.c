// Write nests of loops that cause the following output to be displayed:
/*
0
0 1
0 1 2
0 1 2 3
0 1 2 3 4
0 1 2 3 4 5
0 1 2 3 4
0 1 2 3
0 1 2
0 1
0
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int count = 0,
        turn = 0,
        limit = 5,
        i;

    while (count >= 0) {
        i = 0;
        while (i <= count) {
            printf("%d ", i);
            i++;
        }
        printf("\n");
        count >= limit ? turn++ : 0;
        turn ? count-- : count++ ;
    }
}