#include <stdio.h>

double celsiusToFahrenheit(double *c);

int main(void){
  double temp_1 = 0, temp_2 = 100;
  celsiusToFahrenheit(&temp_1);
  celsiusToFahrenheit(&temp_2);

  printf("Freezing point: %6.2f F.\n", temp_1);
  printf("Boiling point: %6.2f F.\n", temp_2);
  return 0;
}

double celsiusToFahrenheit(double *c) {
  *c = 9.0 / 5.0 * *c + 32.0;
}