// Nu bytter vi om på tilfældene i if-else kæden (dog bevarer vi else-delen):

#include <stdio.h>

int main(void) {

  int percent, grade;

  printf("How many percent? ");
  scanf("%d",&percent);

  if (percent >= 10)
    grade = 3;
  else if (percent >= 40)
    grade = 5;
  else if (percent >= 50)
    grade = 6;
  else if (percent >= 58)
    grade = 7;
  else if (percent >= 66)
    grade = 8;
  else if (percent >= 74)
    grade = 9;
  else if (percent >= 82)
    grade = 10;
  else if (percent >= 90)
    grade = 11;
  else grade = 0; 

  printf("%d percent corresponds to the Danish grade %d\n\n", 
          percent, grade);
  
  return 0;
}

// Ændrer dette betydningen af programmet? Uddrag en generel tommelfingerregel for ordningen af de logiske udtryk i en if-else kæde.