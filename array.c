#include <stdio.h>

void ar(int *A)
{
  int i;
  printf("%p\n", *A);

  for (i = 0; i < sizeof(A); i++)
  {
    printf("%d\n", A[i]);
  }
}

int main(int argc, char const *argv[])
{
  int A[5] = {2, 3, 4, 5, 6};
  printf("%p\n", &A);
  ar(A);
  return 0;
}
