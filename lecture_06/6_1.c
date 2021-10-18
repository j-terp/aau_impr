// Vi har tidligere programmeret en simpel funktion, der omregner fra en celcius temperatur til fahrenheit temperatur. Det er helt naturligt at celcius temperaturen er en call by value input parameter. Ligeledes er det naturligt at fahrenheit temperaturen returneres med return fra funktionen.

// Omskriv nu funktionen således at fahrenheit temperaturen returneres gennem en output parameter - en pointer. Omskriv også main, således at kaldet ændres til denne nye parameterprofil.

// Hvilken version foretrækker du?

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