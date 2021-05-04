#include <iostream>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
  int *p;
  p = new int[5];
  for (int i = 1; i <= 5; i++)
  {
    p[i - 1] = i;
  }

  int *q;
  q = new int[10];
  for (int i = 0; i < 5; i++)
  {
    q[i] = p[i];
  }
  delete[] p;
  p = q;
  q = NULL;

  return 0;
}
