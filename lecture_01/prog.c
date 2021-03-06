// Formålet med denne opgave er at øve dig i arbejdsprocesserne på tværs af en teksteditor, en shell terminal, og en compiler.

// Kopier først et program fra undervisningsmaterialet ind i din teksteditor. Du kan passende kopiere programmet som vises øverst i lektion 2 slide 23.

// Lav en simpel ændring af programmet: Oversæt f.eks. den fast engelske tekst i printf til dansk.

// Lav så et nyt directory (katalog/mappe) fra din terminal med navnet c-programmer. Brug kommandoen mkdir til dette. Dette nye directory kan passende placeres i dit bruger directory på din PC. Når du fremover i kurset skal lave C programmer anbefales det at du laver subdirectories (undermapper) af denne, f.eks. for hver lektion. Så har du orden i dine C-programmer.

// Se på de forskellige terminalkommandoer, og prøv dem af.

// Gem programmet, som du har i din teksteditor, på filen prog.c i det nye directory c-programmer.

// Gå ind i c-programmer med cd kommandoen, og oversæt programmet med gcc. Brug gerne -ansi -pedantic og -Wall options, som beskrevet på compiler sliden.

// Kør programmet, typisk med a.exe.

// Prøv at lave forskellige små ændringer (fejl) i programmet, og find ud hvad compileren fortæller dig når du oversætter det ændrede program.

// Når du er kommet godt igennem denne opgave er du klar til den rigtige IMPR start i næste lektion.

#include <stdlib.h>
#include <stdio.h>
int main(void){
    int a = 2;
    int b = 3;
    printf("%i\n",a + b * 3);
    return EXIT_SUCCESS;
}