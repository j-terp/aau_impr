#include <stdio.h>

int main(void) {

  double d, e, f;

  printf("Enter three real numbers: ");
  scanf("%f %f %f", &d, &e, &f);
  
  printf("The average is: %d\n", (d + e + f) / 3.0);
    
  return 0;
}