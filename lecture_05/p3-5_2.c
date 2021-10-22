#include <stdio.h>
#include <stdlib.h>

// Calculates the time of departure in the format HHMM with no leading zeroes
int start_travel(int arrival, double distance, double speed) {
  int a_minutes = arrival % 100, a_hours = (arrival - a_minutes) / 100;
  // Invalid input time, distance or speed
  if (a_minutes >= 60 || a_hours >= 24 || distance < 0.0 || speed < 0.0) {return -1;}
  // Calculation
  double time = distance / speed;
  int t_hours = (int)time, t_minutes = (int)((time - (double)t_hours) * 60.0 - 0.5);
  int s_hours = a_hours - t_hours, s_minutes = a_minutes - t_minutes;
  // Handles negative values correctly
  if (s_hours < 0) {s_hours += 24;}
  if (s_minutes < 0) {s_hours -= 1, s_minutes += 60;}
  // Invalid output
  if (s_minutes >= 60 || s_hours >= 24) {return -1;}
  // Formatting result
  return s_hours * 100 + s_minutes;
}

int main(void) {
  int start_time, hours, minutes, midday, arrival, distance, speed;
  // Input
  do {
  printf("Input arrival time hours and minutes> ");
  scanf(" %d %d", &hours, &minutes);
  } while (hours < 0 || minutes < 0);
  do {
  printf("Input distance to destination in kilometers> ");
  scanf("%lf", &distance);
  } while (distance < 0.0);
  do {
  printf("Input the average speed towards the destination in kilometers per hour> ");
  scanf("%lf", &speed);
  } while (speed < 0.0);
  arrival = hours * 100 + minutes;
  start_time = start_travel(arrival, distance, speed);
  if (start_time < 0) {
    printf("Invalid input");
    return EXIT_FAILURE;
  }
  // Printing result
  minutes = start_time % 100;
  hours = (start_time - minutes) / 100;
  midday = (hours >= 12) ? 1 : 0;
  hours %= 12;
  print("Estimated departure time: %d:%d ", hours, minutes);
  if (midday) {printf("P.M.");}
  else {printf("A.M.");}
}