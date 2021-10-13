// Rewrite the following mathematical expressions using C functions:
/*
a) root2(u + v) * w^2
b) log-e(x^y)
c) root2((x - y)^3)
d) |x * y - w / z|
*/

int main(void) {
  int u, v, w, x, y, z;
  printf("a) %d\n", sqrt(u + v) * pow(w, 2));
  printf("b) %d\n", lg(pow(x, y)));
  printf("c) %d\n", sqrt(pow(x - y, 3)));
  printf("d) %d\n", abs(x * y - w / z));
  return 0;
}