#include <stdio.h>

int powC(int m, int n)
{
  if (n == 0)
    return 1;
  if (n % 2 == 0)
    return powC(m * m, n / 2);
  else
    return m * powC(m * m, (n - 1) / 2);
}
int powLoop(int m, int n)
{
  int res = 1;
  for (n; n > 0; n--)
  {
    res = res * m;
  }
  return res;
}

int main(int argc, char const *argv[])
{
  int x = powC(2, 9);
  printf("%d", x);
  return 0;
}
