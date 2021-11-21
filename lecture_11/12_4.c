#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DECK_SIZE 55

enum bool {false, true};
enum rank {knight = 11, queen, king, ace};
enum suit {clubs, diamonds, hearts, spades};

typedef struct card {
  enum bool inDeck;
  union type {
    enum bool joker;
    struct playCard {
      enum rank value;
      enum suit color;
    };
  };
} card;

void initDeck(card*),
     randDeck(card*),
     sortDeck(card*),
     printDeck(card*);
int cardCompare(const void*, const void*);

int main(void) {
  card deck[DECK_SIZE];
  srand(time(NULL));

  initDeck(deck);
  randDeck(deck);
  printf("Unsorted:\n");
  printDeck(deck);
  sortDeck(deck);
  printf("Sorted:\n");
  printDeck(deck);
  
  return EXIT_SUCCESS;
}

void initDeck(card *deck) {
  int i;
  for (i = 0; i < DECK_SIZE; i++) {
    deck[i].inDeck = false;
    deck[i].joker = false;
  }
}

void randDeck(card *deck) {
  int i, index, j;
  i = 0, j = 0;
  while (i < DECK_SIZE) {
    index = rand() % DECK_SIZE;
    while (deck[index].inDeck != false || deck[index].joker != false)
      index = (index + 1) % DECK_SIZE;
    if (index < 52) {
      deck[index].inDeck = true;
      deck[index].value = (i-j) % 13 + 2;
      deck[index].color = (i-j) / 13;
    }
    else {
      deck[index].joker = true;
      j++;
    }
    i++;
  }
}

void printDeck(card *deck) {
  int i;
  for (i = 0; i < DECK_SIZE; i++) {
    printf("[%2i] ", i + 1);
    if (deck[i].inDeck)
      printf("%d:%d\n", deck[i].color, deck[i].value);
    else
      printf("Joker\n"); 
  }
}

void sortDeck(card *deck) {
  qsort(deck, DECK_SIZE, sizeof(card), cardCompare);
}

int cardCompare(const void *v1, const void *v2) {
  card *card1 = (card*) v1;
  card *card2 = (card*) v2;
  if (card1->inDeck == card2->inDeck) {
    if (card1->color == card2->color) {
      if (card1->value == card2->value) {
        return 0;
      }
      else
        return (card1->value > card2->value) ? (1) : (-1);
    }
    else
      return (card1->color > card2->color) ? (1) : (-1);
  }
  else
    return (card1->inDeck < card2->inDeck) ? (1) : (-1); 
}
