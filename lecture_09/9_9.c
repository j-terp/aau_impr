#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PERSON 7
#define NAME_LENGTH_MAX 20
#define NON_EXISTING 0

int h(char*);
int strChck(char*, char*);

int main(void) {
  int ageByName[MAX_PERSON];
  char name[NAME_LENGTH_MAX];
  int age, index, done = 0, i;
  
  for (i = 0; i < MAX_PERSON; i++) {
    ageByName[i] = NON_EXISTING;
  }
  
  while (!done) {
    printf("Name and age: ");
    scanf(" %s %d", name, &age);
    done = strChck(name, "exit") || age < 0;
    if (!done) {
      index = h(name);
      printf("Index: %d\n", index);
      if (index >= 0)
        ageByName[index] = age;
    }
  }
  
  printf("\n");
  {
    char *name[] = {"Andreas", "Jonas", "Jonathan", "Magnus", "Mathias", "Theis", "Tobias"};
    int i;

    for (i = 0; i < 4; i++) {
      printf("ageByName[h(\"%s\")] = %d\n", name[i], ageByName[h(name[i])]);
    }
    
  }
  return EXIT_SUCCESS;
}

int h(char *name) {
  if (strChck(name, "Andreas")) {
    return 0;
  }
  else if (strChck(name, "Jonas")) {
      return 1;
    }
  else if (strChck(name, "Jonathan")) {
      return 2;
    }
  else if (strChck(name, "Magnus")) {
      return 3;
    }
  else if (strChck(name, "Mathias")) {
      return 4;
    }
  else if (strChck(name, "Theis")) {
      return 5;
    }
  else if (strChck(name, "Tobias")) {
      return 6;
    }
  else {
    return -1;
  }
}

int strChck(char *str1, char *str2) {
  return strcmp(str1, str2) == 0;
}
