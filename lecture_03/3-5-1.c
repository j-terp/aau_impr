// Vi har på en tidligere slide set på følgende program med en if-else kæde:

#include <stdio.h>

int main(void) {

  int percent, grade;

  printf("How many percent? ");
  scanf("%d",&percent);

  if (percent >= 90)
    grade = 11;
  else if (percent >= 82)
    grade = 10;
  else if (percent >= 74)
    grade = 9;
  else if (percent >= 66)
    grade = 8;
  else if (percent >= 58)
    grade = 7;
  else if (percent >= 50)
    grade = 6;
  else if (percent >= 40)
    grade = 5;
  else if (percent >= 10)
    grade = 3;
  else grade = 0; 

  printf("%d percent corresponds to the Danish grade %d\n\n", 
          percent, grade);
  
  return 0;
}