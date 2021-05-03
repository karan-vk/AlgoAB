#include <stdio.h>

void swap(int *x, int *y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

int main(int argc, char const *argv[])
{
  int a, b;
  a = 20;
  b = 30;
  printf("%d %d\n", a, b);
  swap(&a, &b);
  printf("%d %d\n", a, b);

  return 0;
}
