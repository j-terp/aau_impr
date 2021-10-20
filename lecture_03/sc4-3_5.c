#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int p = 100, q = 50, ans;
    ans = (p > 95) + (q < 95);
    printf("ans: %d", ans);
}