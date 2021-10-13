// I lektionen om iterative kontrolstrukturer arbejdede vi med to opgaver, som vi nu vil tage op igen med det formål at indføre abstraktion med funktioner.

// I opgave programmeringsopgave 1 side 267 (i Problem Solving and Program Design in C, eighth edition) summerede vi alle heltal fra 1 til n, og vi sammenlignede værdien af denne sum med (n + 1)* n / 2. Skriv nu følgende to funktioner:
/*
    En funktion sum-iter med én int parameter n. Funktionen skal addere alle heltal fra 1 til n. Funktionen skal returnere denne sum.
    En funktion sum-formula med én int parameter n som indkapsler beregningen af (n + 1)* n / 2, og som returnerer værdien af dette udtryk.
*/
// I skal kalde disse to funktioner på passende input og sammenligne deres resultater (ligesom i den oprindelige opgave).

// I lektionen om iterative kontrolstrukturer arbejdede vi også med opgave 1 side 281 i bogen. Vi har en befolkning på 9870 personer som vokser med 10% per år. Spørgsmålet var hvor mange år der går inden befolkningstallet er mere end 30000.

// Skriv nu en funktion som generaliserer denne opgave. Mere specifikt:

//     En funktion population-projection med tre double parametre: start-befolkningstallet, vækstprocent pr år, og den øvre grænse af befolkningstallet. Funktionen skal returnere det antal år (af typen int) det tager for befolkningen at vokse fra start-befolkningstlalet til mere end slut-befolkningstallet.

// Kald derefter funktionen så den løser opgaven fra side 281 i bogen (med de tre givne tal 9870, 10% og 30000).

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