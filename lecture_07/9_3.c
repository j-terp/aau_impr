#include <stdio.h>
#include <stdlib.h>


double subtract      (double, double),
       combine_left  (double array[], int n, double (*combiner)(double, double)),
       combine_right (double array[], int n, double (*combiner)(double, double));

int main(void) {
  double *nArray;
  int a, n;
  double (*combine_func) (double, double) = subtract;
  nArray = (double *)malloc(n * sizeof(double));
  
  do {
    printf("Enter the array length> ");
    scanf("%d", &n);
  } while (n < 2);
  printf("[");
  for (int i = 0; i < n; i++) {
    nArray[i] = (double) (rand() % 99 - 49);
    printf("%.2lf", nArray[i]);
    if (i < (n - 1))
      printf(", ");
  }
  printf("]\n");

  int sumLeft  =  combine_left(nArray, n, subtract);
  int sumRight = combine_right(nArray, n, subtract);

  printf("\nSumLeft = %d\nSumRight = %d", sumLeft, sumRight);
  free(nArray);
  return EXIT_SUCCESS;
}

double subtract(double a, double b) {
  return a - b;
}

double combine_left (double array[], int array_length, double (*combiner)(double, double)) {
  for (int i = 0; i < (array_length - 1.0); i++) {
    combiner(array[i], array[i + 1]);
  }
}

double combine_right (double array[], int array_length, double (*combiner)(double, double)) {
  for (int i = (array_length - 1); i > 0; i--) {
    combiner(array[i - 1], array[i]);
  }
}