// Formålet med denne opgave er at give jer erfaring med formateret input med scanf funktionen fra stdio bibliotektet.

// Der vises et antal programmer herunder, hvor hvert program indlæser nogle data med scanf. Der gives et antal forslag til input linier. I skal afprøve hvert problem et antal gange, med den foreslåede input. I hvert tilfælde skal I forklare hvad der indlæses, og hvilken værdi der returneres af kaldet af scanf. Endvidere er det helt fint at variere både programmerne og input, for at få endnu mere indsigt og erfaring!

// Jeg anbefaler at I nedskriver den række af erfaringer, som I får ved at lege med eksemplerne i denne opgave. Læg mærke til tallet scanRes, og den pejling som scanRes giver for indlæsningen med scanf. Disse erfaringer er gode at vende tilbage til siden hen på dette kursus.

// I lærebogen kan du læse om scanf side 85 - 87. Jeg kan også anbefale afsnittet Formatted Input (scanf) fra Steve Summit's noter om C programmering (introductory og intermediate) som beskriver flere variationer af scanf end lærebogen.

// Her er første version af programmet, som indlæser tegn:

#include <stdio.h>

int main(void) {

  int c1, c2, c3, c4,   scanRes;

  printf("Enter input on the following line\n");

  scanRes = scanf("%c%c%c%c", &c1, &c2, &c3, &c4);

  printf("c1 = %c, c2 = %c, c3 = %c, c4 = %c\n", c1, c2, c3, c4);
  printf("scanRes = %d\n", scanRes);

  return 0;
}

// Afprøv programmet med følgende input (i et tilsvarende antal kørsler af programmet). Forklar dine observationer:

// abcd
// ab
// a b c d