// Vi vil antage at vi har en struct som beskriver data om en person, så som

  struct person {
    char *name;
    int age;
    char sex;
  }

// hvor sex er enten tegnet 'm' eller 'f'. I denne øvelse bliver du bedt om at programmere funktioner, som kan udskrive et antal personer på en fil, og som efterfølgende kan indlæse disse igen.

// Hvis det er hensigtsmæssigt, er det OK at allokere name som et char array: char name[MAX_NAME_SIZE].
// Konkret, skal der skrives to funktioner
/*
    void print_person(struct person *p, FILE *ofp);
    person *read_person(FILE *ifp);
*/
// Du kan vælge en tekst-baseret og linie-orienteret fremgangsmåde, som illustreret ved forelæsningen. Som et noget lettere alternativ kan du vælge at anvende en binær fremgangsmåde ved brug af fwrite og fread.

// Overvej hvad der skal til for at anvende fwrite og fread på struct person.