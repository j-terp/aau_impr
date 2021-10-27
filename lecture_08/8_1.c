#include <stdio.h>
#include <stdlib.h>

enum forret {guacamole, tarteletter, lakserulle, graeskarsuppe};
enum hovedret {gyldenkaal, hakkeboef, gullash, forloren_hare};
enum dessert {pandekager_med_is, gulerodskage, chokolademousse, citronfromage};

int *createMenu(int, int);
void startRandom(void),
     maaltid(int, int*, int),
     chooseFromMenu(int[], int),
     printMaaltid(int, int, int),
     forret(enum forret),
     hovedret(enum hovedret),
     dessert(enum dessert);

int main(void) {
  int const length = 25,
      bit_size = 2;
  int *menukort;
  startRandom();
  menukort = createMenu(length, bit_size);
  chooseFromMenu(menukort, bit_size);
  return EXIT_SUCCESS;
}

// Creating a menu
int *createMenu(int count, int bit) {
  int *menu;
  menu = (int *)malloc(count * sizeof(int));
  for (size_t i = 0; i < count; i++) {
    maaltid(i, menu, bit);
  }
  return menu;
}

void maaltid(int place, int *menu, int element_size) {
  int a, b, c;
  int new_item = -1, flag = 0;
  a = (rand() % 4);
  b = (rand() % 4);
  c = (rand() % 4);
  new_item = a + (b << element_size) + (c << 2 * element_size);
  for (size_t item = 0; item < place; item++) {    
    if (menu[item] == new_item) {
      flag = 1;
    }
  }
  if (flag != 1) {
    menu[place] = new_item;
  }
  if (menu[place] == new_item) {
    printf("[%2d] - ", (place + 1));
    printMaaltid(a, b, c);
  }
  else {
    maaltid(place, menu, element_size);
  }
}

void startRandom(void) {
  srand(25);
}

void chooseFromMenu(int menu[], int bit) {
  int choice;
  printf("\n\nPick a meal> ");
  scanf("%d", &choice);
  printf("You chose meal %d, which includes ", choice);
  choice--;
  int a = menu[choice] % 4,
      b = (menu[choice] >> bit) % 4,
      c = (menu[choice] >> 2 * bit) % 4;
  printMaaltid(a, b, c);
}

void printMaaltid(int a, int b, int c) {
  forret(a);
  printf(", ");
  hovedret(b);
  printf(" og ");
  dessert(c);
  printf("\n");
}

void forret(enum forret item) {
  switch (item) {
  case guacamole:
    printf("Guacamole");
    break;
  case tarteletter:
    printf("Tarteletter");
    break;
  case lakserulle:
    printf("Lakserulle");
    break;
  case graeskarsuppe:
    printf("Graeskarsuppe");
    break;
  
  default:
    break;
  }
}

void hovedret(enum hovedret item) {
  switch (item) {
  case gyldenkaal:
    printf("Gyldenkaal");
    break;
  case hakkeboef:
    printf("Hakkeboef");
    break;
  case gullash:
    printf("Gullash");
    break;
  case forloren_hare:
    printf("Forloren hare");
    break;
  
  default:
    break;
  }
}

void dessert(enum dessert item) {
  switch (item) {
  case pandekager_med_is:
    printf("Pandekager med is");
    break;
  case gulerodskage:
    printf("Gulerodskage");
    break;
  case chokolademousse:
    printf("Chokolademousse");
    break;
  case citronfromage:
    printf("Citronfromage");
    break;
  
  default:
    break;
  }
}