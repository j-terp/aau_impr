#include <stdio.h>
#include <stdlib.h>

int check_digit_function(int *);

int main(void) {
  int *digitArray;
  int check_digit, arrayLength = 12, arrayNumber, odds, evens;
  int barcode_1[] =
      {0, 7, 9, 4, 0, 0, 8, 0, 4, 5, 0, 1},
      barcode_2[] =
      {0, 2, 4, 0, 0, 0, 1, 6, 2, 8, 6, 0},
      barcode_3[] =
      {0, 1, 1, 1, 1, 0, 8, 5, 6, 8, 0, 7},
      barcode_4[] =
      {0, 5, 1, 0, 0, 0, 1, 3, 8, 1, 0, 1};
  int barcodes[] =
  {*barcode_1, *barcode_2, *barcode_3, *barcode_4};

  for (int i = 0; i < arrayNumber; i++) {
    odds = 0;
    evens = 0;
    /*int current_barcode[12] = barcode_3;
    for (int j = 0; j < (arrayLength - 1); j++) {
      if (j % 2 == 1) {
        odds += current_barcode[j];
      }
      else if (j % 2 == 1 && j != (arrayLength - 1)){
        evens += current_barcode[j];
      }
      
    }
    if (3 * odds + evens == (current_barcode[arrayLength - 1])) {
      printf("validated.");
    }
    else {
      printf("error in barcode");
    }
    */
  }
  
}