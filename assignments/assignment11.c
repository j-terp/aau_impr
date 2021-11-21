#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DECK_SIZE 55

typedef enum boolean {false, true} bool;
enum rank {knight = 11, queen, king, ace};
enum suit {clubs, diamonds, hearts, spades};

typedef struct card {
  bool inDeck;
  union type {
    bool joker;
    struct playCard {
      enum rank value;
      enum suit color;
    };
  };
} card;

void initDeck(card*),
     randDeck(card*),
     printDeck(card*),
     sortDeck(card*);
int cardCompare(const void*, const void*);
char* cardSuit(enum suit),
    * cardRank(enum rank);

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

void initDeck(card* deck) {
  int i;
  for (i = 0; i < DECK_SIZE; i++) {
    deck[i].inDeck = false;
    deck[i].joker = false;
  }
}

void randDeck(card* deck) {
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

void sortDeck(card* deck) {
  qsort(deck, DECK_SIZE, sizeof(card), cardCompare);
}

int cardCompare(const void* v1, const void* v2) {
  card* card1 = (card*) v1;
  card* card2 = (card*) v2;
  if (card1->inDeck == card2->inDeck) {
    if (card1->color == card2->color) {
      if (card1->value == card2->value) {
        return 0;
      }
      else return (card1->value > card2->value) ? (1) : (-1);
    }
    else return (card1->color > card2->color) ? (1) : (-1);
  }
  else return (card1->inDeck < card2->inDeck) ? (1) : (-1); 
}

void printDeck(card *deck) {
  int i;
  for (i = 0; i < DECK_SIZE; i++) {
    printf("[%2i] ", i + 1);
    if (deck[i].inDeck)
      printf("%s of %s\n", cardRank(deck[i].value), cardSuit(deck[i].color));
    else
      printf("Joker\n"); 
  }
}

char* cardRank(enum rank value) {
  char* rank;
  int i;
  switch (value) {
    case 2:
      rank = "2";
      break;
    case 3:
      rank = "3";
      break;
    case 4:
      rank = "4";
      break;
    case 5:
      rank = "5";
      break;
    case 6:
      rank = "6";
      break;
    case 7:
      rank = "7";
      break;
    case 8:
      rank = "8";
      break;
    case 9:
      rank = "9";
      break;
    case 10:
      rank = "10";
      break;
    case knight:
      rank = "knight";
      break;
    case queen:
      rank = "queen";
      break;
    case king:
      rank = "king";
      break;
    case ace:
      rank = "ace";
      break;
    default:
      rank = "0";
      break;
  }
  return rank;
}

char* cardSuit(enum suit color) {
  char* suit;
  switch (color) {
    case clubs:
      suit = "clubs";
      break;
    case diamonds:
      suit = "diamonds";
      break;
    case hearts:
      suit = "hearts";
      break;
    case spades:
      suit = "spades";
      break;

    default:
      suit = "blank";
      break;
  }
  return suit;
}
