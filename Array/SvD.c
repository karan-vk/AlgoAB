#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
  int *p;
  p = (int *)malloc(5 * sizeof(int));
  p[0] = 15;
  p[1] = 250;
  free(p);
  return 0;
}
