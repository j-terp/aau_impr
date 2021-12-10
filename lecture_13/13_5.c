#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LGT 50
#define NUM_FIELDS 6
#define NUM_PEOPLE 11

struct person {
  char fornavn[MAX_NAME_LGT];
  char efternavn[MAX_NAME_LGT];
  char vejnavn[MAX_NAME_LGT];
  int vejnummer;
  int postnummer;
  char bynavn[MAX_NAME_LGT];
};

void readLine(FILE*, char*, int);
void writeToFile(FILE*, struct person);
int personCompare(const void*, const void*);

int main(void) {
  char* line = (char*) malloc(sizeof(char) * NUM_FIELDS*MAX_NAME_LGT);
  int length = MAX_NAME_LGT;
  struct person personArray[NUM_PEOPLE];
  FILE* inputFile = fopen("personer-ind.txt", "r");
  FILE* outputFile = fopen("personer-ud.txt", "w");

  for (size_t i = 0; i < 20; i++) {
    readLine(inputFile, line, NUM_FIELDS*MAX_NAME_LGT);
  }
  



  for (int i = 0; i < NUM_PEOPLE; i++) {
    readLine(inputFile, line, NUM_FIELDS*MAX_NAME_LGT);
    sscanf(line, "%s %[^0123456789,] , %[^0123456789,] %i , %i %s \n", &(personArray[i].fornavn), &(personArray[i].efternavn), &(personArray[i].vejnavn), &(personArray[i].vejnummer), &(personArray[i].postnummer), &(personArray[i].bynavn));
    personArray[i].vejnavn[strlen(personArray[i].vejnavn) - 1] = '\0';
    personArray[i].bynavn[strlen(personArray[i].bynavn) - 1] = '\0';
  }
  free(line);
  qsort(personArray, NUM_PEOPLE, sizeof(struct person), personCompare);
  for (int i = 0; i < NUM_PEOPLE; i++){
    writeToFile(outputFile, personArray[i]);
  }
  return EXIT_SUCCESS;
}

void readLine(FILE* file, char* line, int lineLen) {
  char buffer[2] = {'\0'};
  char* temp = fgets(buffer, 2, file);
}

void writeToFile(FILE* file, struct person element) {
  fprintf(file, "%s: %s\n", element.bynavn, element.efternavn);
}

int personCompare(const void* p1, const void* p2) {
  struct person* person1 = (struct person*) p1;
  struct person* person2 = (struct person*) p2;
  return strcmp(person1->efternavn, person2->efternavn);
}