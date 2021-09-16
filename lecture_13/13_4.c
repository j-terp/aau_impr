// En vilkårlig matrix kan generelt repræsenteres på en tekstfil, med én linje pr. række. Første linje kan angive antallet af rækker og søjler i matricen (altså to heltal). I denne opgave kalder vi dette for den generelle tekstfil repræsentation af vilkårlige matricer.

// En tynd matrix er et array af to dimensioner, hvor mange af elementerne er nul.

// I denne opgave vil vi skrive et program der undersøtter en speciel tekstfil repræsentation af tynde matricer på tekstfiler, som i visse tilfælde fylder mindre end den generelle repræsentation af matricer på tekstfiler. I den nye repræsentation skal den første linje af tekstfilen indeholde dimensionerne af matricen - to heltal - antal rækker og antal søjler. Hver af de efterfølgende linjer indholder tre tal: Rækkenummer, søjlenummer, og et tal fra matricen (som ikke er nul). Om nødvendigt kan man gøre sig antagelser om rækkefølgen af linjer i den specielle tekstfil repræsentation.

// Skriv først en funktion som læser en matrix fra den generelle repræsentation på en tekstfil, og som udskriver den specielle tynde repræsentation på en ny tekstfil.

// Skriv dernæst en funktion som løser det omvendte problem: Læsning af en tynd matrix fra en tekstfil og skrivning af en tilvarende matrix på generel form på en anden tekstfil.

// Som et eksempel svarer følgende generelle tekstfil repræsentation af matricen
/*
    4 3
    0.0 0.0 1.0
    0.0 0.0 0.0
    2.0 0.0 0.0
    0.0 3.0 0.0
*/
// til følgende specielle tekstfil repræsentation af matricen - som er en tynd matrix
/*
    4 3
    1 3 1.000000
    3 1 2.000000
    4 2 3.000000
*/
// Denne opgave svarer til opgave 4 side 679 i 6. udgave af lærebogen