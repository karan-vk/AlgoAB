#include <stdio.h>
#include <stdlib.h>
int sumofn(int n)
{
  if (n > 0)
  {
    return n + sumofn(n - 1);
  }
  return 0;
}

int main(int argc, char *argv[])
{
  int in = atoi(argv[1]);
  int x = sumofn(in);
  printf("\n%d\n", x);
  return 0;
}
