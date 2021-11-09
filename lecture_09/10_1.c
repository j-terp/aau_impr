#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORD_LENGTH 25

void strrev1(char*);

int main(void) {
  char *string, flag = 0;
  string = (char *)malloc(WORD_LENGTH * sizeof(char));
  do{
    printf("> ");
    scanf("%s", string);
    fflush(stdin);
    if (strcmp(string, "1") >= 0 && strcmp(string, "z") <= 0) {
      printf("%s ~~> ", string);
      strrev1(string);
      printf("%s\n", string);
    }
    else
      flag = 1;
  } while (!flag);
  
  
  
  return EXIT_SUCCESS;
}

void strrev1(char *str) {
  int length, i;
  char a, b;
  length = strlen(str);
  for (i = 0; i < (length / 2); i++) {
    a = str[i];
    b = str[length - 1 - i];
    str[i] = b;
    str[length - 1 - i] = a;
  }
}
