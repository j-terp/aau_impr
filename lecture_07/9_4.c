#include <stdio.h>
#include <stdlib.h>

void bsort(void *, size_t, size_t, int(*)(const void *, const void *));
int compare_elements(const void *, const void *);

int main(void) {
  int *nArray;
  int n;
  int element_size = sizeof(int);
  int (*f) (const void *, const void *) = compare_elements;

  // Creating a random array
  nArray = (int *)malloc(n * sizeof(int));
  for (int i = 0; i < n; i++) {
    nArray[i] = rand() % 100;
  }

  // Sorting array
  bsort(nArray, n, element_size, f);
}

void bsort(void *base, size_t n, size_t size,
           int(*compar)(const void *, const void *)) {
  
}

int compare_elemens(const void *i, const void *j) {
  int *a = (int *) i;
  int *b = (int *) j;
  if (*a > *b)
    return 1;
  else if (*a > *b)
    return -1;
  else
    return 0;
}