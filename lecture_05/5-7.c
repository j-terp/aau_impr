// I lektionen om iterative kontrolstrukturer arbejdede vi med to opgaver, som vi nu vil tage op igen med det formål at indføre abstraktion med funktioner.

// I opgave programmeringsopgave 1 side 267 (i Problem Solving and Program Design in C, eighth edition) summerede vi alle heltal fra 1 til n, og vi sammenlignede værdien af denne sum med (n + 1)* n / 2. Skriv nu følgende to funktioner:
/*
    En funktion sum-iter med én int parameter n. Funktionen skal addere alle heltal fra 1 til n. Funktionen skal returnere denne sum.
    En funktion sum-formula med én int parameter n som indkapsler beregningen af (n + 1)* n / 2, og som returnerer værdien af dette udtryk.
*/
// I skal kalde disse to funktioner på passende input og sammenligne deres resultater (ligesom i den oprindelige opgave).

// I lektionen om iterative kontrolstrukturer arbejdede vi også med opgave 1 side 181 i bogen. Vi har en befolkning på 9870 personer som vokser med 10% per år. Spørgsmålet var hvor mange år der går inden befolkningstallet er mere end 30000.

// Skriv nu en funktion som generaliserer denne opgave. Mere specifikt:

//     En funktion population-projection med tre double parametre: start-befolkningstallet, vækstprocent pr år, og den øvre grænse af befolkningstallet. Funktionen skal returnere det antal år (af typen int) det tager for befolkningen at vokse fra start-befolkningstlalet til mere end slut-befolkningstallet.

// Kald derefter funktionen så den løser opgaven fra side 181 i bogen (med de tre givne tal 9870, 10% og 30000).