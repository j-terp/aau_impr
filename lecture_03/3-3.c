// I denne opgave antages det, at du lige har løst self-check opgave 3 side 236 i lærebogen Problem Solving and Program Design in C, eighth edition.

// Målet med opgaven er at træne din evne til at arbejde med nestede if-else konstrolstrukturer, herunder if-else kæder (multiple alternative if statements).

// Sammenlign din løsning med følgende if-else kæde (som bogen kalder en multiple-alternative if):

#include <stdio.h>

int main(void){
    int ph;
    if (ph <= 2)
        printf("Very acidic");  
    else if (ph < 7) 
        printf("Acidic");       
    else if (ph == 7)
        printf("Neutral");      
    else if (ph < 12)
        printf("Alkaline");     
    else 
        printf("Very alkaline");
}

// Er ovenstående if-else kæde ækvivalent med din løsning på bogens opgave? Som en hjælp til afgørelsen, skriv en kommentar efter hvert printf kald som viser præcist, for hvilket interval pH værdier udskriften er gældende. Du skal være meget omhyggelig og systematisk - ellers laver du let en fejl.