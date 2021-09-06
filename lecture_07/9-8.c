// På siden om tilfældige tal, har vi set en simpel funktion, der simulerer et kast med en terning.

// I nogle sammenhænge er der behov for kast med n terninger, hvor n > 1. I det simple tilfælde kan vi naturligvis blot kaste én terning n gange (i en løkke). I andre tilfælde har vi behov for at have adgang til udfaldene af de n terninger samtidigt, i et array, for at kunne vurdere de n kast under ét. Vi vil senere på kurset få brug for netop denne mulighed.

// Skriv derfor en funktion roll_multiple_dies, med en heltals parameter n, der kaster n terninger, og som afleverer et array af de n terningekast.

// Afleveringen af de n kast kan ske på to måder: gennem en parameter af pointer type eller via funktionens returværdi. Allokering af arrayet kan også varieres: enten allokerer roll_multiple_dies plads, eller også er der allerede allokeret plads, når roll_multiple_dies kaldes. Hvis roll_multiple_dies allokerer plads med dynamisk lagerallokering, i hvert kald, udestår der et efterfølgende arbejde med passende kald af free.

// Skriv, ud fra denne analyse, din foretrukning variant af funktionen roll_multiple_dies.

// Programmer endvidere, i main, 10 kald af af roll_multiple_dies. Giv indledningsvis brugeren mulighed for at indlæse størrelsen n (antallet af terninger). Udskriv, for hvert kald af roll_multiple_dies, udfaldet af de n terningekast.