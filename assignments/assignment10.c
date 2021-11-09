#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORD_LENGTH 100

int isPalindromeIter(char*);
int isPalindromeRec(char*);

int main(void) {
  char *string;
  int flag1, flag2;
  string = (char *)malloc(WORD_LENGTH * sizeof(char));

  printf("> ");
  scanf("%s", string);
  
  flag1 = isPalindromeIter(string);
  flag2 = isPalindromeRec(string);
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
int isPalindromeIter(char *str) {
  int i;
  for (i = 0; i < strlen(str) / 2; i++) {
    if (str[i] != str[strlen(str) - 1 - i])
      break;
  }
  return ((i < strlen(str) / 2) ? (0) : (1));
}

/* Rekursiv */
int isPalindromeRec(char *str) {
  if(str[0] == str[strlen(str) - 1]) {
    if (strlen(str) > 2) {
      str[strlen(str) - 1] = '\0';
      return isPalindrome(str+1);
    }
    else
      return 1;
  }
  else
    return 0;
}
