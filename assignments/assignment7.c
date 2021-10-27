#include <stdio.h>
#include <stdlib.h>

double *merge_ascend_array(double[], int, double[], int, double*, int*);
double *trim_array(double[], int);
void print_array(double[], int);

int main(void) {
  double x, mem;
  
  // Arrays
  double arrayA[] = {0.0, 5.0, 5.0, 9.0, 13.0, 15.0, 30.0},
         arrayB[] = {2.0, 3.0, 5.0, 7.0, 10.0, 12.0, 15.0, 20.0, 25.0};
  double *mergedArray;

  // Array lengths
  int arrayA_length = sizeof(arrayA)/sizeof(arrayA[0]),
      arrayB_length = sizeof(arrayB)/sizeof(arrayB[0]),
      mergedArray_length;

  // Merging arrays and trimming the result
  mergedArray = merge_ascend_array(arrayA, arrayA_length, arrayB, arrayB_length, mergedArray, &mergedArray_length);
  
  // Prints out arrays
  printf("\nArray A\n");
  print_array(arrayA, arrayA_length);
  printf("\nArray B\n");
  print_array(arrayB, arrayB_length);
  printf("\nMerged array\n");
  print_array(mergedArray, mergedArray_length);
  
  return EXIT_SUCCESS;
}

// Ascend sorts two ascend sorted arrays
double *merge_ascend_array(double arrayA[], int lengthA, double arrayB[], int lengthB, double *arrayR, int *trimLength) {
  int i = 0, j = 0, k = 0;
  double a, b;
  double x, mem;
  int lengthR = lengthA + lengthB;
  *trimLength = lengthR;
  arrayR = (double *)malloc(lengthR * sizeof(double));
  
  // While the arrays have not been sorted through
  while (i < lengthA || j < lengthB) {
    
    // The main sorting component
    while (i < lengthA && j < lengthB) {
      a = arrayA[i];
      b = arrayB[j];
      
      // Lowest unsorted elements comparisons
      if (a != mem && b != mem) {
        if (a == b) {
          x = a;
          i++;
          j++;
          (*trimLength)--;
        }
        else if (a < b) {
          x = a;
          i++;
        }
        else {
          x = b;
          j++;
        }

        // Assignment of the lowest element
        mem = x;
        arrayR[k] = x;
        k++;
      }

      // If one of the elements were a duplicate of a previous element, it is skipped
      else {
        if (a == mem) {
          i++;
          (*trimLength)--;
        }
        if (b == mem) {
          j++;
          (*trimLength)--;
        }
      }
    }

    // The remaining sort, where the last of the remaining array is added on
    while (i < lengthA) {
      arrayR[k] = arrayA[i];
      i++;
      k++;
    }
    while (j < lengthB) {
      arrayR[k] = arrayB[j];
      j++;
      k++;
    }
  }
  // Trimming the returning array
  arrayR = trim_array(arrayR, *trimLength);
}

// Trims array to correct size
double *trim_array(double array[], const int length) {
  int i;

  // Empty array with the trimmed length
  double *newArray = (double *)malloc(length * sizeof(double));
  for (i = 0; i < length; i++) {
    newArray[i] = array[i];
  }
  return newArray;
}

// Prints array
void print_array(double array[], int length) {
  for (size_t i = 0; i < length; i++) {
    printf("[%d] %f\n", i, array[i]);
  }
}