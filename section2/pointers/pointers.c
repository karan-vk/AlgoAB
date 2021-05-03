#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a = 10;
  int *p;
  p = &a;
  printf("P :%p\n", p);
  printf("A :%p\n", &a);

  int *x;
  x = (int *)malloc(5 * sizeof(int));
  return 0;
}
