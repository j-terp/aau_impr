// Et spillekort er karakteriseret af en kulør (klør, ruder, hjerter og spar) og en værdi (es, 2, .., 10, knægt, dame, og konge). Alternativt kan et spillekort være en joker (som hverken har kulør eller værdi).

// Definer en struct i C (med felter kuloer og vaerdi) som repræsenterer et spillekort. Beslut selv typen af felterne. Overvej hvordan du ønsker at håndtere jokeren!

// Lav et spil kort bestående af de 52 "normale" spillekort og 3 jokere, altså ialt 55 kort. Organiser disse i et array af structs.

// Programmer en funktion sorter_kort som sorterer kortene således:
/*
    Klør kommer før ruder kommer før hjerter kommer før spar
    Inden for hver kulør benyttes ordningen 2, ..., 10, knægt, dame, konge og es.
    Jokerne kommer efter de normale spillekort
*/
// I programmeringen af sort_kort anbefales det at benytte qsort med en passende sammenligningsfunktion.

// Målet med opgaven er at opnå viden og færdigheder i programmering med structs og array af structs. Det er endvidere målet at opnå viden og færdigheder om sortering af et array af structs.