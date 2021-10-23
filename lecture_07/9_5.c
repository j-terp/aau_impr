#include <stdio.h>
#include <stdlib.h>

int compare(const void *, const void *);

int main(void) {
  int i, num = 100;
  double *array;
  array = (double *)malloc(num * sizeof(double));
  
  /* Initialize the array with random doubles: */
  printf("- - - Unsorted - - -\n");
  for (i = 0; i < num; i++) {
    array[i] = rand() % 100;
    printf("[%2d] = %2.lf\n", i, array[i]);
  }

  qsort(array, num, sizeof(double), compare);

  /* Prints ordered list: */
  printf("\n- - -  Sorted  - - -\n");
  for (i = 0; i < num; i++)
    printf("[%2d] = %2.lf\n", i, array[i]);
  free(array);
}

/* Comprares adjacent elements */
int compare(const void *i, const void *j) {
  double *a = (double *) i;
  double *b = (double *) j;
  if (*a > *b)
    return 1;
  else if (*a < *b)
    return -1;
  else
    return 0;
}