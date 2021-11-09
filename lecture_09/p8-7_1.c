#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void printNumber(char, char*);
int userChoice(char, char*);
int strtoint(char*);
double strtodouble(char*);

int main(void) {
  char *string;
  int choice;
  string = (char *)malloc(8);
  printf("1. int\n2. float\n");
  printf("> ");
  scanf("%c", &choice);
  fflush(stdin);
  if (userChoice(choice, "12")) {
    printf("Input number> ");
    fflush(stdin);
    scanf("%s", string);
    printNumber(choice, string);
  }
  return EXIT_SUCCESS;
}

void printNumber(char choice, char *str) {
  int integer;
  double double_number;
  switch (choice) {
  case '1':
    integer = strtoint(str);
    printf("%s = %d", str, integer);
    break;
  case '2':
    double_number = strtodouble(str);
    printf("%s = %f", str, double_number);
    break;
  default:
    break;
  }
}

int userChoice(char choice, char *list) {
  int i, size;
  size = strlen(list);
  for (i = 0; i < size; i++) {
    if (list[i] == choice) {
      return 1;
    }
  }
  return 0;
}

int strtoint(char *string) {
  int i, point, len, digit, sum;
  len = strlen(string);
  sum = 0;
  for (point = 0; point < len; point++){
    if ((string[point] < '0' || string[point] > '9') && (string[point] != '-')) {
      break;
    }
  }
  for (i = 0; i < point; i++) {
    digit = string[point - i - 1];
    if (digit >= '0' && digit <= '9') {
      sum += (digit - '0') * (int) pow(10, i);
    }
    else if (digit == '-') {
      sum = -sum;
    }
    else {
      break;
    }
  }
  return sum;
}

double strtodouble(char *string) {
  int i, point, len;
  double digit, sum;
  len = strlen(string);
  sum = 0.0;
  for (point = 0; point < len; point++){
    if (string[point] == '.') {
      break;
    }
  }
  for (i = 0; i < point; i++) {
    digit = string[point - i - 1];
    if (digit >= '0' && digit <= '9') {
      sum += (digit - '0') * (int) pow(10, i);
    }
    else if (digit == '-') {
      sum = -sum;
    }
    else {
      break;
    }
  }
  for (i = 0; i < len - (point + 1); i++) {
    digit = string[i + point + 1];
    if (digit >= '0' && digit <= '9') {
      sum += (digit - '0') / pow(10, i + 1);
    }
    else {
      break;
    }
  }
  return sum;
}
