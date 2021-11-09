#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORD_LENGTH 100

int letterCheck(char *, int *, int *);

int main(void) {
  char *string;
  string = (char *)malloc(WORD_LENGTH * sizeof(char));
  int vowel = 0,
      consonant = 0;

  printf("> ");
  fgets(string, 100, stdin);
  letterCheck(string, &vowel, &consonant);
  printf("Vowels: %d\nConsonants: %d", vowel, consonant);
  return EXIT_SUCCESS;
}

int letterCheck(char *string, int *vowel, int *consonant) {
  int stringLength, len, i, j;
  stringLength = strlen(string);
  char array[] = "aeiouyAEIOUY";
  len = strlen(array);
  for (i = 0; i < stringLength; i++) {
    for (j = 0; j < len; j++) {
      if (string[i] == array[j]) {
        (*vowel)++;
        break;
      }
    }
    if (j == len && string[i] != ' ') {
      (*consonant)++;
    }
  } 
}
