#include <stdio.h>

int fact(int n)
{
  if (n > 0)
  {
    return n * fact(n - 1);
  }
  return 1;
}

int main(int argc, char const *argv[])
{
  int res = fact(5);
  printf("%d", res);
  return 0;
}
