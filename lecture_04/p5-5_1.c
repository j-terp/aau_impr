// There are 9,870 people in a town whose population increases by 10% each year. Write a loop that displays the annual population and determines how many years (count_years) it will take for the population to surpass 30,000.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  double population = 9870.0;
  int count_years = 0;

  while (population <= 30000.0) {
    population *= 1.1;
    count_years++;
  }
  printf("It takes %d years for the population to surpass 30 000.", count_years);
}