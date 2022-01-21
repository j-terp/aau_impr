#include <stdio.h>
#include <stdlib.h>

#define FILE_LEN 1000

int main(void) {
  FILE* filePtr;
  int k = 50;
  int count;
  char* words = (char*) malloc(sizeof(char) * FILE_LEN);
  
  filePtr = fopen("file", "r");
  
  count = getwords(filePtr, k, words);

  printf("%d Words:\n\n%s", count, words);  

  fclose(filePtr);

  return EXIT_SUCCESS;
}

int getwords(FILE* ifp, int k, char* words) {
  int ch,
      wordCount = 0,
      index = -1;
  if (ifp != NULL) {
    while ((ch = fgetc(ifp)) != EOF && wordCount < k) {
      if (ch == ' ') {
        if (words[index] != ' ') {
          wordCount++;
          words[++index] = '\n';
        }
        else
          ++index;
      }
      else
        words[++index] = ch;
    }
  }
  else {
    printf("Could not read file");
    exit(EXIT_FAILURE);
  }
  words[++index] = '\0';
  return wordCount;
}
