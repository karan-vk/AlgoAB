#include <stdio.h>
// #include <stdlib.h>
long double fact(int n)
{
  if (n > 0)
  {
    return n * fact(n - 1);
  }
  return 1;
}

long double c(int n, int r)
{
  long double t1, t2, t3;
  t1 = fact(n);
  t2 = fact(r);
  t3 = fact(n - r);
  return t1 / (t2 * t3);
}

long double cr(int n, int r)
{
  if (r == 0 || n == r)
  {
    return 1;
  }
  return cr(n - 1, r - 1) + cr(n - 1, r);
}
int main(int argc, char const *argv[])
{
  int n, r;
  // n = atoi(argv[1]);
  // r = atoi(argv[2]);
  sscanf(argv[1], "%d", &n);
  sscanf(argv[2], "%d", &r);
  long double x = c(n, r);
  if (cr(n, r) == x)
  {
    printf("%Lf\n", x);
  }

  return 0;
}
