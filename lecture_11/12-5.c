

// Lav en struct, som repræsenterer en brøk (engelsk: fraction). Den nye type skal naturligvis have to felter, for hhv. tæller og nævner (engelsk: numerator og denominator). I denne opgave ønsker vi at disse skal være af typen unsigned int. Vi arbejder således udelukkende med positive brøker.

// Programmer nu følgende funktioner på brøker:
/*
    En funktion der forkorter brøken mest muligt (ved at dividere igennem med den største fælles divisor))
    En funktion (procedure) der udskriver en brøk på skærmen.
    En funktion der multiplicerer (ganger) en brøk med et heltal, og som returnerer produktet (en brøk). Forkort den resulterende brøk mest muligt.
    En funktion der multiplicerer (ganger) to brøker sammen, og som returnerer produktet. Forkort den resulterende brøk mest muligt.
    En funktion adderer to brøker (lægger dem sammen) og som returnerer summen. Forkort den resulterende brøk mest muligt.
*/
// Det kan også anbefales at lave en funktion der laver en brøk ud fra en tæller og en nævner. Altså en funktion der returnerer en brøk konstrueret ud fra tæller og nævner input.

// Vi har tidligere i kurset arbejdet med en funktion, der finder den største fælles divisor af to positive heltal. For ikke at bruge for meget tid på dette aspekt, er der en mulig implementation af denne funktion her (Euclids algoritme):

  unsigned int gcd(unsigned int large, unsigned int small){
    unsigned int remainder; 
    while (small > 0){
      remainder = large % small;
      large = small;
      small = remainder;
    }
    return large;
  }

// Når man skal addere to brøkker skal man først finde en fælles nævner. Dette kan gøres ved at multiplicere begge brøker med den anden brøks nævner.

// Hvis du har brug for mere matematisk viden om brøker henviser vi til Wikipedias side om brøker.

// Skriv også en main funktion som giver eksempler på hvordan givne brøker kan konstrueres, adderes og multipliceres.