// What errors do you see in the following segment? Correct the code so it displays all multiples of 4 from 0 through 100.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int mult4;
    for (mult4 = 0; mult4 <= 100; mult4 += 4)
        printf("%d\n", mult4);
}

// Svar: Manglende parantes i for-loopen, et overflødigt semikolon, og slutudtrykket skulle inkludere 100 som sandt.