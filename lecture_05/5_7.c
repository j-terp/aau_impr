#include <stdio.h>
#include <stdlib.h>

int ifSumFormulaEqual(int), sum_iter(int), sum_formula(int), population_growth_years(int, double, int);

int main(void) {
  int n, start = 9870, stop = 30000;
  double change = 10;

  do {
  printf("Input positive integer> ");
  scanf("%d", &n);
  } while (n < 1);

  do {
  printf("Input population size, growthrate in percent, and the limit for the growth> ");
  scanf("%d", &n);
  } while (n < 1);

  printf(ifSumFormulaEqual(n) ? "The formula is correct.\n" : "The formula is wrong.\n");
  printf("It takes %d years for the population to surpass %d.\n", population_growth_years(start, change, stop), stop);
}

int ifSumFormulaEqual(int a) {
  return (sum_iter(a) == sum_formula(a)) ? 1 : 0;
}

int sum_iter(int a) {
  int count = 1, sum = 0;

  while (count <= a) {
    sum += count;
    count++;
  }
  return sum;
}

int sum_formula(int a) {
  return (a * (a + 1)) / 2;
}

int population_growth_years(int start, double growth, int stop) {
  double population = (double) start, limit = (double) stop;
  growth /= 100.0; 
  int count_years = 0;

  while (population <= stop) {
    population *= (1.0 + growth);
    count_years++;
  }
  return count_years;
}