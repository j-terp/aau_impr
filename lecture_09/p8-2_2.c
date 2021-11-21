#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trim_blanks(char*, const char*);

int main(void) {
  char *input = "   Hello   ", *output;
  trim_blanks(output, input);
  printf("\"%s\" = \"%s\"", input, output);
  return EXIT_SUCCESS;
}

// Takes a string and returns a copy with leading and trailing blanks removed.
void trim_blanks(char *trimmed, const char *to_trim) {
  int begin, end, i;  
  char a;
  strcpy(trimmed, to_trim);
  a = trimmed[0];
  end = strlen(trimmed);
  a = trimmed[end - 1];
  while (trimmed[end - 1] == ' ') {
    end--;
    a = trimmed[end - 1];
  }
  trimmed[end] = '\0';
  for (i = 0; i < end; i++) {
    printf("%c", trimmed[i]);    
  }
  
  end = strlen(trimmed);
}
