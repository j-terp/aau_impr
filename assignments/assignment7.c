#include <stdio.h>
#include <stdlib.h>

double *merge_ascend_array(double[], int, double[], int, int *);
double *trim_array(double[], int);


int main(void) {
  double x, mem;
  
  double arrayA[] = {0.0, 5.0, 5.0, 9.0, 13.0, 15.0},
         arrayB[] = {2.0, 3.0, 5.0, 7.0, 10.0, 12.0, 15.0, 20.0, 25.0};
  int arrayA_length = sizeof(arrayA)/sizeof(arrayA[0]),
      arrayB_length = sizeof(arrayB)/sizeof(arrayB[0]),
      arrayT_length;
  double *resultArray,
         *trimArray;

  // arrayR_length -= check_duplicates(arrayA, arrayA_length, arrayB, arrayB_length);
  resultArray = merge_ascend_array(arrayA, arrayA_length, arrayB, arrayB_length, &arrayT_length);
  trimArray = trim_array(resultArray, arrayT_length);
  for (size_t i = 0; i < arrayT_length; i++) {
    printf("[%d] %f", i, trimArray[i]);
  }
  
  return EXIT_SUCCESS;
}

double *merge_ascend_array(double arrayA[], int lengthA, double arrayB[], int lengthB, int *trimLength) {
  int i = 0, j = 0, k = 0;
  double a, b;
  double x, mem;
  double *arrayR;
  int lengthR = lengthA + lengthB;
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
          *trimLength--;
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
          *trimLength--;
        }
        if (b == mem) {
          j++;
          *trimLength--;
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
  return arrayR;
}

// Trims array to correct size
double *trim_array(double array[], const int length) {
  int i;
  double *newArray;
  newArray = (double *)malloc(length * sizeof(double));
  for (i = 0; i < length; i++) {
    newArray[i] = array[i];
  }
  return newArray;
}