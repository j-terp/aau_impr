#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORD_LENGTH 25

void pluralString(int*);
void pluralEndAdd(int, char*);

int main(void) {
  int done = 0;
  do
  {
    pluralString(&done);
  } while (!done);
  
  return EXIT_SUCCESS;
}

void pluralString(int *flag) {
  char *scannedWord, i;
  int stringLength;

  scannedWord = (char *)malloc(WORD_LENGTH * sizeof(char));
  printf("\nprint singular> ");
  scanf("%s", scannedWord);
  fflush(stdin);
  stringLength = strlen(scannedWord);
  if (strcmp(scannedWord, "A") < 0 ||strcmp(scannedWord, "z") > 0) {
    *flag = 1;
  }
  else {
    pluralEndAdd(stringLength, scannedWord);
  }
}

void pluralEndAdd(int length, char *wordSin) {
  char *wordPlur;
  wordPlur = (char *)malloc((length + 3) * sizeof(char));
  wordPlur = strcpy(wordPlur, wordSin);
  if (wordSin[length - 1] == 'y') {
    wordPlur[length - 1] = '\0';
    wordPlur = strcat(wordPlur, "ies");
  }
  else if (wordSin[length - 1] == 's' || (wordSin[length - 2] == 'c' && wordSin[length - 1] == 'h') || (wordSin[length - 2] == 's' && wordSin[length - 1] == 'h')) {
    wordPlur = strcat(wordPlur, "es");
  }
  else {
    wordPlur = strcat(wordPlur, "s");
  }
  printf("%s changed to %s\n", wordSin, wordPlur);
}
