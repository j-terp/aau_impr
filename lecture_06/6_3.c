// Dette program handler om seddeludlevering fra en amerikansk pengeautomat, hvor der kun anvendes 100, 50, 20 og 10 dollar sedler.

// Målet med programmet er at arbejde med både input og outputparametre af en funktion.

// Programmet skal som input acceptere et dollar beløb, der er dividerbart med 10. Programmet skal beregne antallet af udleverede 100, 50, 20 og 10 dollar sedler svarende til beløbet. Der skal udleveres så få sedler som muligt.

// Problemet skal løses med en funktion der tager både input og output parametre. Beløbet, der skal veksles, skal være en input parameter. Antallet af udleverede 100, 50, 20 og 10 dollar sedler skal være output parametre.

#include <stdio.h>
#include <stdlib.h>

void atmExchange(int *, int *, int *, int *, int *, int *),
     billExchange(int *, int *, int),
     billPrint(int *, int *, int *, int *, int *);

int main(void) {
  int input, dollar, hundred, fifty, twenty, ten;

  do {
  printf("Enter a multiple of 10 dollar amount> ");
  scanf("%d", &input);
  dollar = input;
  } while (input >= 0 && input % 10 != 0);

  atmExchange(&input, &dollar, &hundred, &fifty, &twenty, &ten);

  return EXIT_SUCCESS;
}

void atmExchange(int *input, int *dollar, int *hundred, int *fifty, int *twenty, int *ten) {
  billExchange(dollar, hundred, 100);
  billExchange(dollar, fifty, 50);
  billExchange(dollar, twenty, 20);
  billExchange(dollar, ten, 10);
  billPrint(input, hundred, fifty, twenty, ten);
}

void billExchange(int *dollar, int *bill, int worth) {
  *bill = *dollar / worth;
  *dollar -= *bill * worth;
}

void billPrint(int *input, int *hundred, int *fifty, int *twenty, int *ten) {
  printf("%d dollars gives you ", *input);
  if (*input == 0)
    printf("nothing");
  else {
    if (*hundred > 0) {
      printf("%d hundred dollar bill", *hundred);
      if (*hundred > 1)
        printf("s");

      if ((*fifty != 0 && (*twenty != 0 || *ten != 0)) || (*twenty != 0 && *ten != 0))
        printf(" , ");
      else if ((*fifty != 0) || *fifty == 0 && (*twenty != 0 || *ten != 0))
        printf(" and ");
    }

    if (*fifty > 0) {
      printf("%d fifty dollar bill", *fifty);
      if (*fifty > 1)
        printf("s");

      if ((*twenty != 0 && *ten != 0))
        printf(" , ");
      else if (*twenty != 0 || *ten != 0)
        printf(" and ");
    }

    if (*twenty > 0) {
      printf("%d twenty dollar bill", *twenty);
      if (*twenty > 1)
        printf("s");

      if (*ten != 0)
        printf(" and ");
    }

    if (*ten > 0) {
      printf("%d ten dollar bill", *ten);
      if (*ten > 1)
        printf("s");
    }
  }
}