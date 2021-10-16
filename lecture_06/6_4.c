//Skriv en funktion multi_apply med tre parametre:
/*
    En funktion f fra double til double. f er en pointer til en funktion.
    Et heltal n der angiver hvor mange gange f skal kaldes.
    En double s, som angiver den værdi som f bliver kaldt på første gang (i det 'inderste' kald).
*/
// multi_apply(f, n, s) skal beregne og returnere f(f( ... f(s))), hvor f kaldes n gange.

// Eksempelvis - og mere konkret - skal
/*
  multi_apply(f, 4, 16.0)
*/
// beregne og returnere f(f(f(f(16.0)))).

// Afprøv f.eks. dit program hvor den aktuelle første parameter til multi_apply er
/*
  double half(double x) {
    return x/2;
  }
*/
// på følgende måde
/*
  multi_apply(half, 4, 16.0)
*/
// Hvilken værdi forventer du at se fra dette kald?

// Som en variant af ovenstående kan du overveje at programmere multi_apply_2 med følgende fire parametre:
/*
    En funktion f fra double til double
    En funktion g fra double til double
    Et heltal n der angiver hvor mange gange f og g skal kaldes
    En double s, som angiver den værdi som g bliver kaldt på første gang (i det 'inderste' kald).
*/
// multi_apply_2(f, g, n, s) skal beregne og returnere (f (g (f (g ... (f (g s)))))), hvor både f og g kaldes n gange.

// Eksperimenter med forskellige kald af multi_apply_2.