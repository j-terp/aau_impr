#include <stdio.h>
#include <stdlib.h>

#define WORD_LENGTH 100

int stringCompare(char*, char*);

int main(void) {
  char *string1, *string2;
  string1 = (char *)malloc(WORD_LENGTH * sizeof(char));
  string2 = (char *)malloc(WORD_LENGTH * sizeof(char));

  printf("> ");
  fgets(string1, 100, stdin);
  printf("> ");
  fgets(string2, 100, stdin);

  if (stringCompare(string1, string2) == 1)
    printf("True");
  else
    printf("False");
  free(string1);
  free(string2);
  return EXIT_SUCCESS;
}

int stringCompare(char *str1, char *str2) {
  if (str1[0] == str2[0]) {
    if (str1[0] != '\0')
      return stringCompare(str1 + 1, str2 + 1);
    else
      return 1;
  }
  else
    return 0;
}
