#include <stdio.h>
#include <stdlib.h>

void bsort(void *, size_t, size_t, int(*)(const void *, const void *));
int compare_elements(const void *, const void *);

int main(void) {
  int *nArray;
  int array_size = 5;
  int element_size = sizeof(int);
  int (*f) (const void *, const void *) = compare_elements;

  // Creating a random array
  nArray = (int *)malloc(array_size * sizeof(int));
  for (int i = 0; i < array_size; i++) {
    nArray[i] = rand() % 100;
  }
  
  printf("\n- - -  Unsorted  - - -\n");
  for (size_t i = 0; i < array_size; i++)
    printf("[%2d] = %d\n", i, nArray[i]);

  // Sorting array
  bsort(nArray, array_size, element_size, f);

  printf("\n- - -  Sorted  - - -\n");
  for (size_t i = 0; i < array_size; i++)
    printf("[%2d] = %d\n", i, nArray[i]);

  return EXIT_SUCCESS;
}

void bsort(void *base, size_t n, size_t size,
           int(*compar)(const void *, const void *)) {
  int tmp;
  int *array = base;
  for (size_t i = 0; i < n; i++) {
    for (size_t j = (n - 1); j > i; j--) {
      int *a = &(array[j - 1]);
      int *b = &(array[j]);
      switch (compar(a, b)) {
      case 1:
        tmp = *a;
        *a = *b;
        *b = tmp;
        break;
      default:
        break;
      }
    }
  }
}

int compare_elements(const void *i, const void *j) {
  int *a = (int *) i;
  int *b = (int *) j;
  if (*a > *b)
    return 1;
  else if (*a > *b)
    return -1;
  else
    return 0;
}