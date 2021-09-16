// What value is assigned to the type int variable ans in this statement if the value of p is 100 and q is 50?

// ans = (p > 95) + (q < 95)

// This statement is not shown as an example of a reasonable assignment statement; rather, it is a sample of a statement that makes little sense to the reader. The statement is still legal and executable in C, however, because C uses integers to represent the logical values true and false.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int p = 100, q = 50, ans;
    ans = (p > 95) + (q < 95);
    printf("ans: %d", ans);
}

// SVar: ans får værdien 2.