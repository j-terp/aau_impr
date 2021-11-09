#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORD_LENGTH 25

char *strsfx(char*,char*);


int main(void) {
  char *string1, *string2, *suffixString, flag = 0;
  string1 = (char *)malloc(WORD_LENGTH * sizeof(char));
  string2 = (char *)malloc(WORD_LENGTH * sizeof(char));
  
  do{
    printf("> ");
    scanf("%s", string1);
    fflush(stdin);
    printf("> ");
    scanf("%s", string2);
    fflush(stdin);
    suffixString = strsfx(string1, string2);
    printf("%s and %s have the common suffix %s\n", string1, string2, suffixString);
    flag = 1;
  } while (!flag);
  
  return EXIT_SUCCESS;
}

char *strsfx(char *str1, char * str2) {
  int length, len1, len2, lenSuf, index, i, j;
  char *suffix;
  
  // Length comparisons
  len1 = strlen(str1);
  len2 = strlen(str2);
  length = ((len1 >= len2) ? (len1) : (len2));
  
  // Calculates the position of the suffix and the length
  i = length;
  while (str1[len1 - (length - i)] == str2[len2 - (length - i)] && len1 - (length - i) > 0 && len2 - (length - i) > 0) {
    i--;
  }
  i++;
  lenSuf = length - i;
  index = len1 - lenSuf;
  
  // Creates the suffix and returns it
  suffix = (char *)malloc(lenSuf * sizeof(char));
  for (j = 0; lenSuf + j <= len1; j++) {
    suffix[j] = str1[index + j];
  }
  return suffix;
}
