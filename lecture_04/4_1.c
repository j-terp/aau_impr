#include <stdio.h>
int main(void){
  int i, power = 1;

  /*
  while (i <= 10)
    ++i;
    power *= 2;
    printf("%5d", power);
  printf("\n");
  */

  for (i = 0; i <= 10; ++i)
  {
    printf("%5d", power *= 2);
  }
  
  return 0;
}