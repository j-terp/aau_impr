#include <stdio.h>
#include <stdlib.h>

int check_digit_function(int *);

int main(void) {
  int *digitArray;
  int arrayLength = 12, arrayNumber = 4,
      odds, evens, check_digit, sum;
  int barcodes[][12] = {
    {0, 7, 9, 4, 0, 0, 8, 0, 4, 5, 0, 1},
    {0, 2, 4, 0, 0, 0, 1, 6, 2, 8, 6, 0},
    {0, 1, 1, 1, 1, 0, 8, 5, 6, 8, 0, 7},
    {0, 5, 1, 0, 0, 0, 1, 3, 8, 1, 0, 1}
  };

  // Looping through every barcode
  for (int i = 0; i < arrayNumber; i++) {
    odds = 0;
    evens = 0;
    
    // Looping throught the barcode digits
    for (int j = 0; j < (arrayLength - 1); j++) {
      // Adding the odd placed and even placed digits respectively
      if (((j + 1) % 2) == 1) {
        odds += barcodes[i][j];
      }
      else if (((j + 1) % 2) == 0 && j != (arrayLength - 1)) {
        evens += barcodes[i][j];
      }
    }

    // Calculates the check digit and compares it to the given check digit
    sum = (3 * odds + evens) % 10;
    check_digit = (sum == 0) ? 0 : 10 - sum;
    if (check_digit == (barcodes[i][arrayLength - 1]))
      printf("validated.\n");
    else
      printf("error in barcode\n");
  }
}