#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORD_LENGTH 100

int isPalindrome(char*);
int loopPalindrome(char*);

int main(void) {
  char *string;
  int flag1, flag2;
  string = (char *)malloc(WORD_LENGTH * sizeof(char));

  printf("> ");
  scanf("%s", string);
  
  flag1 = loopPalindrome(string);
  flag2 = isPalindrome(string);
  if (flag1 == 1 && flag2 == 1)
    printf("True\n");
  else if (!(flag1 || flag2))
    printf("False\n");
  else
    printf("Problem occured");
  free(string);
  return EXIT_SUCCESS;
}

/* Iterativ */
int loopPalindrome(char *str) {
  int i;
  for (i = 0; i < strlen(str) / 2; i++) {
    if (str[i] != str[strlen(str) - 1 - i])
      break;
  }
  return ((i < strlen(str) / 2) ? (0) : (1));
}

/* Rekursiv */
int isPalindrome(char *str) {
  if(str[0] == str[strlen(str) - 1]) {
    if (strlen(str) > 1) {
      return str[strlen(str) - 1] = '\0', isPalindrome(str+1);
    }
    else
      return 1;
  }
  else
    return 0;
}
