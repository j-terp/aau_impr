#include <stdio.h>
#include <stdlib.h>

int check_duplicates(double[], int, double[], int);
double *merge_ascend_array(double[], int, double[], int);
void PrintDoubleArray (double *, int);


int main(void) {
  double x, mem;
  
  double arrayA[] = {0.0, 5.0, 5.0, 9.0, 13.0, 15.0},
         arrayB[] = {2.0, 3.0, 5.0, 7.0, 10.0, 12.0, 15.0, 20.0, 25.0};
  int arrayA_length = sizeof(arrayA)/sizeof(arrayA[0]),
      arrayB_length = sizeof(arrayB)/sizeof(arrayB[0]);
  double *resultArray;

  // arrayR_length -= check_duplicates(arrayA, arrayA_length, arrayB, arrayB_length);
  resultArray = merge_ascend_array(arrayA, arrayA_length, arrayB, arrayB_length);
  return EXIT_SUCCESS;
}

double *merge_ascend_array(double arrayA[], int lengthA, double arrayB[], int lengthB) {
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
        printf("[%d] = %f\n", k, arrayR[k]);
        k++;
      }

      // If one of the elements were a duplicate of a previous element, it is skipped
      else {
        if (a == mem)
          i++;
        if (b == mem)
          j++;
      }
    }

    // The remaining sort, where the last of the remaining array is added on
    while (i < lengthA) {
      arrayR[k] = arrayA[i];
      printf("[%d] = %f\n", k, arrayR[k]);
      i++;
      k++;
    }
    while (j < lengthB) {
      arrayR[k] = arrayB[j];
      printf("[%d] = %f\n", k, arrayR[k]);
      j++;
      k++;
    }
  }
  return arrayR;
}