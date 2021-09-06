#include <stdio.h>

// Skriv et C program, som indlæser et helt antal sekunder og som omregner dette tal til uger, dage, timer, minutter og sekunder på sædvanlig vis. Programmet skal udskrive antallet af uger, dage, timer, minutter og sekunder på skærmen.
// Mere præcist skal de omregnede sekunder være i intervallet 0..59, de omregnede minutter skal være i intervallet 0..59, de omregnede timer skal være i intervallet 0..23, og de omregnede dage i intervallet 0..6. Ugetallet kan være vilkårligt stort.
// Målet med opgaven er primært at træne dig i brugen af heltalsdivision / og rest operatoren ved heltalsdivision %. Sekundært sætter opgaven fokus på symbolske konstanter og simpel brug af scanf og printf.
// Her er eksempler på input og ønsket output:
//    Hvis der indlæses 650 sekunder udskrives der 0 uger, 0 dage, 0 timer, 10 minutter og 50 sekunder.
//    Hvis der indlæses 4000 sekunder udskrives der 0 uger, 0 dage, 1 timer, 6 minutter og 40 sekunder.
//    Hvis der indlæses 1000000 sekunder udskrives der 1 uger, 4 dage, 13 timer, 46 minutter og 40 sekunder.

// Konstanter for konvertering
# define SECONDS_PER_MINUTE 60
# define SECONDS_PER_HOUR 3600
# define SECONDS_PER_DAY 86400
# define SECONDS_PER_WEEK 604800
int main(void){
    int weeks, days, hours, minutes, seconds;

    printf("Enter amount of seconds: ");
    scanf("%d", &seconds);

    weeks = seconds / SECONDS_PER_WEEK;
    seconds = seconds % SECONDS_PER_WEEK;
    days = seconds / SECONDS_PER_DAY;
    seconds = seconds % SECONDS_PER_DAY;
    hours = seconds / SECONDS_PER_HOUR;
    seconds = seconds % SECONDS_PER_HOUR;
    minutes = seconds / SECONDS_PER_MINUTE;
    seconds = seconds % SECONDS_PER_MINUTE;

    printf("%d uger, %d dage, %d timer, %d minuter, %d sekunder.", weeks, days, hours, minutes, seconds);
    return 0;
}